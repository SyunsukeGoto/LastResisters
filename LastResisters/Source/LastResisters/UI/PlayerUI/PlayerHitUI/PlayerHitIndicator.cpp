// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitIndicator.h"
#include "Components/Image.h"
#include "../../Math/UIMath.h"
#include "Materials/MaterialInstanceDynamic.h"

FPlayerHitIndicator::FPlayerHitIndicator()
	: isDefault(false)
	, stayOnScreenTimer(0)
	, stayOnScreenTime(0.35f)
	, currentOpacity(1)
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
	scaleX.Reset();
	scaleY.Reset();
	currentOpacity = 1;
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
		UpdateResults(inDeltaTime);
	}
}

void FPlayerHitIndicator::UpdateScaleXY(float inDeltaTime)
{
	if (scaleX.calculateRate)
	{
		scaleX.delayTimer = scaleX.delay;
		UpdateScaleAmountX(inDeltaTime);
	}
	else
	{
		if (scaleX.delayTimer > 0)
			scaleX.delayTimer -= inDeltaTime;
		else
			UpdateScaleAmountX(inDeltaTime);
	}

	if (scaleY.calculateRate)
	{
		scaleY.delayTimer = scaleY.delay;
		UpdateScaleAmountY(inDeltaTime);
	}
	else
	{
		if (scaleY.delayTimer > 0)
			scaleY.delayTimer -= inDeltaTime;
		else
			UpdateScaleAmountY(inDeltaTime);
	}
}

void FPlayerHitIndicator::UpdateScaleAmountX(float inDeltaTime)
{
	if (scaleX.calculateRate)
	{
		scaleX.rate = (scaleX.desiredScale - scaleX.currentScale) / scaleX.duration;
		scaleX.calculateRate = false;
	}

	if (scaleX.desiredScale != scaleX.currentScale)
	{
		scaleX.currentScale += scaleX.rate * inDeltaTime;
		playerHitParameters.currentFill += (playerHitParameters.rate)* inDeltaTime;

		if (scaleX.rate > 0)
		{
			if (scaleX.currentScale >= scaleX.desiredScale)
				scaleX.currentScale = scaleX.desiredScale;
		}
		else
		{
			if (scaleX.currentScale <= scaleX.desiredScale)
				scaleX.currentScale = scaleX.desiredScale;
		}
	}
	else
	{
		//Reached...
	}

}

void FPlayerHitIndicator::UpdateScaleAmountY(float inDeltaTime)
{
	if (scaleY.calculateRate)
	{
		scaleY.rate = (scaleY.desiredScale - scaleY.currentScale) / scaleY.duration;
		scaleY.calculateRate = false;
	}

	if (scaleY.desiredScale != scaleY.currentScale)
	{
		scaleY.currentScale += scaleY.rate * inDeltaTime;
		playerHitParameters.currentFill += (playerHitParameters.rate)* inDeltaTime;

		if (scaleY.rate > 0)
		{
			if (scaleY.currentScale >= scaleY.desiredScale)
				scaleY.currentScale = scaleY.desiredScale;
		}
		else
		{
			if (scaleY.currentScale <= scaleY.desiredScale)
				scaleY.currentScale = scaleY.desiredScale;
		}
	}
	else
	{
		//Reached...
	}
}

void FPlayerHitIndicator::UpdateResults(float inDeltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("Updating Results :%f"), currentOpacity)
	switch (hitResults)
	{
		case HIT:
		{
			currentOpacity -= 0.06f;		
			if (currentOpacity <= 0)	
			{
				playerHitParameters.duration = 0;
				ResultImage->SetVisibility(ESlateVisibility::Hidden);
				currentOpacity = 1.0f;
			
			}
			ResultImage->SetOpacity(currentOpacity);
			break;
		}
		case BLOCK:
		{
			currentOpacity -= 0.06f;
			if (currentOpacity <= 0)
			{
				playerHitParameters.duration = 0;
				ResultImage->SetVisibility(ESlateVisibility::Hidden);
				currentOpacity = 1.0f;
			
			}
			ResultImage->SetOpacity(currentOpacity);
			break;
		}
		case TOTAL:
		default:
		{
			break;
		}

	}

}


