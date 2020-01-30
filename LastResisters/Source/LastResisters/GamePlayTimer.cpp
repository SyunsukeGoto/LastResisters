// Fill out your copyright notice in the Description page of Project Settings.


#include "GamePlayTimer.h"

// Sets default values
AGamePlayTimer::AGamePlayTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//�v���C�^�C�����v������
void AGamePlayTimer::PlayTimeMeasurement()
{
	//����99��59�b�𒴂�����J�E���g���Ȃ�
	if (m_playtimeMinute <= 99)
	{
		m_timerCount++;
		//60�J�E���g��ɕb����1�{����
		if (m_timerCount > 1.0f)
		{
			m_playtimePointSecond++;
			//�J�E���^�[�����Z�b�g
			m_timerCount = 0.0f;
		}

		//0.99�b�𒴂����Ƃ��ɕb����1+����
		if (m_playtimePointSecond > 99)
		{
			m_playtimeSecond++;
			m_playtimePointSecond = 0;
		}
		//60�b�𒴂����番����1�{����
		if (m_playtimeSecond > 59)
		{
			m_playtimeMinute++;
			m_playtimeSecond = 0;
		}

	}

}
//�v���C�^�C�������Z�b�g����
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
	//�v���C�^�C�����J�E���g����
	PlayTimeMeasurement();
}

