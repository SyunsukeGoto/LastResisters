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
	//Linked image One
	class UImage * ResultImage;
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
	//Our actual MaterialInstance 
	class UMaterialInstanceDynamic * MaterialInstanceTwo = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FPlayerHitUIParameters playerHitParameters;

	//Constructors
	FPlayerHitIndicator();
	FPlayerHitIndicator(bool isDefault);

	//Functions for dealing with info.
	void ApplyToImage(UMaterialInstanceDynamic * dynamicInstance, UImage * imageToApply);
	void UpdatePercent();
	void UpdateState();
	void UpdateBlockPercentage();
	void ApplyToMaterial();
	void AssignParametersFromInfo(MyAttackManager::Attack_Info infoReceived);
	void PrintDetails();
	void UpdateFillAmount(float inDeltaTime);

#pragma region Scale Struct
	//Struct for values
	struct ScaleValue
	{
		//Do we calculate rate.
		bool calculateRate = true;
		//Rate at which scale increases.
		float rate = 0;
		//The delay timer that counts towards the delay
		float delayTimer = 0;
		//The delay
		float delay = 0;
		//Desired scale
		float desiredScale;
		//Current scale
		float currentScale;
		//Duration
		float duration;

		ScaleValue()
			: calculateRate(true)
			, rate(0)
			, delayTimer(0)
			, delay(0)
			,desiredScale(1)
			,currentScale(1)
			,duration(0)
		{
		}		

		void StoreValues(float desiredScale, float duration, float delay)
		{
			this->desiredScale = desiredScale;
			this->duration = duration;
			this->delay = delay;
		}

		void Reset()
		{
			calculateRate = true;
			rate = 0;
			delayTimer = 0;
			delay = 0;
			desiredScale = 1;
			currentScale = 0;
			duration = 0;
		}
	};

#pragma endregion

	ScaleValue scaleX;
	ScaleValue scaleY;

	//Scale stuff
	void UpdateScaleXY(float inDeltaTime);
	void UpdateScaleAmountX(float inDeltaTime);
	void UpdateScaleAmountY(float inDeltaTime);

	//Hit Results
	enum HitResults
	{
		HIT,
		BLOCK,
		TOTAL
	};

	HitResults hitResults;

	void UpdateResults(float inDeltaTime);

	//Linking variables.
	int indexInArray;
	int indexInArrayTwo;
	float currentOpacity;


private:
	//No pointer work around
	bool isDefault;
	//Some other timers
	float stayOnScreenTime;
	float stayOnScreenTimer;



};
