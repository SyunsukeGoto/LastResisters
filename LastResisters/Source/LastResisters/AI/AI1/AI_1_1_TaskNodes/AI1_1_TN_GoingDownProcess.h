// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AI1_1_TN_GoingDownProcess.generated.h"

/**
 * 
 */
UCLASS()
class LASTRESISTERS_API UAI1_1_TN_GoingDownProcess : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UBlackboardComponent* m_bbComp;
	uint8 m_currState;

	void ChangeStance(int _stance);
};
