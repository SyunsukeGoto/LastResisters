// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_TaskNodes_FindPatrolLocation.h"
#include "AI/AI2/AI2_PatrolTargetPoint.h"
#include "AI/AI2/AI2_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UAI2_TaskNodes_FindPatrolLocation::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI2_AIController* aiCon_ = Cast<AAI2_AIController>(OwnerComp.GetAIOwner());


	if (aiCon_)
	{
		// Get values from blackboard and AI controller
		UBlackboardComponent* bbComp_ = aiCon_->GetBlackboardComp();
		int32 patrolPathIndex_ = bbComp_->GetValueAsInt("patrolPathIndex");
		TArray<AActor*> availableTargetPoints_ = aiCon_->GetAvailableTargetPoints();

		// Set target location based on current patrol index
		if (!bbComp_->GetValueAsBool("canSeePlayer"))
		{
			bbComp_->SetValueAsVector("targetLocation", availableTargetPoints_[patrolPathIndex_]->GetActorLocation());
		}

		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}