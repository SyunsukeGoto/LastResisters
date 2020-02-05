// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWarningUI.h"
#include "Components/Image.h"
#include "../../../Managers/MyPlayerManager.h"
#include "../../../MyGameInstance.h"
#include "../../Math/UIMath.h"

UPlayerWarningUI::UPlayerWarningUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void UPlayerWarningUI::NativeConstruct()
{
	// Do some custom setup
	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	//Set desired to max.
	desiredOpacity = maxOpacity;

	currentHP = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp;


}
void UPlayerWarningUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);
	timer += InDeltaTime;

	HealthWarning->SetRenderTransformAngle(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->failGuardRotation);

	if (currentHP != UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp)
	{
		//call the hit function
		Hit();
		//set current hp to the value of the hp
		currentHP = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp;
	}
	DoHit(InDeltaTime);
	ShowWarning();
}

void UPlayerWarningUI::Hit()
{
	//Reset the variables so the hit function can run again
	calculateHit = true;
	//Set direction to false to increase thespeed of the lerp.
	direction = false;
}

void UPlayerWarningUI::DoHit(float inDeltaTime)
{
	//If the direction is false..
	if (calculateHit)
	{
		if (!direction)
			desiredOpacity = maxOpacity;
		else
			desiredOpacity = minOpacity;

		//Half cause why not?
		healthDownRate = (desiredOpacity - currentOpacity) / (healthDownTime * 0.5f);
		calculateHit = false;
	}

	if (!direction)
	{

		//If the current opacity is not desired opacity
		if (currentOpacity != desiredOpacity)
		{
			//Go towards it
			currentOpacity += (healthDownRate * inDeltaTime);

			if (healthDownRate > 0)
			{
				if (currentOpacity >= desiredOpacity)
					currentOpacity = desiredOpacity;
			}
			else
			{
				if (currentOpacity <= desiredOpacity)
					currentOpacity = desiredOpacity;
			}
		}
		else
		{
			direction = true;
			//Set the flag to calculate again based on desired.
			calculateHit = true;
		}
	}
	else
	{
		//If the current opacity is not desired opacity
		if (currentOpacity != desiredOpacity)
		{
			//Go towards it
			currentOpacity += (healthDownRate * inDeltaTime);

			if (healthDownRate > 0)
			{
				if (currentOpacity >= desiredOpacity)
					currentOpacity = desiredOpacity;
			}
			else
			{
				if (currentOpacity <= desiredOpacity)
					currentOpacity = desiredOpacity;
			}
		}
		else
		{
			//End condition
			//UE_LOG(LogTemp, Warning, TEXT("Ended function."));
		}
	}
	//UE_LOG(LogTemp, Warning, TEXT("Current Opacity: %f"), currentOpacity);
	HealthWarning->SetOpacity(currentOpacity);
}

void UPlayerWarningUI::ShowWarning()
{
	if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp <= healthCutOff)
	{
		//If it is less..
		float opacity = UIMath::NormalizeValue(UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->hp, healthCutOff, minHealthToShow);
		opacity = UIMath::NormalizeValueCustomRange(opacity, minWarningOpacity, maxWarningOpacity);
		HealthDanger->SetOpacity(opacity);
	}
}
