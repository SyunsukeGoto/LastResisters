// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerUI.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "../../SpriteAnimation/SpriteAnimation.h"
#include "../../../Managers/MyPlayerManager.h"
#include "../../../MyGameInstance.h"

UPlayerUI::UPlayerUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void UPlayerUI::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	//Create the delayedGauge materialInstance and apply it to the actual Image
	delayedGauge.MaterialInstance = UMaterialInstanceDynamic::Create(delayedGauge.Material, this);
	delayedGauge.ApplyToMaterial();
	delayedGauge.ApplyToImage(DelayedDashGauge);

	//Create the instant gauge's materialInstance and apply it to the actual Image
	instantGauge.MaterialInstance = UMaterialInstanceDynamic::Create(instantGauge.Material, this);
	instantGauge.ApplyToMaterial();
	instantGauge.ApplyToImage(InstantDashGauge);

	//Create the health bar's materialInstance and apply it to the actual image
	f_circularHealth.MaterialInstance = UMaterialInstanceDynamic::Create(f_circularHealth.Material, this);
	f_circularHealth.ApplyToMaterial();
	f_circularHealth.ApplyToImage(CircularHealth);

	//Create the main weapon's gauge materialInstance and apply it to the actual image
	//mainWeaponGauge.MaterialInstance = UMaterialInstanceDynamic::Create(mainWeaponGauge.Material, this);
	//mainWeaponGauge.ApplyToMaterial();
	//mainWeaponGauge.ApplyToImage(WeaponGauge);

	////Create the sub weapon's gauge materialInstance and apply it to the actual image
	//subWeaponGauge.MaterialInstance = UMaterialInstanceDynamic::Create(subWeaponGauge.Material, this);
	//subWeaponGauge.ApplyToMaterial();
	//subWeaponGauge.ApplyToImage(ShieldGauge);

	//Create the animated bar's gauge materialInstance and apply it to the actual image
	//animatedBar.MaterialInstance = UMaterialInstanceDynamic::Create(animatedBar.Material, this);
	//animatedBar.ApplyToMaterial();
	//animatedBar.ApplyToImage(UIAnimatedBar);

	//Set the delayTimer to be the value of delay at the start.
	delayTimer = delay;

	//Set stuff
	initialSpeed = f_circularHealth.circularHealthParameters.backWaveSpeed;
	currentSpeed = f_circularHealth.circularHealthParameters.backWaveSpeed;

	/*WeaponFlameEffect->SetVisibility(ESlateVisibility::Hidden);
	WeaponChargeEffect->SetVisibility(ESlateVisibility::Hidden);
	ShieldFlameEffect->SetVisibility(ESlateVisibility::Hidden);
	ShieldChargeEffect->SetVisibility(ESlateVisibility::Hidden); */


	//Setup UI animations.
	/*currentPercentage = animatedBar.gaugeParameters.percent;
	desiredPercentage = currentPercentage;

	barImageArray.Add(UIAnimatedVerticalBarOne);
	barImageArray.Add(UIAnimatedVerticalBarTwo);
	barImageArray.Add(UIAnimatedVerticalBarThree);
	barImageArray.Add(UIAnimatedHorizontalBarOne);
	barImageArray.Add(UIAnimatedHorizontalBarTwo);
	barImageArray.Add(UIAnimatedHorizontalBarThree);*/

	//Initialise the vertical horizontal bars. with the size of the bar image
	//animatedBarArray.Init(FAnimatedBar(), barImageArray.Num());
	//for (int i = 0; i < animatedBarArray.Num(); i++)
	//{
	//	if (i < 3)
	//	{
	//		animatedBarArray[i] = verticalBar;
	//	}
	//	else
	//	{
	//		animatedBarArray[i] = horizontalBar;
	//	}
	//	//Create the animated bar's gauge materialInstance and apply it to the actual image
	//	animatedBarArray[i].MaterialInstance = UMaterialInstanceDynamic::Create(animatedBarArray[i].Material, this);
	//	animatedBarArray[i].ApplyToMaterial();
	//	animatedBarArray[i].ApplyToImage(barImageArray[i]);

	//	//Initialize all
	//	animatedBarArray[i].currentPercentage = animatedBarArray[i].barParameters.percent;
	//	animatedBarArray[i].desiredPercentage = animatedBarArray[i].currentPercentage;
	//}

	//Set current to player hp
	currentHealth = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp;
}

void UPlayerUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Do your custom tick stuff here

	//Normalizez and clamp the values for shaders
#pragma region Normalization
	//NormalizeHealthValue();
	//NormalizeDashGauge();
	/*NormalizeWeaponGauges();*/
#pragma endregion

#pragma region Dash Gauges
	if (calculateDifference)
	{
		delayTimer = delay;
		UpdateDashGauge(InDeltaTime);
	}
	else
	{
		if (delayTimer > 0)
			delayTimer -= InDeltaTime;
		else
			UpdateDashGauge(InDeltaTime);
	}

#pragma endregion 

#pragma region Circular Health

	//Update the shader based on the difference between the two healths and lerp.
	UpdateHealthbar(InDeltaTime);

	//To test the hit interaction
	if (currentHealth != UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp)
	{
		DoHit();
		currentHealth = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp;
	}

	f_desiredDash = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->GetdashGaugeAmount()/ 100.f;
	

	//Function that changes wave speed of the healthbar
	Hit(InDeltaTime);

	//Just updating the wavespeed and modulus
	f_circularHealth.UpdateOffset(InDeltaTime);

	//Update the health amount text
	if (HealthText)
		HealthText->SetText(FText::FromString(FString::FromInt(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp)));

#pragma endregion

#pragma region Weapon Skill Gauges
	/*UpdateMainWeaponSkillGauge(InDeltaTime);
	UpdateSubWeaponSkillGauge(InDeltaTime);*/
#pragma endregion
}

void UPlayerUI::DoHit()
{
	//Reset the variables so the hit function can run again
	calculateHit = true;
	//Set direction to false to increase thespeed of the lerp.
	direction = false;

	//UE_LOG(LogTemp, Warning, TEXT("Do Hit!"));
}

void UPlayerUI::UpdateDashGauge(float inDeltaTime)
{
	if (calculateDifference)
	{
		rate = (f_desiredDash - f_currentDash) / timeToDeduct;
		calculateDifference = false;
	}
	//Else we just keep minusing... and minusing...

	//Only if they're not the same.
	if (f_desiredDash != f_currentDash)
	{
		f_currentDash += (rate * inDeltaTime);

		if (rate > 0)
		{
			if (f_currentDash >= f_desiredDash)
				f_currentDash = f_desiredDash;
		}
		else
		{
			if (f_currentDash <= f_desiredDash)
				f_currentDash = f_desiredDash;
		}

		instantGauge.gaugeParameters.percent = f_desiredDash;
		delayedGauge.gaugeParameters.percent = f_currentDash;

		instantGauge.UpdatePercent();
		delayedGauge.UpdatePercent();
	}
	else
	{
		calculateDifference = true;
		if (f_desiredDash < 0)
		{
			f_desiredDash = 0.f;
		}
		else if (f_desiredDash == 0.f)
		{
			f_desiredDash = 1.01f;
		}
		else
		{
			//f_desiredDash -= FMath::FRandRange(0.15, 0.2);
		}
	}

	//Updating UI Bar.
	/*UpdateUIAnimatedBar(inDeltaTime);
	UpdateVertHorizUIAnimatedBars(inDeltaTime);*/
}

void UPlayerUI::UpdateHealthbar(float inDeltaTime)
{
	if (f_desiredHealth != f_currentHealth)
	{
		f_currentHealth = FMath::Lerp(f_currentHealth, f_desiredHealth, lerpSpeed * inDeltaTime);
		if (FMath::Abs(f_desiredHealth - f_currentHealth) < epsilon)
			f_currentHealth = f_desiredHealth;

		f_circularHealth.circularHealthParameters.fillPercentage = f_currentHealth;
		f_circularHealth.UpdatePercent();
	}
	else
	{
	}
}

