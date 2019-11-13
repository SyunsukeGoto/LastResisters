// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitIndicator.h"
#include "Components/Image.h"
#include "../../Math/UIMath.h"
#include "Materials/MaterialInstanceDynamic.h"

FPlayerHitIndicator::FPlayerHitIndicator()
	: isDefault(false)
{
}

FPlayerHitIndicator::FPlayerHitIndicator(bool isDefault_)
	: isDefault(isDefault_)
{
}

void FPlayerHitIndicator::ApplyToImage(UImage * imageToApply)
{
	imageToApply->SetBrushFromMaterial(MaterialInstance);
}

void FPlayerHitIndicator::UpdatePercent()
{
	float percent = UIMath::NormalizeValueCustomRange(playerHitParameters.currentFill, 0.5f, 1.f);
	//This is the time thingy?
	//MaterialInstance->SetScalarParameterValue("Percentage", playerHitParameters.currentFill);
	MaterialInstance->SetScalarParameterValue("Percentage", percent);

}

void FPlayerHitIndicator::UpdateState()
{
	//Update the state based on the results also.
	if (playerHitParameters.useTexture)
		MaterialInstance->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);
	else
		MaterialInstance->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);
}

void FPlayerHitIndicator::UpdateBlockPercentage()
{
	MaterialInstance->SetScalarParameterValue("BlockPercentage", playerHitParameters.blockPercentage);
}



void FPlayerHitIndicator::ApplyToMaterial()
{
	MaterialInstance->SetScalarParameterValue("Use Texture", playerHitParameters.useTexture);
	if (playerHitParameters.useTexture)
	{
		MaterialInstance->SetTextureParameterValue("MainTexture", MainTexture);
		MaterialInstance->SetTextureParameterValue("DesiredBlockTexture", DesiredBlockTexture);
		MaterialInstance->SetTextureParameterValue("DesiredMissTexture", DesiredHitTexture);
		MaterialInstance->SetScalarParameterValue("TextureBrightness", playerHitParameters.textureBrightness);
		MaterialInstance->SetScalarParameterValue("TextureState", (int)playerHitParameters.hitState);
	}
	else
	{
		MaterialInstance->SetVectorParameterValue("MainColor", MainColor);
		MaterialInstance->SetVectorParameterValue("DesiredMissColor", DesiredHitColor);
		MaterialInstance->SetVectorParameterValue("DesiredBlockColor", DesiredBlockColor);
		MaterialInstance->SetScalarParameterValue("ColorState", (int)playerHitParameters.hitState);
	}

		MaterialInstance->SetScalarParameterValue("Percentage", playerHitParameters.currentFill);
}

void FPlayerHitIndicator::AssignParametersFromInfo(MyAttackManager::Attack_Info infoReceived)
{
	//Call default and change the rest
	playerHitParameters = FPlayerHitUIParameters();
	playerHitParameters.enemyID = infoReceived.info_EnemyID;
	playerHitParameters.position = infoReceived.info_Position;
	playerHitParameters.rotation = infoReceived.info_Rotation;
	playerHitParameters.duration = infoReceived.info_CountdownTimer;
	playerHitParameters.calculateRate = true;

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
		playerHitParameters.calculateRate = false;
		//UE_LOG(LogTemp, Warning, TEXT("Calculated rate : %f"), playerHitParameters.rate);
	}
	//Else we keep minusing and only if they;re not already the same

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
		//Function ended...
		//Set the brush to cant see but sure.
		//Can add effects to it also.

		playerHitParameters.awaitingResponse = true;

		if (playerHitParameters.hitState == FPlayerHitUIParameters::HIT_STATES::TOTAL_STATES)
		{
			playerHitParameters.hitState = (FPlayerHitUIParameters::HIT_STATES)FMath::RandRange(0, 1);
	
			switch (playerHitParameters.hitState)
			{
			case	FPlayerHitUIParameters::HIT_STATES::STATE_HIT:
			{
				UE_LOG(LogTemp, Warning, TEXT("Generated hit."));
				//LinkedBackground->Brush.TintColor = FSlateColor(DesiredHitColor);
				break;
			}
			case	FPlayerHitUIParameters::HIT_STATES::STATE_BLOCK:
			{
				UE_LOG(LogTemp, Warning, TEXT("Generated block."));
				//LinkedBackground->Brush.TintColor = FSlateColor(DesiredBlockColor);
				break;
			}
			case	FPlayerHitUIParameters::HIT_STATES::STATE_MISS:
			{
				UE_LOG(LogTemp, Warning, TEXT("Generated miss."));
				break;
			}
			case	FPlayerHitUIParameters::HIT_STATES::TOTAL_STATES:
			default:
			{
				UE_LOG(LogTemp, Warning, TEXT(" Total states."));
				break;
			}
			}
		}
		if (playerHitParameters.blockPercentage < 1)
		{
			playerHitParameters.blockPercentage += 0.4f;
		}
		else
		{
			playerHitParameters.blockPercentage = 1.0f;
			//also set duration to 0? or something, temporary codes
			playerHitParameters.duration = 0;
			if (LinkedImage != nullptr)
				LinkedImage->SetVisibility(ESlateVisibility::Hidden);
			if (LinkedBackground != nullptr)
				LinkedBackground->SetVisibility(ESlateVisibility::Hidden);
			if (LinkedImageTwo != nullptr)
				LinkedImageTwo->SetVisibility(ESlateVisibility::Hidden);
		}
		UpdateBlockPercentage();
	}
}


