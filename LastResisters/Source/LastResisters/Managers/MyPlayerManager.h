// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
/**
 **/
class LASTRESISTERS_API MyPlayerManager
{
public:
	MyPlayerManager();
	~MyPlayerManager();

	struct CameraValues
	{
		FVector2D viewportSize;
		FVector cameraPosition;
		FVector camFwdVector;
		float cameraFOV;
		float cameraAspect;
		float nearClipPlane = 10;
	};

	bool CheckIfBlocked(FVector _attPos, FFloat16 _attRot);

	void Update(float deltaTime);

	void StoreValues(FVector _playerPos
		, float _playerDamage
		, FTransform _leftPos
		, FTransform _rightPos
		, bool isShielding);

	CameraValues cameraValues;

	//FVector for UI
	FTransform hitUITransform;
	FTransform dangerUITransform;

	float distanceBetweenEnemy;
	float distanceBetweenDangerUI;

	FVector m_playerPos;
	float m_playerDamage;
	FTransform m_leftPos;
	FTransform m_rightPos;
	//The bool that is true when the shield is out.
	bool isShielding;

	void SetCameraValues(FVector2D viewportSize, FVector cameraPosition, FVector camFwdVector, float camFOV, float camAspect);

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

	//Guarded
	bool recentlyGuarded = false;

	void HitUICalculations();
	void DangerUICalculations();

	//Store the rotation if the player had missed attack.
	FFloat16 failGuardRotation;
};
