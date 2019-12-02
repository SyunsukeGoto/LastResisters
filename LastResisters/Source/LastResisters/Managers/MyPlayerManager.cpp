// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerManager.h"
#include "../UI/Math/UIMath.h"
#include "Kismet/KismetMathLibrary.h"

MyPlayerManager::MyPlayerManager()
	: maxHP(100)
	, maxDashGaugeAmount(100)
	, maxMainSkillGaugeAmount(100)
	, maxSubSkillGaugeAmount(100)
	, hp(100)
	, dashGaugeAmount(100)
	, mainSkillGaugeAmount(100)
	, subSkillGaugeAmount(100)
{
	m_playerDamage = 5.0f;
	m_leftPos = FTransform(FVector(1, 1, 1));
	m_rightPos = FTransform(FVector(1, 1, 1));
}

MyPlayerManager::~MyPlayerManager()
{
}

bool MyPlayerManager::CheckIfBlocked(FVector _attPos, FFloat16 _attRot)
{
	if (!isShielding)
		return false;
	

	FFloat16 shieldRadius_ = 4000;
	FFloat16 shieldDistance = FVector::DistSquared(_attPos, m_leftPos.GetLocation());

	//UE_LOG(LogTemp, Warning, TEXT("Hand Pos : (%f,%f,%f), Att Pos : (%f,%f,%f), Distance: %s")
	//	, m_leftPos.GetLocation().X
	//	, m_leftPos.GetLocation().Y
	//	, m_leftPos.GetLocation().Z
	//	, _attPos.X
	//	, _attPos.Y
	//	, _attPos.Z
	//	, *FString::FromInt(shieldDistance));

	if (shieldDistance <= shieldRadius_)
		recentlyGuarded = true;

	//return true;	
	return(shieldDistance <= shieldRadius_);
}

void MyPlayerManager::Update(float deltaTime)
{
	//Calculate UI Position.
	float position = (distanceBetweenEnemy + 0.01f);
	if (position < cameraValues.nearClipPlane + 0.01f)
		position = cameraValues.nearClipPlane + 0.01f;

	FVector finalPosition = cameraValues.cameraPosition + cameraValues.camFwdVector * position;
	//Translation.
	hitUITransform.SetTranslation(finalPosition);

	float h = tan(cameraValues.cameraFOV * UIMath::Deg2Rad() * 0.5f) * position * 2.f;
	h /= 100.f;
	FVector finalScale(h*cameraValues.cameraAspect, h, 1.f);
	hitUITransform.SetScale3D(finalScale);

	FRotator rotationTowardsPlayer = UKismetMathLibrary::FindLookAtRotation(finalPosition, cameraValues.cameraPosition);

	FRotator finalRotation = FRotator(0, rotationTowardsPlayer.Yaw - 90.f, 90);
	hitUITransform.SetRotation(FQuat(finalRotation));
}

void MyPlayerManager::StoreValues(FVector _playerPos, float _playerDamage, FTransform _leftPos, FTransform _rightPos, bool _isShielding)
{
	m_playerPos = _playerPos;
	m_playerDamage = _playerDamage;
	m_leftPos = _leftPos;
	m_rightPos = _rightPos;
	isShielding = _isShielding;
}

void MyPlayerManager::SetCameraValues(FVector2D viewportSize, FVector cameraPosition, FVector camFwdVector, float camFOV, float camAspect)
{
	cameraValues.viewportSize = viewportSize;
	cameraValues.cameraPosition = cameraPosition;
	cameraValues.camFwdVector = camFwdVector;
	cameraValues.cameraFOV = camFOV;
	cameraValues.cameraAspect = camAspect;
}

void MyPlayerManager::DamageThePlayer(float _incomingDamage)
{
	hp -= _incomingDamage;

	if (hp < 0)
	{
		hp = 0;
	}
}
