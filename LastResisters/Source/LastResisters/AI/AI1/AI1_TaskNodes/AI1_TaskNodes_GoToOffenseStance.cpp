// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_TaskNodes_GoToOffenseStance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"
#include "Managers/MyAttackManager.h"
#include "Managers/MyPlayerManager.h"
#include "MyGameInstance.h"

EBTNodeResult::Type UAI1_TaskNodes_GoToOffenseStance::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAI1_AIController* aiCon_ = Cast<AAI1_AIController>(OwnerComp.GetAIOwner());
	if (!aiCon_)
		return EBTNodeResult::Failed;

	// Get all necessary values for state management
	m_bbComp = aiCon_->GetBlackboardComp();

	if (aiCon_->GetHP() <= 0)
	{
		// Dead Stance
		ChangeStance(10);
		return EBTNodeResult::Succeeded;
	}

	int32 randAtk_ = FMath::RandRange(1, 4);
	//int32 randAtk_ = 4;
	ChangeStance(randAtk_);

	// Send attack info to attack manager
	MyAttackManager::Attack_Info info_;
	info_.info_EnemyID = aiCon_->GetPawn()->GetName();

	switch (randAtk_)
	{
	case 1:
	{
		info_.info_damage = comboAttackOne.infoDamage0;
		info_.info_Rotation = comboAttackOne.infoRotation0;
		info_.info_CountdownTimer = comboAttackOne.infoDuration0;

		//Set position of comboAttack
		comboAttackOne.infoPos0.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackOne.infoPos0.X
			, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackOne.infoPos0.Z
			, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackOne.infoPos0.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackOne.infoDamage1;
		info_.info_Rotation = comboAttackOne.infoRotation1;
		info_.info_CountdownTimer = comboAttackOne.infoDuration1;

		//Set position of comboAttack
		comboAttackOne.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() 
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackOne.infoPos1.X
			, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackOne.infoPos1.Z
			, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackOne.infoPos1.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPosTwo = info_.info_Position;
	}
	break;
	case 2:
	{
		info_.info_damage = comboAttackTwo.infoDamage0;
		info_.info_Rotation = comboAttackTwo.infoRotation0;
		info_.info_CountdownTimer = comboAttackTwo.infoDuration0;

		//Set position of comboAttack
		comboAttackTwo.infoPos0.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackTwo.infoPos0.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackTwo.infoPos0.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackTwo.infoPos0.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackTwo.infoDamage1;
		info_.info_Rotation = comboAttackTwo.infoRotation1;
		info_.info_CountdownTimer = comboAttackTwo.infoDuration1;

		//Set position of comboAttack
		comboAttackTwo.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackTwo.infoPos1.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackTwo.infoPos1.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackTwo.infoPos1.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPosTwo = info_.info_Position;
	}
	break;
	case 3:
	{
		info_.info_damage = comboAttackThree.infoDamage0;
		info_.info_Rotation = comboAttackThree.infoRotation0;
		info_.info_CountdownTimer = comboAttackThree.infoDuration0;

		//Set position of comboAttack
		comboAttackThree.infoPos0.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackThree.infoPos0.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackThree.infoPos0.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackThree.infoPos0.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;


		info_.info_damage = comboAttackThree.infoDamage1;
		info_.info_Rotation = comboAttackThree.infoRotation1;
		info_.info_CountdownTimer = comboAttackThree.infoDuration1;

		//Set position of comboAttack
		comboAttackThree.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackThree.infoPos1.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackThree.infoPos1.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackThree.infoPos1.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPosTwo = info_.info_Position;
	}
	break;
	case 4:
	{
		info_.info_damage = comboAttackFour.infoDamage0;
		info_.info_Rotation = comboAttackFour.infoRotation0;
		info_.info_CountdownTimer = comboAttackFour.infoDuration0;

		//Set position of comboAttack
		comboAttackFour.infoPos0.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);


		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackFour.infoPos0.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackFour.infoPos0.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackFour.infoPos0.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackFour.infoDamage1;
		info_.info_Rotation = comboAttackFour.infoRotation1;
		info_.info_CountdownTimer = comboAttackFour.infoDuration1;

		//Set position of comboAttack
		comboAttackFour.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);


		info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
			+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackFour.infoPos1.X
				, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackFour.infoPos1.Z
				, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackFour.infoPos1.Y);
		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPosTwo = info_.info_Position;
	}
	break;
	default:
		break;
	}



	return EBTNodeResult::Succeeded;
}

void UAI1_TaskNodes_GoToOffenseStance::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currStance", _stance);

}
