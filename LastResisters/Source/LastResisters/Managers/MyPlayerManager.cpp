// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerManager.h"

MyPlayerManager::MyPlayerManager()
{
	m_leftPos = FTransform(FVector(1,1,1));
	m_rightPos = FTransform(FVector(1, 1, 1));
	m_leftRot = FRotator(1,1,1);
	m_rightRot = FRotator(1,1,1);
}

MyPlayerManager::~MyPlayerManager()
{
}

bool MyPlayerManager::CheckIfBlocked(FVector _attPos, FFloat16 _attRot)
{
	FFloat16 shieldRadius_ = 1000;
	FFloat16 shieldRadiuhjhhhh = _attPos.DistSquared(_attPos, m_leftPos.GetLocation());

	UE_LOG(LogTemp, Warning, TEXT("shieldRadiuhjhhhh: %s"), *FString::FromInt(shieldRadiuhjhhhh));
	UE_LOG(LogTemp, Warning, TEXT("PlayerX: %s"), *FString::FromInt(m_leftPos.GetLocation().X));
	UE_LOG(LogTemp, Warning, TEXT("PlayerY: %s"), *FString::FromInt(m_leftPos.GetLocation().Y));
	UE_LOG(LogTemp, Warning, TEXT("PlayerZ: %s"), *FString::FromInt(m_leftPos.GetLocation().Z));
	UE_LOG(LogTemp, Warning, TEXT("PlayerRot: %s"), *FString::FromInt(m_rightRot.Roll));
	return true;	
	return(_attPos.DistSquared(_attPos, m_leftPos.GetLocation()) <= shieldRadius_);

	UE_LOG(LogTemp, Warning, TEXT("AttPosX: %s"), *FString::FromInt(_attPos.X));
	UE_LOG(LogTemp, Warning, TEXT("AttPosY: %s"), *FString::FromInt(_attPos.Y));
	UE_LOG(LogTemp, Warning, TEXT("AttPosZ: %s"), *FString::FromInt(_attPos.Z));
	UE_LOG(LogTemp, Warning, TEXT("AttRot: %s"), *FString::FromInt(_attRot));

	
}

void MyPlayerManager::Update(float deltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("Robot Position : (%f, %f, %f)")
	//	, m_leftPos.GetLocation().X
	//	, m_leftPos.GetLocation().Y
	//	, m_leftPos.GetLocation().Z);
}

void MyPlayerManager::StoreValues(FTransform _leftPos, FTransform _rightPos, FRotator _leftRot, FRotator _rightRot)
{
	m_leftPos = _leftPos;
	m_rightPos = _rightPos;
	m_leftRot = _leftRot;
	m_rightRot = _rightRot;
}
