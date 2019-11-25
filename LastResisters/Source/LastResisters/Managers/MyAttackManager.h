// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AIController.h"
/**
 *
 */
class LASTRESISTERS_API MyAttackManager
{
public:
	struct Attack_Info
	{
		FFloat16 info_damage;
		FFloat16 info_CountdownTimer;
		FFloat16 info_BlockTimeWindow;
		FFloat16 info_Rotation;
		FVector info_Position;
		FString info_EnemyID;
		bool addedToUI;

		int attackIndex;

		Attack_Info()
			: info_damage(1)
			, info_CountdownTimer(1)
			, info_BlockTimeWindow(0.1f)
			, info_Rotation(0)
			, info_Position(FVector(0, 0, 0))
			, info_EnemyID(FString("monkaS"))
			, addedToUI(false)
			, attackIndex(-1)
		{}
	};

	FFloat16 m_minReactionTime = 1.0f;
	TArray<AAIController*> myListOfAI1;
	TArray<AAIController*> myListOfAI2;
	TArray<Attack_Info> myListOfAttacks;

	MyAttackManager();
	~MyAttackManager();

	bool AddToListOfAttacks(Attack_Info _info);
	bool AddToListOfAI1(AAIController* _aiCon);
	bool AddToListOfAI2(AAIController* _aiCon);
	bool PrintOutListOfAttacks();
	bool PrintOutListOfAI1();
	bool PrintOutListOfAI2();

	void Update(float deltaTime);
	void UpdateAllAttacks(float _dt);

	void DamageTheAIArmor(FString _ID);

	int attackIndex = 0;
};
