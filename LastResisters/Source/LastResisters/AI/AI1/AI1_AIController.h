// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "AI1_AIController.generated.h"

/**
 * 
 */
UCLASS()
class LASTRESISTERS_API AAI1_AIController : public AAIController
{
	GENERATED_BODY()
	
	/*Constructor*/
	AAI1_AIController();

	virtual void OnPossess(APawn* _pawn) override;

	/*Comp references*/
	UBehaviorTreeComponent* m_behaviorComp;
	UBlackboardComponent* m_blackboardComp;

	TArray<AActor*> m_patrolPoints;

	const FFloat16 m_combatRange = 120.0f;
	FFloat16 m_colliderRadius;
	FFloat16 m_colliderHalfHeight;
	FFloat16 m_colliderLengthCheck; // Used for collision checking

public:
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return m_blackboardComp; }
	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return m_patrolPoints; }
	FORCEINLINE FFloat16 GetCombatRange() { return m_combatRange; }
	FORCEINLINE FFloat16 GetColliderRadius() { return m_colliderRadius; }
	FORCEINLINE FFloat16 GetColliderHalfHeight() { return m_colliderHalfHeight; }
	FORCEINLINE FFloat16 GetColliderLengthCheck() { return m_colliderLengthCheck; }

	void SetSeenPlayer(APawn* _pawn);
};