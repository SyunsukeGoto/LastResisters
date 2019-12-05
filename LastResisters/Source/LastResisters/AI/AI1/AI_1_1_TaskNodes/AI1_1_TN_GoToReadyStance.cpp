// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_1_TN_GoToReadyStance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"
#include "Misc/OutputDeviceNull.h"

EBTNodeResult::Type UAI1_1_TN_GoToReadyStance::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
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
		TArray<AActor *> children_;
		aiCon_->GetPawn()->GetAttachedActors(children_);
		for (int i = 0; i < children_.Num(); i++)
		{
			if (children_[i]->GetName().Contains("BP_EnemyShield"))
			{
				FOutputDeviceNull ar_;
				children_[i]->CallFunctionByNameWithArguments(TEXT("EnemyShieldBreak"), ar_, NULL, true);
			}
		}
	}
	else if (true)
//	else if (m_bbComp->GetValueAsFloat("currArmor") > aiCon_->GetArmor().GetFloat())
	{ // Go to knockback
		ChangeStance(6);
		TArray<AActor *> children_;
		aiCon_->GetPawn()->GetAttachedActors(children_);
		for (int i = 0; i < children_.Num(); i++)
		{
			if (children_[i]->GetName().Contains("BP_EnemyShield"))
			{
				FOutputDeviceNull ar_;
				children_[i]->CallFunctionByNameWithArguments(TEXT("EnemyShieldHit"), ar_, NULL, true);
			}
		}
	}
	else
	{
		ChangeStance(0);
	}

	return EBTNodeResult::Succeeded;
}

void UAI1_1_TN_GoToReadyStance::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currStance", _stance);
}