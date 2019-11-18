// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_TaskNodes_SetArmor.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI2/AI2_AIController.h"
#include "AIController.h"

EBTNodeResult::Type UAI2_TaskNodes_SetArmor::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI2_AIController* aiCon_ = Cast<AAI2_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	UE_LOG(LogTemp, Warning, TEXT("MySet to ActualArmor : (%f)"), aiCon_->GetArmor().GetFloat());
	aiCon_->GetBlackboardComp()->SetValueAsFloat("currArmor", aiCon_->GetArmor());

	return EBTNodeResult::Succeeded;
}