// Fill out your copyright notice in the Description page of Project Settings.


#include "AI2_Character.h"
#include "AI2_AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/PawnSensingComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

// Sets default values
AAI2_Character::AAI2_Character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//Initializing the pawn sensing component
	m_pawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	//Set the peripheral vision angle to 90 degree
	m_pawnSensingComp->SetPeripheralVisionAngle(90.0f);
}

// Called when the game starts or when spawned
void AAI2_Character::BeginPlay()
{
	Super::BeginPlay();

}

void AAI2_Character::OnSeePlayer(APawn * _pawn)
{
	AAI2_AIController* AIController = Cast<AAI2_AIController>(GetController());
	//Set the seen target on the blackboard
	if (AIController)
	{
		AIController->SetSeenPlayer(_pawn);
		m_thePlayerPawn = _pawn;
	}
}

// Called every frame
void AAI2_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Register the function that is going to fire when the character sees a Pawn
	if (m_pawnSensingComp)
	{
		m_pawnSensingComp->OnSeePawn.AddDynamic(this, &AAI2_Character::OnSeePlayer);
	}

	if (m_thePlayerPawn)
	{
		if (!m_pawnSensingComp->CouldSeePawn(m_thePlayerPawn) || !m_pawnSensingComp->HasLineOfSightTo(m_thePlayerPawn))
		{

			AAI2_AIController* AIController = Cast<AAI2_AIController>(GetController());
			if (AIController)
			{
				AIController->GetBlackboardComp()->SetValueAsBool("canSeePlayer", false);
			}
		}
		else
		{
		}
	}
}

// Called to bind functionality to input
void AAI2_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

