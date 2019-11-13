// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_TaskNodes_SetArmor.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"

EBTNodeResult::Type UAI1_TaskNodes_SetArmor::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	UE_LOG(LogTemp, Warning, TEXT("MySet to ActualArmor : (%f)"), aiCon_->GetArmor().GetFloat());
	aiCon_->GetBlackboardComp()->SetValueAsFloat("currArmor", aiCon_->GetArmor());

	return EBTNodeResult::Succeeded;
}