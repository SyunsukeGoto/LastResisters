// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "WeaponSkillGaugeParameters.h"
#include "WeaponSkillGauge.generated.h"

/**
 * This struct holds all the parameters that the weapon skill gauge has
 */
USTRUCT(BlueprintType)
struct FWeaponSkillGauge
{
	GENERATED_BODY()

	//Our base material that will be the template for our material instance
	UPROPERTY(EditDefaultsOnly)
	class UMaterialInterface * Material = nullptr;

	//Our actual materialInstance 
	class UMaterialInstanceDynamic * MaterialInstance = nullptr;

	//Texture we'll set as a parameter to our dynamic material instance
	UPROPERTY(EditDefaultsOnly)
		class UTexture * Texture = nullptr;

	//Texture we'll set as a parameter to our dynamic material instance
	UPROPERTY(EditDefaultsOnly)
		class UTexture * OpacityMask = nullptr;

	//Color just in case we are not using texture.
	UPROPERTY(EditDefaultsOnly)
		 FColor Color;

	//All the other parameters.
	UPROPERTY(EditDefaultsOnly)
	FWeaponSkillGaugeParameters weaponSkillParameters;

	//Constructor
	FWeaponSkillGauge();

	//Functions.
	void ApplyToImage(UImage * imageToApply);
	void ApplyToMaterial();
	void UpdatePercent();
};
