// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 *
 */
UCLASS()
class LASTRESISTERS_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

		virtual void Init();

	virtual void Shutdown();

	class MyUIManager * m_UIManager = nullptr;
	class MyPlayerManager * m_playerManager = nullptr;
	class MyAttackManager * m_attackManager = nullptr;

public:
	static UMyGameInstance* GetInstance();

	MyPlayerManager* GetPlayerManagerInstance();
	MyUIManager* GetUIManagerInstance();
	MyAttackManager* GetAttackManagerInstance();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
	void StorePlayerManagerValues(
		FVector _playerPos
		, float _playerDamage
		, FTransform _leftPos
		, FTransform _rightPos
		, bool isShielding);


	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void SetCameraValues(FVector2D viewportSize, FVector cameraPosition, FVector camFwdVector,  float camFOV, float camAspect);

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		TArray<FVector> GetPositionsArray();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		FVector GetYabaiPosition();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		FVector GetYabaiPositionTwo();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		FVector GetPlayerPos();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void StoreScreenPositions(TArray<FVector2D> screenPositions);

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		float GetPlayerDamage();
		
    UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
	    FTransform GetHitUITransform();

    UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
	    float GetDistanceBetweenEnemy();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		bool GetIfGuard();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void GuardEffectSpawned();

	void Update(float inDeltaTime);

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void SetDistanceBetweenDangerUI(float distance);

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		float GetDistanceBetweenDangerUI();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		FTransform GetDangerUITransform();
	
	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void DamageToPlayer(float damage);
};
