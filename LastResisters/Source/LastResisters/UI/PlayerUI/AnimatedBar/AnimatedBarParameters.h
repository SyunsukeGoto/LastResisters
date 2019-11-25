// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimatedBarParameters.generated.h"

/**
 *
 */
 /**
  * This struct holds all the parameters that the gauge has
  * I have made this accessible from the editor so change it from there.
  */
USTRUCT(BlueprintType)
struct FAnimatedBarParameters
{
	GENERATED_BODY()

		//The progress of the image in the range of 0 to 1.
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float percent;
	//The brightness of the image;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float brightness;
	//The brightness of the image;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float opacityStrength;
	//Are we using a texture?
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		bool useTexture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FColor color;
	FAnimatedBarParameters();



};

