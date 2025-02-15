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

		virtual void OnPossess(APawn* _pawn) override;

	/*Comp references*/
	UBehaviorTreeComponent* m_behaviorComp;
	UBlackboardComponent* m_blackboardComp;

	TArray<AActor*> m_patrolPoints;

	const FFloat16 m_combatRange = 150.f;
	FFloat16 m_colliderRadius;
	FFloat16 m_colliderHalfHeight;
	FFloat16 m_colliderLengthCheck; // Used for collision checking
	FFloat16 m_HP = 100;
	FFloat16 m_MaxHP = 100;
	FFloat16 m_armor = 100;
	FFloat16 m_MaxArmor = 100;
	FFloat16 m_damage = 1;

	AActor* m_playerRef;

public:
	/*Constructor*/
	AAI1_AIController();

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return m_blackboardComp; }
	FORCEINLINE TArray<AActor*> GetAvailableTargetPoints() { return m_patrolPoints; }
	FORCEINLINE FFloat16 GetCombatRange() { return m_combatRange; }
	FORCEINLINE FFloat16 GetColliderRadius() { return m_colliderRadius; }
	FORCEINLINE FFloat16 GetColliderHalfHeight() { return m_colliderHalfHeight; }
	FORCEINLINE FFloat16 GetColliderLengthCheck() { return m_colliderLengthCheck; }
	FORCEINLINE FFloat16 GetHP() { return m_HP; }
	FORCEINLINE FFloat16 GetMaxHP() { return m_MaxHP; }
	FORCEINLINE FFloat16 GetArmor() { return m_armor; }
	FORCEINLINE FFloat16 GetMaxArmor() { return m_MaxArmor; }
	FORCEINLINE FFloat16 GetDamage() { return m_damage; }
	FORCEINLINE void SetHP(FFloat16 _HP) { m_HP = _HP; }
	FORCEINLINE void SetArmor(FFloat16 _armor) { m_armor = _armor; }
	FORCEINLINE void SetDamage(FFloat16 _damage) { m_damage = _damage; }

	FORCEINLINE AActor* GetPlayerRef() { return m_playerRef; }

	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		void DamageThisAI(float _incomingDamage);
	UFUNCTION(BlueprintCallable, Category = "StupidFunctionsThatAreRequiredBecauseUnreal")
		float GETHP();

	void SetSeenPlayer(APawn* _pawn);
	void SetTheFocusOnPlayer();
	void StopFocusOnPlayer();
};