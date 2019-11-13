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
	return false;
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
