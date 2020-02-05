// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GamePlayTimer.generated.h"

UCLASS()
class LASTRESISTERS_API AGamePlayTimer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGamePlayTimer();
public:
	//変数の宣言
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		bool m_countFlag;
	//プレイタイム(分)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimePointSecond;
	//プレイタイム(秒)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimeSecond;
	//プレイタイム(分)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimeMinute;
	//秒数カウント最大数
	const int MAX_SECOND_COUNT = 60;
	//秒数カウント
	float m_timerCount;
	//タイムを計測する関数
	UFUNCTION(BlueprintCallable, Category = "GamePlayFunction")
		void PlayTimeMeasurement();
	//タイムを計測する関数
	UFUNCTION(BlueprintCallable, Category = "GamePlayFunction")
		void PlayTimeReset();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
