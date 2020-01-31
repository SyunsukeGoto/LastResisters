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
	static const int MAX_STAGE = 5;
	//敵を倒した数
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int defeatedEnemiesp;
	//プレイタイム(カンマ秒)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		TArray<int32> m_playtimePointSecond;
	//プレイタイム(秒)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		TArray<int32> m_playtimeSecond;
	//プレイタイム(分)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		TArray<int32> m_playtimeMinute;
	//秒数カウント最大数
	const int MAX_SECOND_COUNT = 60;
	//秒数カウント
	int secondCount;
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

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		float GetPlayerHp();

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void UseDash(float g);

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		float GetDash();
	//タイムスコアを代入する関数
	UFUNCTION(BlueprintCallable, Category = "GamePlayFunction")
		void SetTimer(int id,int playtimePointSecond, int playtimeSecond,int playtimeMinute);
	/*UFUNCTION(BlueprintCallable)
		virtual void BeginLoadingScreen(const FString& MapName);
	UFUNCTION(BlueprintCallable)
		virtual void EndLoadingScreen(UWorld* INLoadedWorld);*/

	//UPROPERTY(BlueprintReadWrite, Category = "GamePlayFunction")
		//AGamePlayTimer GetGamePlayTimer();

};
