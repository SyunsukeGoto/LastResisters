// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_1_TN_CombatMangement.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"

EBTNodeResult::Type UAI1_1_TN_CombatMangement::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	// Get all necessary values for stance management
	m_bbComp = aiCon_->GetBlackboardComp();
	m_currStance = m_bbComp->GetValueAsEnum("currStance");

	switch (m_currStance)
	{
	case 0:
	{ // Ready stance
		aiCon_->SetTheFocusOnPlayer();
	} break;

	case 1:
	{ // Attack1 stance
		aiCon_->StopFocusOnPlayer();
	} break;

	case 2:
	{ // Attack2 stance
		aiCon_->StopFocusOnPlayer();
	} break;

	case 3:
	{ // Attack3 stance
		aiCon_->StopFocusOnPlayer();
	} break;

	case 4:
	{ // Attack4 stance
		aiCon_->StopFocusOnPlayer();
	} break;

	default:
	{
	} break;
	}


	return EBTNodeResult::Succeeded;
}

void UAI1_1_TN_CombatMangement::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currState", _stance);
}