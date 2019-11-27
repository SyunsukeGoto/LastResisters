// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitIndicator.h"
#include "Components/Image.h"
#include "../../Math/UIMath.h"
#include "Materials/MaterialInstanceDynamic.h"

FPlayerHitIndicator::FPlayerHitIndicator()
	: isDefault(false)
	, stayOnScreenTimer(0)
	, stayOnScreenTime(0.35f)
{
}

FPlayerHitIndicator::FPlayerHitIndicator(bool isDefault_)
	: isDefault(isDefault_)
{
}

void FPlayerHitIndicator::ApplyToImage(UMaterialInstanceDynamic * dynamicInstance, UImage * imageToApply)
{
	imageToApply->SetBrushFromMaterial(dynamicInstance);
}

void FPlayerHitIndicator::UpdatePercent()
{
	//This is the time thingy?
	//MaterialInstance->SetScalarParameterValue("Percentage", playerHitParameters.currentFill);
	float percent = UIMath::NormalizeValueCustomRange(playerHitParameters.currentFill, 0.5f, 1.0f);
	MaterialInstance->SetScalarParameterValue("Percentage", percent);
	MaterialInstanceTwo->SetScalarParameterValue("Percentage", percent);

}

void FPlayerHitIndicator::UpdateState()
{
	//Update the state based on the results also.
	if (playerHitParameters.useTexture)
	{
		MaterialInstance->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);
		MaterialInstanceTwo->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);
	}
	else
	{
		MaterialInstance->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);
		MaterialInstanceTwo->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);
	}
}

void FPlayerHitIndicator::UpdateBlockPercentage()
{
	MaterialInstance->SetScalarParameterValue("BlockPercentage", playerHitParameters.blockPercentage);
	MaterialInstanceTwo->SetScalarParameterValue("BlockPercentage", playerHitParameters.blockPercentage);
}

void FPlayerHitIndicator::ApplyToMaterial()
{
	//Whether to use texture.
	MaterialInstance->SetScalarParameterValue("Use Texture", playerHitParameters.useTexture);
	MaterialInstanceTwo->SetScalarParameterValue("Use Texture", playerHitParameters.useTexture);

	if (playerHitParameters.useTexture)
	{
		//First material
		MaterialInstance->SetTextureParameterValue("MainTexture", MainTexture);
		MaterialInstance->SetTextureParameterValue("DesiredBlockTexture", DesiredBlockTexture);
		MaterialInstance->SetTextureParameterValue("DesiredMissTexture", DesiredHitTexture);
		MaterialInstance->SetScalarParameterValue("TextureBrightness", playerHitParameters.textureBrightness);
		MaterialInstance->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);

		//Second Material
		MaterialInstanceTwo->SetTextureParameterValue("MainTexture", MainTexture);
		MaterialInstanceTwo->SetTextureParameterValue("DesiredBlockTexture", DesiredBlockTexture);
		MaterialInstanceTwo->SetTextureParameterValue("DesiredMissTexture", DesiredHitTexture);
		MaterialInstanceTwo->SetScalarParameterValue("TextureBrightness", playerHitParameters.textureBrightness);
		MaterialInstanceTwo->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);
	}
	else
	{
		//First color
		MaterialInstance->SetVectorParameterValue("MainColor", MainColor);
		MaterialInstance->SetVectorParameterValue("DesiredMissColor", DesiredHitColor);
		MaterialInstance->SetVectorParameterValue("DesiredBlockColor", DesiredBlockColor);
		MaterialInstance->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);

		//Second color.
		MaterialInstanceTwo->SetVectorParameterValue("MainColor", MainColor);
		MaterialInstanceTwo->SetVectorParameterValue("DesiredMissColor", DesiredHitColor);
		MaterialInstanceTwo->SetVectorParameterValue("DesiredBlockColor", DesiredBlockColor);
		MaterialInstanceTwo->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);
	}
	////Update percentage.
	//UpdatePercent();
}

