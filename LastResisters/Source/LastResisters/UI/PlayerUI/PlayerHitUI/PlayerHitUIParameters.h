// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerHitUIParameters.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FPlayerHitUIParameters
{
	GENERATED_BODY()

	enum HIT_STATES
	{
		STATE_HIT,
		STATE_BLOCK,
		STATE_MISS,
		TOTAL_STATES
	};

		//The duration of the attack
	FFloat16 duration;
	//Where to place this on the canvas.
	FVector position;
	//Rotation of the attack
	FFloat16 rotation;
	//Enemy ID in terms of it's string
	FString enemyID;
	//Enemy Attack string
	int attackIndex;

	//The boolean that changes wheneve rhte value change so the rate is only calculated once
	bool calculateRate;
	//The float that stores the rate
	float rate;
	//The delay timer that counts towards the delay
	float delayTimer;
	//The delay
	float delay;

	//Current fill which is range from 0 to 1
	float currentFill;
	//Desired fill from range 0 to 1
	float desiredFill;

	//Time for rate of colorLerps
	bool calculateRateColorLerp;
	float colorRate;
	float colorDelayTimer;
	float colorDelay;

	bool awaitingResponse;

	
	//Shader stuff.

	//Do we use a texture for this parameter?
	bool useTexture;
	//How bright the texture is.
	float textureBrightness;

	//The hitPercentage of the image in the range of 0 to 1.
	float blockPercentage;

	//Hit state.
	HIT_STATES hitState;

	//Constructor for the hit parameters.
	FPlayerHitUIParameters();

	//Reset default function just in case we want to keep the current instance of the class.
	void ResetDefault();


};
