// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Engine/Engine.h"

#include "Managers/MyUIManager.h"
#include "Managers/MyPlayerManager.h"
#include "Managers/MyAttackManager.h"
#include"MoviePlayer/Public/MoviePlayer.h"
void UMyGameInstance::Init()
{
	Super::Init();
	/*FCoreUObjectDelegates::PreLoadMap.AddUObject(this, &UMyGameInstance::BeginLoadingScreen);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UMyGameInstance::EndLoadingScreen);*/
	m_UIManager = new MyUIManager();
	m_playerManager = new MyPlayerManager();
	m_attackManager = new MyAttackManager();
	secondCount = 0;
	m_playtimePointSecond.Init(0, MAX_STAGE);
	m_playtimeSecond.Init(0, MAX_STAGE);
	m_playtimeMinute.Init(0, MAX_STAGE);
	nowStage = 1;
	bossStage = false;
	
	defeatedEnemis = 0;
	totalDamage = 0.0f;
	damageTaken = 0.0f;
	stageRank = "C";
}

void UMyGameInstance::Shutdown()
{
	if (m_UIManager)
	{
		delete m_UIManager;
		m_UIManager = NULL;
	}

	if (m_playerManager)
	{
		delete m_playerManager;
		m_playerManager = NULL;
	}

	if (m_attackManager)
	{
		delete m_attackManager;
		m_attackManager = NULL;
	}
}

UMyGameInstance* UMyGameInstance::GetInstance()
{
	UMyGameInstance* instance = nullptr;

	if (GEngine)
	{
		FWorldContext* context = GEngine->GetWorldContextFromGameViewport(GEngine->GameViewport);
		instance = Cast<UMyGameInstance>(context->OwningGameInstance);
	}

	return instance;
}

MyUIManager * UMyGameInstance::GetUIManagerInstance()
{
	if (m_UIManager)
	{
		return m_UIManager;
	}
	return nullptr;
}

MyPlayerManager * UMyGameInstance::GetPlayerManagerInstance()
{
	if (m_playerManager)
	{
		return m_playerManager;
	}
	return nullptr;
}

MyAttackManager * UMyGameInstance::GetAttackManagerInstance()
{
	if (m_attackManager)
	{
		return m_attackManager;
	}
	return nullptr;
}

void UMyGameInstance::StorePlayerManagerValues(FVector _playerPos, float _playerDamage, FTransform _leftPos, FTransform _rightPos, bool _isShielding)
{
	m_playerManager->StoreValues(_playerPos, _playerDamage, _leftPos, _rightPos, _isShielding);
}

void UMyGameInstance::SetCameraValues(FVector2D viewportSize, FVector cameraPosition, FVector camFwdVector, float camFOV, float camAspect)
{
	m_playerManager->SetCameraValues(viewportSize, cameraPosition, camFwdVector,  camFOV,  camAspect);
}

TArray<FVector> UMyGameInstance::GetPositionsArray()
{
	return m_UIManager->positionArray;
}

FVector UMyGameInstance::GetYabaiPosition()
{
	return m_playerManager->yabaiPos;
}

FVector UMyGameInstance::GetYabaiPositionTwo()
{
	return m_playerManager->yabaiPosTwo;
}

FVector UMyGameInstance::GetPlayerPos()
{
	return m_playerManager->m_playerPos;
}

void UMyGameInstance::StoreScreenPositions(TArray<FVector2D> screenPositions)
{
	m_UIManager->screenPositionArray = screenPositions;
}

float UMyGameInstance::GetPlayerDamage()
{
	return m_playerManager->m_playerDamage;
}

FTransform UMyGameInstance::GetHitUITransform()
{
	return m_playerManager->hitUITransform;
}

float UMyGameInstance::GetDistanceBetweenEnemy()
{
	return m_playerManager->distanceBetweenEnemy;
}

bool UMyGameInstance::GetIfGuard()
{
	return m_playerManager->recentlyGuarded;
}

void UMyGameInstance::GuardEffectSpawned()
{
	m_playerManager->recentlyGuarded = false;
}


void UMyGameInstance::Update(float inDeltaTime)
{
	m_UIManager->Update(inDeltaTime);
	m_playerManager->Update(inDeltaTime);
	m_attackManager->Update(inDeltaTime);
}

void UMyGameInstance::SetDistanceBetweenDangerUI(float distance)
{
	m_playerManager->distanceBetweenDangerUI = distance;
}

float UMyGameInstance::GetDistanceBetweenDangerUI()
{
	return m_playerManager->distanceBetweenDangerUI;
}

FTransform UMyGameInstance::GetDangerUITransform()
{
	return m_playerManager->dangerUITransform;
}


void UMyGameInstance::DamageToPlayer(float damage)
{
	m_playerManager->DamageThePlayer(damage);
}

float UMyGameInstance::GetPlayerHp()
{
	return m_playerManager->GetHP();
}

float UMyGameInstance::GetPlayerStartHp()
{
return	m_playerManager->GetStartHP();
}

void UMyGameInstance::SetPlayerHp(float hp)
{
	 m_playerManager->SetHP(hp);
}

void UMyGameInstance::SetPlayerStartHp(float hp)
{
	m_playerManager->SetStartHP(hp);
}

float UMyGameInstance::GetDamageTaken()
{
	return damageTaken;
}


void UMyGameInstance::UseDash(float g)
{
	m_playerManager->UsedashGaugeAmount(g);
}

float UMyGameInstance::GetDash()
{
	return m_playerManager->GetdashGaugeAmount();
}
void UMyGameInstance::SetTimer(int id, int playtimePointSecond, int playtimeSecond, int playtimeMinute)
{
	m_playtimePointSecond[id] = playtimePointSecond;
	m_playtimeSecond[id] = playtimeSecond;
	m_playtimeMinute[id] = playtimeMinute;
}
//
//void UMyGameInstance::BeginLoadingScreen(const FString& InMapName)
//{
//	if (!IsRunningDedicatedServer())
//	{
//		
//		FLoadingScreenAttributes LoadingScreen;
//		LoadingScreen.bAutoCompleteWhenLoadingCompletes = false;
//		LoadingScreen.WidgetLoadingScreen = FLoadingScreenAttributes::NewTestLoadingScreenWidget();
//
//		GetMoviePlayer()->SetupLoadingScreen(LoadingScreen);
//	}
//}

//void UMyGameInstance::EndLoadingScreen(UWorld* InLoadedWorld)
//{
//
//}

