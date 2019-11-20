// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class LASTRESISTERS_API MyPlayerManager
{
public:
	MyPlayerManager();
	~MyPlayerManager();

	bool CheckIfBlocked(FVector _attPos, FFloat16 _attRot);

	void Update(float deltaTime);

	void StoreValues(FVector _forwardVector, FVector _upVector, FVector _rightVector, FVector m_playerPos, FTransform _leftPos, FTransform _rightPos, FRotator _leftRot, FRotator _rightRot);

	FVector m_playerPos;
	FVector m_forwardVector;
	FVector m_upVector;
	FVector m_rightVector;
	FTransform m_leftPos;
	FTransform m_rightPos;
	FRotator m_leftRot;
	FRotator m_rightRot;

	//Ball pos
	void StoreBallPos(FVector ballPos);
	FVector ballPos;
};
