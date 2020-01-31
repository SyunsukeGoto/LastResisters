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
	//�ϐ��̐錾
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		bool m_countFlag;
	//�v���C�^�C��(��)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimePointSecond;
	//�v���C�^�C��(�b)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimeSecond;
	//�v���C�^�C��(��)
	UPROPERTY(BlueprintReadWrite, Category = "GamePlayVariable")
		int m_playtimeMinute;
	//�b���J�E���g�ő吔
	const int MAX_SECOND_COUNT = 60;
	//�b���J�E���g
	float m_timerCount;
	//�^�C�����v������֐�
	UFUNCTION(BlueprintCallable, Category = "GamePlayFunction")
		void PlayTimeMeasurement();
	//�^�C�����v������֐�
	UFUNCTION(BlueprintCallable, Category = "GamePlayFunction")
		void PlayTimeReset();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
