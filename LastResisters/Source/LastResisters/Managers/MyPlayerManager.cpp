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
	FFloat16 shieldRadius_ = 2500;
	FFloat16 shieldRadiuhjhhhh = _attPos.DistSquared(_attPos, m_leftPos.GetLocation());

	UE_LOG(LogTemp, Warning, TEXT("distance: %s"), *FString::FromInt(shieldRadiuhjhhhh));
	//return true;	
	return(_attPos.DistSquared(_attPos, m_leftPos.GetLocation()) <= shieldRadius_);
}

void MyPlayerManager::Update(float deltaTime)
{
	//UE_LOG(LogTemp, Warning, TEXT("Robot Position : (%f, %f, %f)")
	//	, m_leftPos.GetLocation().X
	//	, m_leftPos.GetLocation().Y
	//	, m_leftPos.GetLocation().Z);
}

void MyPlayerManager::StoreValues(FVector _forwardVector, FVector _upVector, FVector _rightVector, FVector _playerPos, FTransform _leftPos, FTransform _rightPos, FRotator _leftRot, FRotator _rightRot)
{
	m_forwardVector = _forwardVector;
	m_upVector = _upVector;
	m_rightVector = _rightVector;
	m_playerPos = _playerPos;
	m_leftPos = _leftPos;
	m_rightPos = _rightPos;
	m_leftRot = _leftRot;
	m_rightRot = _rightRot;
}

void MyPlayerManager::StoreBallPos(FVector ballPos)
{
	this->ballPos = ballPos;
}
