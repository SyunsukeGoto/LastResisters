// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAttackManager.h"
#include "MyPlayerManager.h"
#include "MyGameInstance.h"
#include "UI/PlayerUI/PlayerHitUI/PlayerHitUI.h"
#include "AIController.h"
#include "AI/AI1/AI1_AIController.h"
#include "AI/AI2/AI2_AIController.h"
#include "MyUIManager.h"

MyAttackManager::MyAttackManager()
{
}

MyAttackManager::~MyAttackManager()
{
}

bool MyAttackManager::AddToListOfAttacks(Attack_Info _info)
{
	if (!_info.info_EnemyID.IsEmpty())
	{
		_info.attackIndex = attackIndex;
		attackIndex += 1;
		myListOfAttacks.Add(_info);

		return true;
	}
	return false;
}

bool MyAttackManager::AddToListOfAI1(AAIController* _aiCon)
{
	if (_aiCon)
	{
		myListOfAI1.Add(_aiCon);

		return true;
	}
	return false;
}

bool MyAttackManager::AddToListOfAI2(AAIController* _aiCon)
{
	if (_aiCon)
	{
		myListOfAI2.Add(_aiCon);

		return true;
	}
	return false;
}


void MyAttackManager::Update(float deltaTime)
{
	UpdateAllAttacks(deltaTime);
}

void MyAttackManager::UpdateAllAttacks(float _dt)
{
	TArray<int> removalList;
	//int sizeOfList = ;
	for (int i = 0; i < myListOfAttacks.Num(); ++i)
	{
		// Update the countdown
		myListOfAttacks[i].info_CountdownTimer = myListOfAttacks[i].info_CountdownTimer - _dt; // -= doesnt work

		if (myListOfAttacks[i].info_CountdownTimer <= m_minReactionTime && !myListOfAttacks[i].addedToUI)
		{
			// Init the attack to the UI
			UMyGameInstance::GetInstance()->GetUIManagerInstance()->HandleInit(myListOfAttacks[i]);
			myListOfAttacks[i].addedToUI = true;
		}

		if (myListOfAttacks[i].info_CountdownTimer <= -myListOfAttacks[i].info_BlockTimeWindow / 2)
		{ // If the attack was not blocked
			// Damage the player
			UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->DamageThePlayer(myListOfAttacks[i].info_damage);

			// Delete the attack from the UI
			UMyGameInstance::GetInstance()->GetUIManagerInstance()->HandleDelete(myListOfAttacks[i], false);

			// Remove the attack from the list
	/*		myListOfAttacks.RemoveAt(i);
			myListOfAttacks.Shrink();
*/
			removalList.Add(i);
			

			//if (sizeOfList > 0)
			//{ // If there are more things to check through in the list of attacks
			//	--i;
			//	--sizeOfList;
			//}
		}
		else if (myListOfAttacks[i].info_CountdownTimer <= myListOfAttacks[i].info_BlockTimeWindow / 2)
		{ // If attack can be blocked
			if (UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->CheckIfBlocked(myListOfAttacks[i].info_Position, myListOfAttacks[i].info_Rotation))
			{ // If attack has been successfully blocked
				// Damage the AI's armor
				DamageTheAIArmor(myListOfAttacks[i].info_EnemyID);

				// Delete the attack from the UI
				UMyGameInstance::GetInstance()->GetUIManagerInstance()->HandleDelete(myListOfAttacks[i], true);

				// Remove the attack from the list
	/*			myListOfAttacks.RemoveAt(i);
				myListOfAttacks.Shrink();*/

				removalList.Add(i);

				//if (sizeOfList > 0)
				//{ // If there are more things to check through in the list of attacks
				//	--i;
				//	--sizeOfList;
				//}
			}
		}
	}

	for (int i = 0; i < removalList.Num(); ++i)
	{
		myListOfAttacks.RemoveAt(removalList[i]);
		myListOfAttacks.Shrink();
	}
}

void MyAttackManager::DamageTheAIArmor(FString _ID)
{
	for (int i = 0; i < myListOfAI1.Num(); i++)
	{
		AAI1_AIController* ai1Con_ = Cast<AAI1_AIController>(myListOfAI1[i]);

		if (ai1Con_)
		{
			if (ai1Con_->GetPawn()->GetName() == _ID)
			{
				ai1Con_->SetArmor(ai1Con_->GetArmor() - armorDecrease);
				UE_LOG(LogTemp, Warning, TEXT("I[HIT : %d] ActualArmor : (%f)")
					, i
					, ai1Con_->GetArmor().GetFloat());
				return;
			}
		}
	}
	for (int i = 0; i < myListOfAI2.Num(); i++)
	{
		AAI2_AIController* ai2Con_ = Cast<AAI2_AIController>(myListOfAI2[i]);

		if (ai2Con_)
		{
			if (ai2Con_->GetPawn()->GetName() == _ID)
			{
				ai2Con_->SetArmor(ai2Con_->GetArmor() - armorDecrease);
				UE_LOG(LogTemp, Warning, TEXT("I[HIT : %d] ActualArmor : (%f)")
					, i
					, ai2Con_->GetArmor().GetFloat());
				return;
			}
		}
	}
}

bool MyAttackManager::RemoveFromListOfAI1(AAIController * _aiCon)
{
	if (_aiCon)
	{
		myListOfAI1.Remove(_aiCon);
		myListOfAI1.Shrink();

		return true;
	}
	return false;
}

bool MyAttackManager::RemoveFromListOfAI2(AAIController * _aiCon)
{
	if (_aiCon)
	{
		myListOfAI2.Remove(_aiCon);
		myListOfAI2.Shrink();

		return true;
	}
	return false;
}

bool MyAttackManager::PrintOutListOfAttacks()
{
	for (int i = 0; i < myListOfAttacks.Num(); i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("I[Index : %d] MyCharacter's Name is %s , Robot Position : (%f, %f, %f), Rotation : (%f)")
			, i
			, *myListOfAttacks[i].info_EnemyID
			, myListOfAttacks[i].info_Position.X
			, myListOfAttacks[i].info_Position.Y
			, myListOfAttacks[i].info_Position.Z
			, (float)myListOfAttacks[i].info_Rotation);
	}
	return false;
}

bool MyAttackManager::PrintOutListOfAI1()
{
	for (int i = 0; i < myListOfAI1.Num(); i++)
	{
		AAI1_AIController* ai1Con_ = Cast<AAI1_AIController>(myListOfAI1[i]);

		if (ai1Con_)
		{

			UE_LOG(LogTemp, Warning, TEXT("I[Index : %d] HP : (%f)")
				, i
				, ai1Con_->GetHP().GetFloat());
		}
	}
	return false;
}


bool MyAttackManager::PrintOutListOfAI2()
{
	for (int i = 0; i < myListOfAI2.Num(); i++)
	{
		AAI2_AIController* ai2Con_ = Cast<AAI2_AIController>(myListOfAI2[i]);

		if (ai2Con_)
		{

			UE_LOG(LogTemp, Warning, TEXT("I[Index : %d] HP : (%f)")
				, i
				, ai2Con_->GetHP().GetFloat());
		}
	}
	return false;
}
