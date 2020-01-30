// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "../CircularHealth/CircularHealth.h"
#include "../DashGauge/DashGauge.h"
#include "../WeaponIcons/WeaponSkillGauge.h"
#include "../AnimatedBar/AnimatedBar.h"
#include "PlayerUI.generated.h"


/**
 * The class for handling the player's UI. (not very well written as u can see)
 */
UCLASS()
class LASTRESISTERS_API UPlayerUI : public UUserWidget
{
	GENERATED_BODY()

public:
	//Public variables here.
	UPlayerUI(const FObjectInitializer& ObjectInitializer);

	// Optionally override the Blueprint "Event Construct" event
	virtual void NativeConstruct() override;

	// Optionally override the tick event
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//Objects start here.
	//The image for the delayed dash gauge
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * DelayedDashGauge = nullptr;
	//Image for the instant dash gauge
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * InstantDashGauge = nullptr;
	//Image for the circular health
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * CircularHealth = nullptr;
	//Textblock for health
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock * HealthText = nullptr;
	////Image for the main weapon gauge
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * WeaponGauge = nullptr;
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * ShieldGauge = nullptr;

	////Image for the main weapon gauge charge effect
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * WeaponChargeEffect = nullptr;
	////Image for the main weapon gauge flame effect
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * WeaponFlameEffect = nullptr;

	////Image for the main weapon gauge charge effect
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * ShieldChargeEffect = nullptr;
	////Image for the main weapon gauge flame effect
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * ShieldFlameEffect = nullptr;

	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedBar = nullptr;

	//Bar Images

	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedVerticalBarOne = nullptr;

	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedVerticalBarTwo = nullptr;
	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedVerticalBarThree = nullptr;
	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedHorizontalBarOne = nullptr;

	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedHorizontalBarTwo = nullptr;
	////Image for the UI animation
	//UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	//	class UImage * UIAnimatedHorizontalBarThree = nullptr;

	//Struct that holds values of the delayed gauge
	UPROPERTY(EditDefaultsOnly)
		FDashGauge delayedGauge;
	//Struct that holds values of the instant gauge
	UPROPERTY(EditDefaultsOnly)
		FDashGauge instantGauge;
	//Animated yellow bar at right
	UPROPERTY(EditDefaultsOnly)
		FDashGauge animatedBar;
	//Struct that holds values of the circular health
	UPROPERTY(EditDefaultsOnly)
		FCircularHealth f_circularHealth;
	//Struct that holds value for the main weapon gauge
	/*UPROPERTY(EditDefaultsOnly)
		FWeaponSkillGauge mainWeaponGauge;*/
	//Struct that holds value for the sub weapon gauge
	/*UPROPERTY(EditDefaultsOnly)
		FWeaponSkillGauge subWeaponGauge;
	UPROPERTY(EditDefaultsOnly)
		FAnimatedBar horizontalBar;
	UPROPERTY(EditDefaultsOnly)
		FAnimatedBar verticalBar;*/

	/*TArray<FAnimatedBar> animatedBarArray;*/

	/*TArray<UImage*> barImageArray;*/

#pragma region DashGaugeParameters

	//Amount of dash now
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash Gauge Parameters")
	//	int dashAmount = 1;
	//Time it takes for the delayed gauge to catch up to the instant gauge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash Gauge Parameters")
		float timeToDeduct = 0.5f;
	//Time before the delayed gauge tries to catch up to the instant gauge
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash Gauge Parameters")
		float delay = 0.5;

	//Current and desired values in values of 0 to 1
	float f_currentDash = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float f_desiredDash = 1;

	//The boolean that changes whenever the value changes so the rate is only calculated once
	bool calculateDifference = true;
	//The float that stores the rate
	float rate = 0;
	//The delay timer that counts towards the delay
	float delayTimer;

#pragma endregion

#pragma region CircularHealthParameters
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		int m_actualHealth = 30;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float lerpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float epsilon;

	float f_currentHealth = 1;
	float f_desiredHealth = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float desiredSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float healthLerpSpeed;

	//For going down.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float healthDownTime = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float healthDownDelay = 0.5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float healthEpsilon;

	//Health Hit Variables
	float initialSpeed;
	float currentSpeed;

	float healthDownRate;
	bool calculateHit = true;
	bool direction = true;
	float timer = 0;

	
	void DoHit();

#pragma endregion

#pragma region MainGaugeParameters
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Gauge Parameters")
	//	float mainWeaponSkillGauge = 30;

	float f_mainWeaponSkillGauge = 1;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Gauge Parameters")
	//	float  subWeaponSkillGauge = 30;
	
	float f_subWeaponSkillGauge = 1;

#pragma endregion

//#pragma region AnimatedBarParameters
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animated Bar Parameters")
//		float timeToGoToDesired;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animated Bar Parameters")
//		FVector2D minMaxRange;
//	//Time delay between each iteration.
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animated Bar Parameters")
//		float timerDelay;
//
//	//Random value.
//	float currentPercentage;
//	float desiredPercentage;
//	float percentageRate;
//	bool calculatePercentage = true;
//	float animatedBarTimer = 0;
//	bool animatedReached = true;
//
//#pragma endregion

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VertHoriz Bar Parameters")
		float timeToGoDesiredBar;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VertHoriz Bar Parameters")
		FVector2D barMinMaxRange;
	//Time delay between each iteration.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VertHoriz Bar Parameters")
		float barTimerDelay;

#pragma region Functions
	//Update the skill gauge
	void UpdateDashGauge(float inDeltaTime);

	//Update the healthbar
	void UpdateHealthbar(float inDeltaTime);

	//Update weapon bars
	//void UpdateMainWeaponSkillGauge(float inDeltaTime);

	//Update sub weapon bar
	//void UpdateSubWeaponSkillGauge(float inDeltaTime);

	//Normalizes a value between 0 and 1 given a range (eg 30 for 0 to 100)
	float NormalizeValue(float in, float min, float max);

	//Normalizes a value that is already normalized between 0 and 1 to your desired range.
	float NormalizeValueCustomRange(float in, float minRange, float maxRange);

	//To normalize the input from and clamp...(not a normalize function)
	void NormalizeHealthValue();
	//To normalize the input from and clamp...(not a normalize function)
	void NormalizeDashGauge();
	//To normalize the input from and clamp...(not a normalize function)
	//void NormalizeWeaponGauges();

	void Hit(float inDeltaTime);

	//void UpdateUIAnimatedBar(float inDeltaTime);
	//void UpdateVertHorizUIAnimatedBars(float inDeltaTime);
#pragma endregion

	float currentHealth;

protected:
	//Protected variables here
private:
	//Private variables here

};
