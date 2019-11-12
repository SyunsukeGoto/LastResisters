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

	void StoreValues(FTransform _leftPos, FTransform _rightPos, FRotator _leftRot, FRotator _rightRot);

	FTransform m_leftPos;
	FTransform m_rightPos;
	FRotator m_leftRot;
	FRotator m_rightRot;
};
