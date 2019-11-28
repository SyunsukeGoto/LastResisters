// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyIconParameters.h"
#include "Components/Image.h"
#include "EnemyIcon.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FEnemyIcon
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
		FEnemyIconParameters iconParameters;

	FEnemyIcon();

	void ApplyToImage(UImage * imageToApply);
	void ApplyToMaterial();
	void UpdateTexture(UTexture * textureToUpdate);
	void SetTexture();
};

