// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_TaskNodes_GoingDownProcess.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"
#include "Managers/MyAttackManager.h"
#include "MyGameInstance.h"
#include "Particles/ParticleSystemComponent.h"


EBTNodeResult::Type UAI1_TaskNodes_GoingDownProcess::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	// Get all necessary values for state management
	m_bbComp = aiCon_->GetBlackboardComp();
	m_currState = m_bbComp->GetValueAsEnum("currStance");

	switch (m_currState)
	{
	case 7:
	{ // Going down state
		//// Activate the explosion effect
		//UActorComponent * compRef_ = aiCon_->GetPawn()->GetComponentByClass(UParticleSystemComponent::StaticClass());
		//if (compRef_)
		//{
		//	compRef_->Activate();
		//}
		ChangeStance(8);
	} break;

	case 8:
	{ // Staying down state
		ChangeStance(9);
	} break;

	case 9:
	{ // Rising From Down state
		ChangeStance(0);
	} break;

	default:
	{
	} break;
	}


	return EBTNodeResult::Succeeded;
}
void UAI1_TaskNodes_GoingDownProcess::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currStance", _stance);
}
