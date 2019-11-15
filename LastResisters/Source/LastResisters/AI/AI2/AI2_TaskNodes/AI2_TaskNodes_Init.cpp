// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_TaskNodes_Init.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UAI2_TaskNodes_Init::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	UBlackboardComponent* bbComp_ = OwnerComp.GetBlackboardComponent();

	// Init the currState to patrol
	bbComp_->SetValueAsEnum("currState", 0);

	// Init the patrolPathIndex to start at 0
	bbComp_->SetValueAsInt("patrolPathIndex", 0);

	// Init such that the AI can't see the player
	bbComp_->SetValueAsBool("canSeePlayer", false);


	return EBTNodeResult::Succeeded;
}