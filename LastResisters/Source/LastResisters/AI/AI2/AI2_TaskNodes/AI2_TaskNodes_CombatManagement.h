// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AI2_TaskNodes_CombatManagement.generated.h"

/**
 *
 */
UCLASS()
class LASTRESISTERS_API UAI2_TaskNodes_CombatManagement : public UBTTaskNode
{
	GENERATED_BODY()

		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UBlackboardComponent* m_bbComp;
	uint8 m_currStance;

	void ChangeStance(int _stance);
};
