// Fill out your copyright notice in the Description page of Project Settings.


#include "AI1_2_TN_GoToOffenseStance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AI/AI1/AI1_AIController.h"
#include "AIController.h"
#include "Managers/MyAttackManager.h"
#include "Managers/MyPlayerManager.h"
#include "MyGameInstance.h"
#include "AI/NeuralNetwork/NeuralNetwork.h"
#include "AI/NeuralNetwork/Brain.h"

#define NUM_INPUT_LAYERS		3
#define NUM_HIDDEN_LAYERS		6
#define NUM_OUTPUT_LAYERS		4

EBTNodeResult::Type UAI1_2_TN_GoToOffenseStance::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
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

	// Create a brain object
	Brain brain_;

	// Initialize brain
	brain_.Initialize(NUM_INPUT_LAYERS, NUM_HIDDEN_LAYERS, NUM_OUTPUT_LAYERS);

	// Set the brain values from the learning environment
	{
		brain_.HiddenLayer.BiasWeights[0] = 19.1966f;
		brain_.HiddenLayer.BiasWeights[1] = 20.3679f;
		brain_.HiddenLayer.BiasWeights[2] = 26.2022f;
		brain_.HiddenLayer.BiasWeights[3] = 28.2214f;
		brain_.HiddenLayer.Weights[0][0] = 0.0937856f;
		brain_.HiddenLayer.Weights[0][1] = 0.369828f;
		brain_.HiddenLayer.Weights[0][2] = -2.71631f;
		brain_.HiddenLayer.Weights[0][3] = -2.50044f;
		brain_.HiddenLayer.Weights[1][0] = 0.464968f;
		brain_.HiddenLayer.Weights[1][1] = -0.434792f;
		brain_.HiddenLayer.Weights[1][2] = -0.026046f;
		brain_.HiddenLayer.Weights[1][3] = -0.481792f;
		brain_.HiddenLayer.Weights[2][0] = -3.69655f;
		brain_.HiddenLayer.Weights[2][1] = -3.76609f;
		brain_.HiddenLayer.Weights[2][2] = 1.85094f;
		brain_.HiddenLayer.Weights[2][3] = 2.07231f;
		brain_.HiddenLayer.Weights[3][0] = -0.297235f;
		brain_.HiddenLayer.Weights[3][1] = -0.325469f;
		brain_.HiddenLayer.Weights[3][2] = -1.76071f;
		brain_.HiddenLayer.Weights[3][3] = -1.82226f;
		brain_.InputLayer.BiasWeights[0] = -0.851139f;
		brain_.InputLayer.BiasWeights[1] = 0.53715f;
		brain_.InputLayer.BiasWeights[2] = -0.63971f;
		brain_.InputLayer.BiasWeights[3] = 0.802838f;
		brain_.InputLayer.Weights[0][0] = -5.14801f;
		brain_.InputLayer.Weights[0][1] = 4.87652f;
		brain_.InputLayer.Weights[0][2] = -3.11758f;
		brain_.InputLayer.Weights[0][3] = 4.28878f;
		brain_.InputLayer.Weights[1][0] = 4.81508f;
		brain_.InputLayer.Weights[1][1] = -10.4182f;
		brain_.InputLayer.Weights[1][2] = -1.31007f;
		brain_.InputLayer.Weights[1][3] = -5.10838f;
	}

	// Feed inputs
	brain_.SetInputForUE(FVector::DotProduct(aiCon_->GetPawn()->GetActorRightVector(), -aiCon_->GetPawn()->GetActorLocation() + UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_leftPos.GetLocation()), 0, 0);
	brain_.FeedForward();

	// Decision making
	int output = 0;
	float highestValue = brain_.GetOutput(0);
	if (brain_.GetOutput(1) > highestValue)
	{
		output = 1;
		highestValue = brain_.GetOutput(1);
	}
	if (brain_.GetOutput(2) > highestValue)
	{
		output = 2;
		highestValue = brain_.GetOutput(2);
	}
	if (brain_.GetOutput(3) > highestValue)
	{
		output = 3;
		highestValue = brain_.GetOutput(3);
	}

	UE_LOG(LogTemp, Warning, TEXT("[Output : %d] Diff : (%f)(%f)(%f)(%f)")
		, output
		, aiCon_->GetPawn()->GetActorRightVector().X
		, aiCon_->GetPawn()->GetActorRightVector().Y
		, aiCon_->GetPawn()->GetActorRightVector().Z
		, FVector::DotProduct(aiCon_->GetPawn()->GetActorRightVector(), aiCon_->GetPawn()->GetActorLocation() - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_leftPos.GetLocation()));
	ChangeStance(output + 1);

	// Send attack info to attack manager
	MyAttackManager::Attack_Info info_;
	info_.info_EnemyID = aiCon_->GetPawn()->GetName();

	switch (output)
	{
	case 1:
	{
		info_.info_damage = comboAttackOne.infoDamage0;
		info_.info_Rotation = comboAttackOne.infoRotation0;
		info_.info_CountdownTimer = comboAttackOne.infoDuration0;

		//Set position of comboAttack
		comboAttackOne.infoPos0.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackOne.infoPos0.X
		//	, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackOne.infoPos0.Z
		//	, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackOne.infoPos0.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackOne.infoPos0;


		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackOne.infoDamage1;
		info_.info_Rotation = comboAttackOne.infoRotation1;
		info_.info_CountdownTimer = comboAttackOne.infoDuration1;

		//Set position of comboAttack
		comboAttackOne.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation() 
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackOne.infoPos1.X
		//	, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackOne.infoPos1.Z
		//	, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackOne.infoPos1.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackOne.infoPos1;

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

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackTwo.infoPos0.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackTwo.infoPos0.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackTwo.infoPos0.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackTwo.infoPos0;

		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);

		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackTwo.infoDamage1;
		info_.info_Rotation = comboAttackTwo.infoRotation1;
		info_.info_CountdownTimer = comboAttackTwo.infoDuration1;

		//Set position of comboAttack
		comboAttackTwo.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackTwo.infoPos1.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackTwo.infoPos1.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackTwo.infoPos1.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackTwo.infoPos1;

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

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackThree.infoPos0.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackThree.infoPos0.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackThree.infoPos0.Y);
		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackThree.infoPos0;

		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;


		info_.info_damage = comboAttackThree.infoDamage1;
		info_.info_Rotation = comboAttackThree.infoRotation1;
		info_.info_CountdownTimer = comboAttackThree.infoDuration1;

		//Set position of comboAttack
		comboAttackThree.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);

		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackThree.infoPos1.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackThree.infoPos1.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackThree.infoPos1.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackThree.infoPos1;

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


		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackFour.infoPos0.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackFour.infoPos0.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackFour.infoPos0.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackFour.infoPos0;

		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPos = info_.info_Position;

		info_.info_damage = comboAttackFour.infoDamage1;
		info_.info_Rotation = comboAttackFour.infoRotation1;
		info_.info_CountdownTimer = comboAttackFour.infoDuration1;

		//Set position of comboAttack
		comboAttackFour.infoPos1.X = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * multiplicationValue;
		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->distanceBetweenEnemy = FMath::Abs(aiCon_->GetPawn()->GetActorLocation().X - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos.X) * (1 - multiplicationValue);


		//info_.info_Position = aiCon_->GetPawn()->GetActorLocation()
		//	+ FVector(aiCon_->GetPawn()->GetActorRightVector().Y * comboAttackFour.infoPos1.X
		//		, aiCon_->GetPawn()->GetActorForwardVector().X * comboAttackFour.infoPos1.Z
		//		, aiCon_->GetPawn()->GetActorUpVector().Z *comboAttackFour.infoPos1.Y);

		info_.info_Position = aiCon_->GetPawn()->GetActorLocation() + comboAttackFour.infoPos1;

		UMyGameInstance::GetInstance()->GetAttackManagerInstance()->AddToListOfAttacks(info_);


		UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->yabaiPosTwo = info_.info_Position;
	}
	break;
	default:
		break;
	}



	return EBTNodeResult::Succeeded;
}

void UAI1_2_TN_GoToOffenseStance::ChangeStance(int _stance)
{
	m_bbComp->SetValueAsEnum("currStance", _stance);

}
