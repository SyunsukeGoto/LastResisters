// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_TaskNodes_GoToNextStance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"

EBTNodeResult::Type UAI1_TaskNodes_GoToNextStance::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	// Get all necessary values for state management
	m_bbComp = aiCon_->GetBlackboardComp();

	ChangeStance(m_bbComp->GetValueAsEnum("prevStance") + 1);

	return EBTNodeResult::Succeeded;
}

void UAI1_TaskNodes_GoToNextStance::ChangeStance(int _stance)
{
	if (_stance >= 5)
	{
		m_bbComp->SetValueAsEnum("currStance", 0);
		m_bbComp->SetValueAsEnum("prevStance", 0);
	}
	else
	{
		m_bbComp->SetValueAsEnum("currStance", _stance);
	}
}