void FPlayerHitIndicator::AssignParametersFromInfo(MyAttackManager::Attack_Info infoReceived)
{
	//Call default and change the rest
	playerHitParameters = FPlayerHitUIParameters();
	playerHitParameters.enemyID = infoReceived.info_EnemyID;
	playerHitParameters.position = infoReceived.info_Position;
	playerHitParameters.rotation = infoReceived.info_Rotation;
	playerHitParameters.duration = infoReceived.info_CountdownTimer;
	playerHitParameters.attackIndex = infoReceived.attackIndex;
	playerHitParameters.calculateRate = true;
	playerHitParameters.blockPercentage = 0;
	stayOnScreenTimer = 0;
	stayOnScreenTime = 0.35f;
}


void FPlayerHitIndicator::PrintDetails()
{
	UE_LOG(LogTemp, Warning, TEXT("Name: %s , Position : (%f, %f, %f), Rotation : (%f), Duration : (%f)")
		, *playerHitParameters.enemyID
		, playerHitParameters.position.X
		, playerHitParameters.position.Y
		, playerHitParameters.position.Z
		, (float)playerHitParameters.rotation
		, (float)playerHitParameters.duration);
}

void FPlayerHitIndicator::UpdateFillAmount(float inDeltaTime)
{

	if (playerHitParameters.calculateRate)
	{
		playerHitParameters.rate = (playerHitParameters.desiredFill - playerHitParameters.currentFill) / playerHitParameters.duration;

		if (LinkedImage != nullptr)
			LinkedImage->SetVisibility(ESlateVisibility::Visible);
		if (LinkedBackground != nullptr)
			LinkedBackground->SetVisibility(ESlateVisibility::Visible);
		if (LinkedImageTwo != nullptr)
			LinkedImageTwo->SetVisibility(ESlateVisibility::Visible);
		if (ResultImage != nullptr)
			ResultImage->SetVisibility(ESlateVisibility::Hidden);

		playerHitParameters.calculateRate = false;
		//UE_LOG(LogTemp, Warning, TEXT("Calculated rate : %f"), playerHitParameters.rate);
	}
	//Else we keep minusing and only if they;re not already the same

	//UE_LOG(LogTemp, Warning, TEXT("Current Fill: %f"),playerHitParameters.currentFill);
	if (playerHitParameters.desiredFill != playerHitParameters.currentFill)
	{
		playerHitParameters.currentFill += (playerHitParameters.rate)* inDeltaTime;

		if (playerHitParameters.rate > 0)
		{
			if (playerHitParameters.currentFill >= playerHitParameters.desiredFill)
				playerHitParameters.currentFill = playerHitParameters.desiredFill;
		}
		else
		{
			if (playerHitParameters.currentFill <= playerHitParameters.desiredFill)
				playerHitParameters.currentFill = playerHitParameters.desiredFill;
		}

		//Update percent
		UpdatePercent();
	}
	else
	{
		if (stayOnScreenTimer < stayOnScreenTime)
		{
			stayOnScreenTimer += inDeltaTime;
			if (ResultImage != nullptr)
				ResultImage->SetVisibility(ESlateVisibility::Visible);
		}
		else
		{
			playerHitParameters.blockPercentage = 0.0f;
			UpdateBlockPercentage();

			if (LinkedImage != nullptr)
				LinkedImage->SetVisibility(ESlateVisibility::Hidden);
			if (LinkedBackground != nullptr)
				LinkedBackground->SetVisibility(ESlateVisibility::Hidden);
			if (LinkedImageTwo != nullptr)
				LinkedImageTwo->SetVisibility(ESlateVisibility::Hidden);
			if (ResultImage != nullptr)
				ResultImage->SetVisibility(ESlateVisibility::Hidden);

			//also set duration to 0? or something, temporary codes
			playerHitParameters.duration = 0.f;
		}

	}
}


