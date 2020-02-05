// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AI1_2_TN_CombatMangement.generated.h"

/**
 * 
 */
UCLASS()
class LASTRESISTERS_API UAI1_2_TN_CombatMangement : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UBlackboardComponent* m_bbComp;
	uint8 m_currStance;

	void ChangeStance(int _stance);
};
