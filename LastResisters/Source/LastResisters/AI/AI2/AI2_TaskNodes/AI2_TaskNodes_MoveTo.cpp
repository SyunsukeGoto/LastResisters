// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_TaskNodes_MoveTo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI2/AI2_AIController.h"

EBTNodeResult::Type UAI2_TaskNodes_MoveTo::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI2_AIController* aiCon_ = Cast<AAI2_AIController>(OwnerComp.GetAIOwner());

	if (aiCon_)
	{
		aiCon_->SetTheFocusOnPlayer();

		// If the AI has moved to the target location
		if (EPathFollowingRequestResult::AlreadyAtGoal ==
			aiCon_->MoveToLocation(aiCon_->GetBlackboardComp()->GetValueAsVector("targetLocation"), aiCon_->GetCombatRange(), true, true, true, true, 0, true))
		{
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