//void UPlayerUI::UpdateMainWeaponSkillGauge(float inDeltaTime)
//{
//	if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->mainSkillGaugeAmount < 100)
//	{
//	}
//	else if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->mainSkillGaugeAmount >= 100)
//	{
//		USpriteAnimation * mainChargeEffect = Cast<USpriteAnimation>(WeaponChargeEffect);
//		USpriteAnimation * mainFlameEffect = Cast<USpriteAnimation>(WeaponFlameEffect);
//		if(mainChargeEffect != nullptr)
//			mainChargeEffect->PlayAnimation();
//		if(mainFlameEffect != nullptr)
//			mainFlameEffect->PlayAnimation();
//	}
//
//	//Set the parameters 
//	mainWeaponGauge.weaponSkillParameters.percent = f_mainWeaponSkillGauge;
//	mainWeaponGauge.UpdatePercent();
//}

//void UPlayerUI::UpdateSubWeaponSkillGauge(float inDeltaTime)
//{
//
//	if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->subSkillGaugeAmount < 100)
//	{
//
//	}
//	else if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->subSkillGaugeAmount >= 100)
//	{
//		USpriteAnimation * subChargeEffect = Cast<USpriteAnimation>(ShieldChargeEffect);
//		USpriteAnimation * subFlameEffect = Cast<USpriteAnimation>(ShieldFlameEffect);
//		if(subChargeEffect != nullptr)
//			subChargeEffect->PlayAnimation();
//		if(subFlameEffect != nullptr)
//			subFlameEffect->PlayAnimation();
//	}
//	//Set the parameters 
//	subWeaponGauge.weaponSkillParameters.percent = f_subWeaponSkillGauge;
//	subWeaponGauge.UpdatePercent();
//}

float UPlayerUI::NormalizeValue(float in, float min, float max)
{
	return (in - min) / (max - min);
}

float UPlayerUI::NormalizeValueCustomRange(float in, float minRange, float maxRange)
{
	return minRange + (maxRange - minRange) * in;

}

void UPlayerUI::NormalizeHealthValue()
{
	f_desiredHealth = NormalizeValueCustomRange(NormalizeValue(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp, 0.f, 100.f), 0.04f, 0.97f);
}

void UPlayerUI::NormalizeDashGauge()
{
	f_desiredDash = NormalizeValueCustomRange(NormalizeValue(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->dashGaugeAmount, 0.f, 100.f), 0.044f, 0.96f);
}

//void UPlayerUI::NormalizeWeaponGauges()
//{
//	f_mainWeaponSkillGauge = NormalizeValueCustomRange(NormalizeValue(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->mainSkillGaugeAmount, 0.f, 100.f), 0.058f, 0.834f);
//	f_subWeaponSkillGauge = NormalizeValueCustomRange(NormalizeValue(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->subSkillGaugeAmount, 0.f, 100.f), 0.058f, 0.942f);
//}

void UPlayerUI::Hit(float inDeltaTime)
{
	//If direction is false.
	if (!direction)
	{
		//If the current speed is not the desired
		if (currentSpeed != desiredSpeed)
		{
			//Lerp towards it..
			currentSpeed = FMath::Lerp(currentSpeed,
				desiredSpeed,
				healthLerpSpeed * inDeltaTime);

			//If its successful then...
			if (FMath::Abs(desiredSpeed - currentSpeed) <= healthEpsilon)
			{
				currentSpeed = desiredSpeed;
				direction = true;
			}
		}
	}
	else
	{
		//Dont do a calculation if the current speed is already equals to the initial.
		if (currentSpeed == initialSpeed)
		{

			return;
		}

		// the current speed is not equals to the initial
		   //Calculate the healthDownRate once
		if (calculateHit)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Calculated rate"));
			healthDownRate = (initialSpeed - currentSpeed) / healthDownTime;
			calculateHit = false;
		}

		//UE_LOG(LogTemp, Warning, TEXT("Going to initialSpeed, Current: %f, Initial: %f , Rate: %f"), currentSpeed, initialSpeed, healthDownRate);
		currentSpeed += (healthDownRate * inDeltaTime);

		if (healthDownRate > 0)
		{
			if (currentSpeed >= initialSpeed)
				currentSpeed = initialSpeed;
		}
		else
		{
			if (currentSpeed <= initialSpeed)
				currentSpeed = initialSpeed;
		}
	}

	//Update the back wave speed using our current variable
	f_circularHealth.circularHealthParameters.backWaveSpeed = currentSpeed;
}

