// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "PlayerUI.generated.h"

/**
 * This struct holds all the parameters that the gauge has
 * I have made this accessible from the editor so change it from there.
 */
USTRUCT(BlueprintType)
struct FSpecialGaugeParameters
{
	GENERATED_BODY()

		//The progress of the image in the range of 0 to 1.
		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float percent;
	//The brightness of the image;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float brightness;
	//How thick you want the circle to be
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float desiredRadius;
	//The distance offset from the center(0.5,0.5) to start drawing the circle
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float initialRadius;
	//The speed in coordinates to move the texture
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FVector2D panSpeeds;
	//How big the texture mapped on the circle.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float textureScale;
	//This is the deltaTime of the entire texture moving.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float textureTimeScale;

	FSpecialGaugeParameters()
		: percent(1.01f)
		, brightness(10.0f)
		, desiredRadius(0.07f)
		, initialRadius(0.4f)
		, panSpeeds(0.f, 0.f)
		, textureScale(1.0f)
		, textureTimeScale(1.0f)
	{

	}

};
/**
 *This struct makes it easier to instantiate a healthbar, such that all the parameters are already here.
 * Initialize more of these if you have more healthbars.
 */
USTRUCT(BlueprintType)
struct FHealthbarParameters
{
	GENERATED_BODY()

		UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		bool useTwoWaves;
	//The fill percentage of the image (0.5 being half)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float fillPercentage;
	//The speed in which the back wave moves
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float backWaveSpeed;
	//The texture scale for the back wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float backWaveTextureScale;
	//The deltaTime scale multplier for the back wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float backWaveTextureTimeScale;
	//The speed in which the front wave moves
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float frontWaveSpeed;
	//The texture scale for the front wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float frontWaveTextureScale;
	//The deltaTime scale multplier for the front wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float frontWaveTextureTimeScale;
	//The speed in which the texture moves for the front wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FVector2D frontWavePanSpeed;
	//The speed in which the texture moves for the back wave
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FVector2D backWavePanSpeed;
	//UTiling
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float uTiling;
	//VTiling
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float vTiling;
	//UV range in terms of 0 and 1 for the front wave
	float frontWaveOffset;
	//UV range in terms of 0 and 1 for the back wave
	float backWaveOffset;

	FHealthbarParameters()
		: useTwoWaves(true)
		, fillPercentage(0.5f)
		, backWaveSpeed(2.5f)
		, backWaveTextureScale(1.0f)
		, backWaveTextureTimeScale(1.0f)
		, frontWaveSpeed()
		, frontWaveTextureScale(1.f)
		, frontWaveTextureTimeScale(1.f)
		, frontWavePanSpeed(0.f, 0.f)
		, backWavePanSpeed(0.f, 0.f)
		, uTiling(1.f)
		, vTiling(8.f)
		, frontWaveOffset(0.f)
		, backWaveOffset(0.f)
	{

	}
};


USTRUCT(BlueprintType)
struct FSpecialGauge
{
	GENERATED_BODY()

		//Our base material that will be the template for our material instance
		UPROPERTY(EditDefaultsOnly)
		UMaterialInterface * Material = nullptr;

	//Our actual materialInstance 
	UMaterialInstanceDynamic * MaterialInstance = nullptr;

	//Texture we'll set as a parameter to our dynamic material instance
	UPROPERTY(EditDefaultsOnly)
		UTexture * Texture = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FSpecialGaugeParameters gaugeParameters;

	FSpecialGauge()
	{

	}

	void ApplyToImage(UImage * imageToApply)
	{
		imageToApply->SetBrushFromMaterial(MaterialInstance);
	}
	void ApplyToMaterial()
	{
		MaterialInstance->SetTextureParameterValue("First Texture", Texture);
		MaterialInstance->SetScalarParameterValue("AlphaCutOff", gaugeParameters.percent);
		MaterialInstance->SetScalarParameterValue("Brightness", gaugeParameters.brightness);
		MaterialInstance->SetScalarParameterValue("DesiredRadius", gaugeParameters.desiredRadius);
		MaterialInstance->SetScalarParameterValue("InitialRadius", gaugeParameters.initialRadius);
		MaterialInstance->SetScalarParameterValue("PanSpeedX", gaugeParameters.panSpeeds.X);
		MaterialInstance->SetScalarParameterValue("PanSpeedY", gaugeParameters.panSpeeds.Y);
		MaterialInstance->SetScalarParameterValue("Texture Scale", gaugeParameters.textureScale);
		MaterialInstance->SetScalarParameterValue("Texture Time Scale", gaugeParameters.textureTimeScale);

	}
	void UpdatePercent()
	{
		MaterialInstance->SetScalarParameterValue("AlphaCutOff", gaugeParameters.percent);
	}

};

USTRUCT(BlueprintType)
struct FHealthbar
{
	GENERATED_BODY()

		//Our base material that will be the template for our material instance
		UPROPERTY(EditDefaultsOnly)
		UMaterialInterface * Material = nullptr;

	//Our actual materialInstance 
	UMaterialInstanceDynamic * MaterialInstance = nullptr;

	//Texture we'll set as a parameter to our dynamic material instance
	UPROPERTY(EditDefaultsOnly)
		UTexture * FrontWaveTexture = nullptr;

	UPROPERTY(EditDefaultsOnly)
		UTexture * BackWaveTexture = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FHealthbarParameters healthbarParameters;

	FHealthbar()
	{

	}

