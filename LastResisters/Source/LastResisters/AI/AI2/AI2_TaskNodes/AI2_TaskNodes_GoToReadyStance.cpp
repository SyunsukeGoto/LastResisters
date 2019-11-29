// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_TaskNodes_GoToReadyStance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI2/AI2_AIController.h"
#include "AIController.h"

EBTNodeResult::Type UAI2_TaskNodes_GoToReadyStance::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI2_AIController* aiCon_ = Cast<AAI2_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	// Get all necessary values for state management
	m_bbComp = aiCon_->GetBlackboardComp();

	if (m_bbComp->GetValueAsEnum("currStance") == 5)
	{
		ChangeStance(0);
	}
	else if (m_bbComp->GetValueAsEnum("currStance") == 6)
	{
		ChangeStance(0);
	}
	else if (aiCon_->GetArmor().GetFloat() <= 0)
	{ // Go to down state
		ChangeStance(7);
	}
	else if (m_bbComp->GetValueAsFloat("currArmor") > aiCon_->GetArmor().GetFloat())
	{ // Go to knockback
		ChangeStance(6);
	}
	else
	{
		ChangeStance(0);
	}

	return EBTNodeResult::Succeeded;
}

void UAI2_TaskNodes_GoToReadyStance::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currStance", _stance);
}