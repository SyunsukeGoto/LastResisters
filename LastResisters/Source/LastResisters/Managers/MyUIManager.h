// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyAttackManager.h"
#include "Components/Image.h"
#include "../UI/PlayerUI/PlayerHitUI/PlayerHitIndicator.h"

/**
 *
 */
class LASTRESISTERS_API MyUIManager
{
public:
	MyUIManager();
	~MyUIManager();

	//Amount of max UI
	const int maxUI = 5;

	//Update function
	void Update(float deltaTime);

	//Arrays that store information.
	TArray<FPlayerHitIndicator> playerHitIndicators;
	TArray<MyAttackManager::Attack_Info> additionalRequests;

	//Finds the next available image to use and assign
	int FindNextAvailableImage();

	//Function that makes the next available image take info from request queue.
	void TakeInfoFromRequestQueue();

	//Handle functions
	void HandleInit(MyAttackManager::Attack_Info infoToReceive);
	void HandleDelete(MyAttackManager::Attack_Info infoToReceive, bool blocked);

	//Prints every single indicator
	void PrintIndicatorList();

	//Array of all positions;
	TArray<FVector> positionArray;
	TArray<FVector2D> screenPositionArray;

	//Array of image 
	TArray<UImage*> imageArray;
	TArray<UImage*> spriteArray;
	TArray<UImage*> resultArray;

	UTexture2D * successImage = nullptr;
	UTexture2D * failImage = nullptr;

	//Values set.
	FVector2D desiredScale;
	float scaleTime;
	float delay;

	//Values two
	FVector2D desiredDownScale;
	float downScaleTime;
	float downScaleDelay;

	void StoreValues(FVector2D desiredScale, float scaleTime, float delay);
	void StoreDownScaleValues(FVector2D desiredDownScale, float downScaleTime, float downScaleDelay);

private:
	int failZOrder = 11;
	int defaultZOrder = -1;

};
