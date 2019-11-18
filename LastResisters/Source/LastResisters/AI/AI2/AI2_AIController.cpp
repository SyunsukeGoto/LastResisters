// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_AIController.h"
#include "AI2_Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AI2_PatrolTargetPoint.h"
#include "Components/CapsuleComponent.h"
#include "Managers/MyAttackManager.h"
#include "MyGameInstance.h"

AAI2_AIController::AAI2_AIController()
{
	m_behaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	m_blackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
}

void AAI2_AIController::OnPossess(APawn * _pawn)
{
	Super::OnPossess(_pawn);

	AAI2_Character* aiChar_ = Cast<AAI2_Character>(_pawn);

	m_colliderRadius = aiChar_->GetCapsuleComponent()->GetScaledCapsuleRadius();
	m_colliderHalfHeight = aiChar_->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	m_colliderLengthCheck = sqrtf(m_colliderRadius * m_colliderRadius + m_colliderHalfHeight * m_colliderHalfHeight);

	if (aiChar_)
	{ // If valid as AAI2_Character
		if (aiChar_->m_behaviorTree->BlackboardAsset)
		{
			m_blackboardComp->InitializeBlackboard(*(aiChar_->m_behaviorTree->BlackboardAsset));
		}
		
		// Populate array with patrol target points
		//UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AAI2_PatrolTargetPoint::StaticClass(), a, m_patrolPoints);
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAI2_PatrolTargetPoint::StaticClass(), m_patrolPoints);

		if (m_patrolPoints.Num() == 0)
		{ // Prevent crashes, if there are no patrol points, the AI will be stationed at its spawned location
			for (int i = 0; i < 2; i++)
			{
				m_patrolPoints.Add(
					// Spawn and add to patrol points
					GetWorld()->SpawnActor<AAI2_PatrolTargetPoint>(AAI2_PatrolTargetPoint::StaticClass(), aiChar_->GetActorLocation(), FRotator(0, 0, 0), FActorSpawnParameters())
				);
			}
		}
		else
		{
			for (int i = 0; i < m_patrolPoints.Num(); i++)
			{
				FString temp = m_patrolPoints[i]->GetName();
				if (!temp.Contains(aiChar_->GetName()))
				{ // If the patrol point does not belong to the AI
					m_patrolPoints.RemoveAt(i, 1, true);
					i--;
				}
			}
		}

		//Start the behavior tree which corresponds to the specific character
		m_behaviorComp->StartTree(*aiChar_->m_behaviorTree);

		// Add to list of AI2
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAI2(this);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->PrintOutListOfAI2();
	}
}

void AAI2_AIController::SetSeenPlayer(APawn * _pawn)
{
	if (m_blackboardComp)
	{
		if (_pawn->IsPlayerControlled())
		{ // If can see player
			// Set visibility and target location
			if (!m_blackboardComp->GetValueAsVector("targetLocation").Equals(_pawn->GetActorLocation()))
			{
				UE_LOG(LogTemp, Warning, TEXT("New Pawn seen: %s , Robot Pos: [%f, %f, %f]")
					, *_pawn->GetName()
					, _pawn->GetActorLocation().X
					, _pawn->GetActorLocation().Y
					, _pawn->GetActorLocation().Z);
			}
			m_blackboardComp->SetValueAsVector("targetLocation", _pawn->GetActorLocation());
			m_blackboardComp->SetValueAsBool("canSeePlayer", true);
			m_playerRef = _pawn;

			
		}
	}
}

void AAI2_AIController::SetTheFocusOnPlayer()
{
	if (m_blackboardComp)
	{
		if (!m_blackboardComp->GetValueAsBool("canSeePlayer"))
		{
			ClearFocus(EAIFocusPriority::Gameplay);
		}
		else if (m_playerRef)
		{
			SetFocus(m_playerRef);
		}
	}
}

void AAI2_AIController::StopFocusOnPlayer()
{
	ClearFocus(EAIFocusPriority::Gameplay);
}