// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyIconParameters.generated.h"

 /**
  * This struct holds all the parameters that the gauge has
  * I have made this accessible from the editor so change it from there.
  */
USTRUCT(BlueprintType)
struct FEnemyIconParameters
{
	GENERATED_BODY()

		//Implement all shader variables here
		FEnemyIconParameters();

	//The brightness multiplier of the texture
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float brightness;
	//The scale of the opacity mask.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float opacityMaskScale;
	//The color of the progres if no texture is used.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FVector2D scaleorigin;

};