//void UPlayerUI::UpdateUIAnimatedBar(float inDeltaTime)
//{
//	//If the two results are the same, then we set the variables.
//	if (currentPercentage == desiredPercentage)
//	{
//		//The same.
//		//Random the things.
//		desiredPercentage = FMath::RandRange(minMaxRange.X, minMaxRange.Y);
//		//Calculate rate.
//		percentageRate = (desiredPercentage - currentPercentage) / timeToGoToDesired;	
//
//		//We have reached the destination
//		animatedReached = true;
//		//Set the timer to the delay.
//		animatedBarTimer = timerDelay;
//	
//	}
//	if (animatedReached)
//	{
//		if (animatedBarTimer > 0)
//			animatedBarTimer -= inDeltaTime;
//		else
//			animatedReached = false;
//	}
//	else
//	{
//		//Current percentage
//		currentPercentage += percentageRate * inDeltaTime;
//		if (percentageRate > 0)
//		{
//			if (currentPercentage >= desiredPercentage)
//				currentPercentage = desiredPercentage;
//		}
//		else
//		{
//			if (currentPercentage <= desiredPercentage)
//				currentPercentage = desiredPercentage;
//		}
//
//		animatedBar.gaugeParameters.percent = currentPercentage;
//		animatedBar.UpdatePercent();
//	}
//}

//void UPlayerUI::UpdateVertHorizUIAnimatedBars(float inDeltaTime)
//{
//
//	for (int i = 0; i < animatedBarArray.Num(); i++)
//	{
//		//If the two results are the same, then we set the variables.
//		if (animatedBarArray[i].currentPercentage == animatedBarArray[i].desiredPercentage)
//		{
//			//The same.
//			//Random the things.
//			animatedBarArray[i].desiredPercentage = FMath::RandRange(barMinMaxRange.X, barMinMaxRange.Y);
//			//Calculate rate.
//			animatedBarArray[i].percentageRate = (animatedBarArray[i].desiredPercentage - animatedBarArray[i].currentPercentage) / timeToGoDesiredBar;
//
//			//We have reached the destination
//			animatedBarArray[i].animatedReached = true;
//			//Set the timer to the delay.
//			animatedBarArray[i].animatedBarTimer = barTimerDelay;
//
//		}
//		if (animatedBarArray[i].animatedReached)
//		{
//			if (animatedBarArray[i].animatedBarTimer > 0)
//				animatedBarArray[i].animatedBarTimer -= inDeltaTime;
//			else
//				animatedBarArray[i].animatedReached = false;
//		}
//		else
//		{
//			//Current percentage
//			animatedBarArray[i].currentPercentage += animatedBarArray[i].percentageRate * inDeltaTime;
//			if (animatedBarArray[i].percentageRate > 0)
//			{
//				if (animatedBarArray[i].currentPercentage >= animatedBarArray[i].desiredPercentage)
//					animatedBarArray[i].currentPercentage = animatedBarArray[i].desiredPercentage;
//			}
//			else
//			{
//				if (animatedBarArray[i].currentPercentage <= animatedBarArray[i].desiredPercentage)
//					animatedBarArray[i].currentPercentage = animatedBarArray[i].desiredPercentage;
//			}
//
//			animatedBarArray[i].barParameters.percent = animatedBarArray[i].currentPercentage;
//			animatedBarArray[i].UpdatePercent();
//		}
//	}
//}



