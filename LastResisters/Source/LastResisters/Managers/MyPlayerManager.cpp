// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerManager.h"

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
	m_leftPos = FTransform(FVector(1,1,1));
	m_rightPos = FTransform(FVector(1, 1, 1));
}

MyPlayerManager::~MyPlayerManager()
{
}

bool MyPlayerManager::CheckIfBlocked(FVector _attPos, FFloat16 _attRot)
{
	if (!isShielding)
		return false;

	FFloat16 shieldRadius_ = 5000;
	FFloat16 shieldDistance = FVector::DistSquared(_attPos, m_leftPos.GetLocation());

	UE_LOG(LogTemp, Warning, TEXT("Hand Pos : (%f,%f,%f), Att Pos : (%f,%f,%f), Distance: %s")
		, m_leftPos.GetLocation().X
		, m_leftPos.GetLocation().Y
		, m_leftPos.GetLocation().Z
		, _attPos.X
		, _attPos.Y
		, _attPos.Z
		, *FString::FromInt(shieldDistance));

	//return true;	
	return(shieldDistance <= shieldRadius_);
}

void MyPlayerManager::Update(float deltaTime)
{
}

void MyPlayerManager::StoreValues(FVector _playerPos, FTransform _leftPos, FTransform _rightPos,bool _isShielding)
{
	m_playerPos = _playerPos;
	m_leftPos = _leftPos;
	m_rightPos = _rightPos;
	isShielding = _isShielding;
}

void MyPlayerManager::SetViewportSize(FVector2D viewportSize)
{
	this->viewportSize = viewportSize;
}

void MyPlayerManager::DamageThePlayer(float _incomingDamage)
{
	hp -= _incomingDamage;

	if (hp < 0)
	{
		hp = 0;
	}
}