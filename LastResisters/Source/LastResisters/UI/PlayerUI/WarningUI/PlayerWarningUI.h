// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWarningUI.generated.h"

/**
 *
 */
UCLASS()
class LASTRESISTERS_API UPlayerWarningUI : public UUserWidget
{
	GENERATED_BODY()
		//Public variables here.
		UPlayerWarningUI(const FObjectInitializer& ObjectInitializer);

	// Optionally override the Blueprint "Event Construct" event
	virtual void NativeConstruct() override;

	// Optionally override the tick event
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	//Image for sprite
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * HealthWarning = nullptr;
	//Image that increases in opacity the lower the health gets. (Needs UIMath)
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * HealthDanger = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Indicator Parameters")
		float maxOpacity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Indicator Parameters")
		float minOpacity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Indicator Parameters")
		float healthDownTime;

	//Other variables.
	float healthDownRate = 0;
	bool calculateHit = true;
	bool direction = true;
	float currentOpacity = 0;
	float desiredOpacity;
	float timer = 0;
	//Variables, but we mostly use player manager's health value.
	void Hit();

	void DoHit(float inDeltaTime);


	//Very poorly organized but here for the warning stuff.'
	//Min opacity.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Warning Parameters")
		float healthCutOff;

	//For max opacity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Warning Parameters")
		float minHealthToShow;

	//For max opacity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Warning Parameters")
		float minWarningOpacity;
	//For max opacity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hit Warning Parameters")
		float maxWarningOpacity;

	float currentHP = 100;

	void ShowWarning();


};