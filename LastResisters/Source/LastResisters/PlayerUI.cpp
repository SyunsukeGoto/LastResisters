// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerUI.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

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
	delayedGauge.ApplyToImage(DelayedSpecialGauge);

	//Create the instant gauge's materialInstance and apply it to the actual Image
	instantGauge.MaterialInstance = UMaterialInstanceDynamic::Create(instantGauge.Material, this);
	instantGauge.ApplyToMaterial();
	instantGauge.ApplyToImage(InstantSpecialGauge);

	//Create the health bar's materialInstance and apply it to the actual image
	healthBar.MaterialInstance = UMaterialInstanceDynamic::Create(healthBar.Material, this);
	healthBar.ApplyToMaterial();
	healthBar.ApplyToImage(CircularHealth);

	//Set the delayTimer to be the value of delay at the start.
	delayTimer = delay;

	//Set stuff
	initialSpeed = healthBar.healthbarParameters.backWaveSpeed;
	currentSpeed = healthBar.healthbarParameters.backWaveSpeed;

}

void UPlayerUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	// Do your custom tick stuff here
	//UE_LOG(LogTemp, Warning, TEXT("My Texture Scale is %f"), delayedGauge.gaugeParameters.percent);
	NormalizeHealthValue();
	NormalizeDashGauge();

	if (calculateDifference)
	{
		delayTimer = delay;
		UpdateSpecialGauge(InDeltaTime);
	}
	else
	{
		if (delayTimer > 0)
			delayTimer -= InDeltaTime;
		else
			UpdateSpecialGauge(InDeltaTime);
	}

	UpdateHealthbar(InDeltaTime);

	timer += InDeltaTime;
	if (timer > 2)
	{
		Hit(InDeltaTime);
	}

	healthBar.UpdateOffset(InDeltaTime);

	//Update the health amount text

	if (HealthText)
		HealthText->SetText(FText::FromString(FString::FromInt(m_actualHealth)));

}

void UPlayerUI::UpdateSpecialGauge(float inDeltaTime)
{
	if (calculateDifference)
	{
		rate = (f_desiredSkill - f_currentSkill) / timeToDeduct;
		calculateDifference = false;
	}
	//Else we just keep minusing... and minusing...

	//Only if they're not the same.
	if (f_desiredSkill != f_currentSkill)
	{
		f_currentSkill += (rate * inDeltaTime);

		if (rate > 0)
		{
			if (f_currentSkill >= f_desiredSkill)
				f_currentSkill = f_desiredSkill;
		}
		else
		{
			if (f_currentSkill <= f_desiredSkill)
				f_currentSkill = f_desiredSkill;
		}

		instantGauge.gaugeParameters.percent = f_desiredSkill;
		delayedGauge.gaugeParameters.percent = f_currentSkill;

		instantGauge.UpdatePercent();
		delayedGauge.UpdatePercent();
		//Just for testing
		//UE_LOG(LogTemp, Warning, TEXT("Instant Percent: %f, Delayed Percent: %f"), instantGauge.gaugeParameters.percent, delayedGauge.gaugeParameters.percent);
		//UE_LOG(LogTemp, Warning, TEXT("Current: %f, Desired: %f, Rate: %f, Delay: %f"), f_currentSkill, f_desiredSkill, rate, delayTimer);
	}
	else
	{
		calculateDifference = true;
		if (f_desiredSkill < 0)
		{
			f_desiredSkill = 0.f;
		}
		else if (f_desiredSkill == 0.f)
		{
			f_desiredSkill = 1.01f;
		}
		else
		{
			//To simulate being hit.
			f_desiredSkill -= FMath::FRandRange(0.15, 0.2);
		}
	}
}

void UPlayerUI::UpdateHealthbar(float inDeltaTime)
{
	if (f_desiredHealth != f_currentHealth)
	{
		f_currentHealth = FMath::Lerp(f_currentHealth, f_desiredHealth, lerpSpeed * inDeltaTime);
		if (FMath::Abs(f_desiredHealth - f_currentHealth) < epsilon)
			f_currentHealth = f_desiredHealth;

		healthBar.healthbarParameters.fillPercentage = f_currentHealth;
		healthBar.UpdatePercent();
	}
	else
	{
		//Test the interaction
		//UE_LOG(LogTemp, Warning, TEXT("Health: %d, FillPercentage: %f, Desired: %f, Current: %f"), 
		//	m_actualHealth, 
		//	healthBar.healthbarParameters.fillPercentage,
		//	f_desiredHealth, 
		//	f_currentHealth);
		//m_actualHealth = FMath::FRandRange(0, 100.f);
	}
}

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
	f_desiredHealth = NormalizeValueCustomRange(NormalizeValue((float)m_actualHealth, 0.f, 100.f), 0.04f, 0.97f);
}

void UPlayerUI::NormalizeDashGauge()
{
	f_desiredSkill = NormalizeValueCustomRange(NormalizeValue((float)skillAmount, 0.f, 100.f), 0.058f, 0.942f);
}

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

			UE_LOG(LogTemp, Warning, TEXT("Lerping to desiredSpeed, Current: %f, Desired: %f , Lerp Time: %f"), currentSpeed, desiredSpeed, healthLerpSpeed * inDeltaTime);

			//If its successful then...
			if (FMath::Abs(desiredSpeed - currentSpeed) <= healthEpsilon)
			{
				currentSpeed = desiredSpeed;
				direction = true;
				UE_LOG(LogTemp, Warning, TEXT("Lerping to desiredSpeed, Current: %f, Desired: %f , Lerp Time: %f"), currentSpeed, desiredSpeed, healthLerpSpeed * inDeltaTime);
				UE_LOG(LogTemp, Warning, TEXT("Lerp complete, changing directions."));
			}
		}
	}
	else
	{
		//Calculate the healthDownRate once
		if (calculateHit)
		{
			UE_LOG(LogTemp, Warning, TEXT("Calculated rate"));
			healthDownRate = (initialSpeed - currentSpeed) / healthDownTime;
			calculateHit = false;
		}

		//If the currentSpeed != initial
		if (currentSpeed != initialSpeed)
		{
			UE_LOG(LogTemp, Warning, TEXT("Going to initialSpeed, Current: %f, Initial: %f , Rate: %f"), currentSpeed, initialSpeed, healthDownRate);
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
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Going to initialSpeed, Current: %f, Initial: %f , Rate: %f"), currentSpeed, initialSpeed, healthDownRate);
			UE_LOG(LogTemp, Warning, TEXT("Go down complete"));
		}
	}

	healthBar.healthbarParameters.backWaveSpeed = currentSpeed;
}



