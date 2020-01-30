// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayTimer.h"

// Sets default values
AGamePlayTimer::AGamePlayTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//プレイタイムを計測する
void AGamePlayTimer::PlayTimeMeasurement()
{
	//もし99分59秒を超えたらカウントしない
	if (m_playtimeMinute <= 99)
	{
		m_timerCount++;
		//60カウント後に秒数を1＋する
		if (m_timerCount > 1.0f)
		{
			m_playtimePointSecond++;
			//カウンターをリセット
			m_timerCount = 0.0f;
		}

		//0.99秒を超えたときに秒数を1+する
		if (m_playtimePointSecond > 99)
		{
			m_playtimeSecond++;
			m_playtimePointSecond = 0;
		}
		//60秒を超えたら分数を1＋する
		if (m_playtimeSecond > 59)
		{
			m_playtimeMinute++;
			m_playtimeSecond = 0;
		}

	}

}
//プレイタイムをリセットする
void AGamePlayTimer::PlayTimeReset()
{
	m_timerCount = 0;
	m_playtimePointSecond = 0;
	m_playtimeSecond = 0;
	m_playtimeMinute = 0;
}

// Called when the game starts or when spawned
void AGamePlayTimer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGamePlayTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (m_countFlag)
	{
		m_timerCount += DeltaTime ;
	}
	//プレイタイムをカウントする
	PlayTimeMeasurement();
}

