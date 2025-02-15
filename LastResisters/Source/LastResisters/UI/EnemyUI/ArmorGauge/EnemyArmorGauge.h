// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Image.h"
#include "EnemyArmorGaugeParameters.h"
#include "EnemyArmorGauge.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FEnemyArmorGauge
{
	GENERATED_BODY()

		//Our base material that will be the template for our material instance
		UPROPERTY(EditDefaultsOnly)
		class UMaterialInterface * Material = nullptr;

	//Our actual materialInstance 
	class UMaterialInstanceDynamic * MaterialInstance = nullptr;

	UPROPERTY(EditDefaultsOnly)
		class UTexture * Texture = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FEnemyArmorGaugeParameters armorParameters;

	FEnemyArmorGauge();

	void ApplyToImage(UImage * imageToApply);
	void ApplyToMaterial();
	void UpdatePercent();



};