	void ApplyToImage(UImage * imageToApply)
	{
		imageToApply->SetBrushFromMaterial(MaterialInstance);
	}
	void ApplyToMaterial()
	{
		MaterialInstance->SetScalarParameterValue("UseTwoWaves", healthbarParameters.useTwoWaves);
		//Apply to material
		MaterialInstance->SetScalarParameterValue("FillPercentage", healthbarParameters.fillPercentage);
		MaterialInstance->SetScalarParameterValue("BackWaveSpeed", healthbarParameters.backWaveSpeed);
		MaterialInstance->SetScalarParameterValue("BackWaveTextureScale", healthbarParameters.backWaveTextureScale);
		MaterialInstance->SetScalarParameterValue("BackWaveTextureTimeScale", healthbarParameters.backWaveTextureTimeScale);
		MaterialInstance->SetScalarParameterValue("T_BackWavePanSpeedX", healthbarParameters.backWavePanSpeed.X);
		MaterialInstance->SetScalarParameterValue("T_BackWavePanSpeedY", healthbarParameters.backWavePanSpeed.Y);
		MaterialInstance->SetScalarParameterValue("UTiling", healthbarParameters.uTiling);
		MaterialInstance->SetScalarParameterValue("VTiling", healthbarParameters.vTiling);
		MaterialInstance->SetTextureParameterValue("BackWaveTexture", BackWaveTexture);

		MaterialInstance->SetTextureParameterValue("FrontWaveTexture", FrontWaveTexture);
		MaterialInstance->SetScalarParameterValue("FrontWaveSpeed", healthbarParameters.frontWaveSpeed);
		MaterialInstance->SetScalarParameterValue("FrontWaveTextureScale", healthbarParameters.frontWaveTextureScale);
		MaterialInstance->SetScalarParameterValue("FrontWaveTextureTimeScale", healthbarParameters.frontWaveTextureTimeScale);
		MaterialInstance->SetScalarParameterValue("T_FrontWavePanSpeedX", healthbarParameters.frontWavePanSpeed.X);
		MaterialInstance->SetScalarParameterValue("T_FrontWavePanSpeedY", healthbarParameters.frontWavePanSpeed.Y);

	}
	void UpdatePercent()
	{
		MaterialInstance->SetScalarParameterValue("FillPercentage", healthbarParameters.fillPercentage);
	}

	void UpdateOffset(float inDeltaTime)
	{
		healthbarParameters.backWaveOffset = FindModulus(((healthbarParameters.backWaveSpeed * inDeltaTime) + healthbarParameters.backWaveOffset), 1);
		//UE_LOG(LogTemp, Warning, TEXT("Back Offset: %f, Back Speed: %f"), healthbarParameters.backWaveOffset, healthbarParameters.backWaveSpeed);
		MaterialInstance->SetScalarParameterValue("BackWaveOffset", healthbarParameters.backWaveOffset);

		if (healthbarParameters.useTwoWaves)
		{
			healthbarParameters.frontWaveOffset = FindModulus(((healthbarParameters.frontWaveSpeed * inDeltaTime) + healthbarParameters.frontWaveOffset), 1);
			//UE_LOG(LogTemp, Warning, TEXT("Front Offset: %f, Front Speed: %f"), healthbarParameters.frontWaveOffset, healthbarParameters.frontWaveSpeed);
			MaterialInstance->SetScalarParameterValue("FrontWaveOffset", healthbarParameters.frontWaveOffset);
		}
	}

	float FindModulus(float a, float b)
	{
		float mod;
		if (a < 0.f)
			mod = -a;
		else
			mod = a;

		if (b < 0.f)
			b = -b;

		//Find mod by repeated subtraction
		while (mod >= b)
			mod = mod - b;

		//Sign of result typicall depends on sign of a
		if (a < 0)
			return -mod;

		return mod;
	}

};

/**
 * The class for handling the player's UI.
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
	//This describes the first image widget.
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * DelayedSpecialGauge = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * InstantSpecialGauge = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UImage * CircularHealth = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock * HealthText = nullptr;

	UPROPERTY(EditDefaultsOnly)
		FSpecialGauge delayedGauge;

	UPROPERTY(EditDefaultsOnly)
		FSpecialGauge instantGauge;

	UPROPERTY(EditDefaultsOnly)
		FHealthbar healthBar;

	//Variables start here

	//Special Skill Gauge Parameters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Special Gauge Parameters")
		int skillAmount = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Special Gauge Parameters")
		float f_currentSkill = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Special Gauge Parameters")
		float f_desiredSkill = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Special Gauge Parameters")
		float timeToDeduct = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Special Gauge Parameters")
		float delay = 0.5;

	bool calculateDifference = true;
	float rate = 0;
	bool isDelayOver = true;
	float delayTimer;

	//Healthbar Parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		int m_actualHealth = 30;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float f_currentHealth = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float f_desiredHealth = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float lerpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health Bar Parameters")
		float epsilon;

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

	float initialSpeed;
	float currentSpeed;

	float healthDownRate;
	bool calculateHit = true;
	bool direction = false;
	float timer = 0;

	//Update the skill gauge
	void UpdateSpecialGauge(float inDeltaTime);

	//Update the healthbar
	void UpdateHealthbar(float inDeltaTime);

	//Normalizes a value between 0 and 1 given a range (eg 30 for 0 to 100)
	float NormalizeValue(float in, float min, float max);

	//Normalizes a value that is already normalized between 0 and 1 to your desired range.
	float NormalizeValueCustomRange(float in, float minRange, float maxRange);

	//To normalize the input from and clamp...(not a normalize function)
	void NormalizeHealthValue();

	void NormalizeDashGauge();

	void Hit(float inDeltaTime);

protected:
	//Protected variables here
private:
	//Private variables here

};