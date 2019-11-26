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

	void StoreValues(FVector m_playerPos
		, FTransform _leftPos
		, FTransform _rightPos
		, bool isShielding);

	FVector m_playerPos;
	FTransform m_leftPos;
	FTransform m_rightPos;
	FVector2D viewportSize;
	//The bool that is true when the shield is out.
	bool isShielding;

	void SetViewportSize(FVector2D viewportSize);

	FVector yabaiPos;
	FVector yabaiPosTwo;

	//The hp of the player.
	float hp; //Just in case float damage?
	//The dash gauge amount of the player.
	float dashGaugeAmount;
	//Skill gauge amounts
	float mainSkillGaugeAmount;
	//Skill gauge amounts
	float subSkillGaugeAmount;

	//Max values...?
	float maxHP;
	float maxDashGaugeAmount;
	float maxMainSkillGaugeAmount;
	float maxSubSkillGaugeAmount;

	void DamageThePlayer(float _incomingDamage);
};
