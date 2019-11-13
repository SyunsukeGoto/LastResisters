// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerHitUIParameters.h"
#include "../../../Managers/MyAttackManager.h"
#include "Materials/MaterialInterface.h"
#include "PlayerHitIndicator.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FPlayerHitIndicator
{
	GENERATED_BODY()

	//Linked image One
	class UImage * LinkedImage;
	//Linked Image Two - the other one
	class UImage * LinkedImageTwo;
	//Background Images. These are pointers to the actual ones.
	class UImage * LinkedBackground;
	//Texture we'll set as a parameter to our dynamic material instance
		class UTexture * MainTexture = nullptr;
	//Desired Texture we'll set as a parameter to our dynamic material instance
		class UTexture * DesiredBlockTexture = nullptr;
	//Desired Texture we'll set as a parameter to our dynamic material instance
		class UTexture * DesiredHitTexture = nullptr;
	//Color just in case we are not using texture.
		FColor MainColor;
	//Desired color just in case we are not using texture
		FColor DesiredBlockColor;
	//Desired color just in case we are not using texture
		FColor DesiredHitColor;
	//Our actual MaterialInstance 
	class UMaterialInstanceDynamic * MaterialInstance = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FPlayerHitUIParameters playerHitParameters;

	//Constructors
	FPlayerHitIndicator();
	FPlayerHitIndicator(bool isDefault);

	//No pointer work around
	bool isDefault;

	//Functions for dealing with info.
	void ApplyToImage(UImage * imageToApply);
	void UpdatePercent();
	void UpdateState();
	void UpdateBlockPercentage();
	void ApplyToMaterial();
	void AssignParametersFromInfo(MyAttackManager::Attack_Info infoReceived);
	void PrintDetails();
	void UpdateFillAmount(float inDeltaTime);

};
