// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUIManager.h"

MyUIManager::MyUIManager()
{

}

MyUIManager::~MyUIManager()
{
}

void MyUIManager::Update(float deltaTime)
{
	int indexOfAvailable = FindNextAvailableImage();
	if (indexOfAvailable != -1)
	{
		if (additionalRequests.Num() > 0)
		{
			MyAttackManager::Attack_Info info = additionalRequests[0];
			//UE_LOG(LogTemp, Warning, TEXT("Taking Name : %s , Position : (%f, %f, %f), Rotation : (%f), Duration : (%f) into Index[%d]")
			//	, *info.info_EnemyID
			//	, info.info_Position.X
			//	, info.info_Position.Y
			//	, info.info_Position.Z
			//	, (float)info.info_Rotation
			//	, (float)info.info_CountdownTimer
			//	, indexOfAvailable);
			//We assign the additionalRequests first to try to catch up
			playerHitIndicators[indexOfAvailable].AssignParametersFromInfo(info);

			//Then we removed the first variable we took
			additionalRequests.RemoveAt(0);
			//And then we re-organize the array.
			additionalRequests.Shrink();
		}
	}

}

int MyUIManager::FindNextAvailableImage()
{
	for (int i = 0; i < playerHitIndicators.Num(); i++)
	{
		//Check if the image is available.
		if (playerHitIndicators[i].playerHitParameters.duration > 0) // the image is still in use.
			continue;

		//Else it actually worked and it was able to find
		return i;
	}

	//It was unable to find cause they are too many attacks.
	return -1;
}

void MyUIManager::TakeInfoFromRequestQueue()
{
	//Take the first added element and then shrink.
	//The nearest available image should take from the queue.
}

void MyUIManager::HandleInit(MyAttackManager::Attack_Info infoToReceive)
{
	UE_LOG(LogTemp, Warning, TEXT("-----Player UI HandleInit Invoked-----"));
	//UE_LOG(LogTemp, Warning, TEXT("Received MyCharacter's Name is %s , Robot Position : (%f, %f, %f), Rotation : (%f), Duration : (%f)")
	//	, *infoToReceive.info_EnemyID
	//	, infoToReceive.info_Position.X
	//	, infoToReceive.info_Position.Y
	//	, infoToReceive.info_Position.Z
	//	, (float)infoToReceive.info_Rotation
	//	, (float)infoToReceive.info_CountdownTimer);

	//When an init comes, we prioritise the additional request queue first because it came first.
	//Else it is just added to the request queue.

	//If the size is zero then I will add just once
	if (playerHitIndicators.Num() == 0)
	{
		playerHitIndicators.Add(FPlayerHitIndicator());
		positionArray.Add(FVector());
		playerHitIndicators[0].LinkedImage = imageArray[0];
		playerHitIndicators[0].LinkedImageTwo = imageArray[0 + imageArray.Num() / 2];
		playerHitIndicators[0].LinkedBackground = spriteArray[0];
		playerHitIndicators[0].ResultImage = resultArray[0];
		UE_LOG(LogTemp, Warning, TEXT("Added first entry to hit indicators. It now has size : %d"), playerHitIndicators.Num());
	}

	//UE_LOG(LogTemp, Warning, TEXT("---BEFORE---"));
	//Find the next available image
	int indexOfAvailable = FindNextAvailableImage();
	//UE_LOG(LogTemp, Warning, TEXT("Index chosen: %d"),indexOfAvailable);

	//playerHitIndicators[indexOfAvailable].PrintDetails();

	//If we cant find a image then we add to additional requests.
	if (indexOfAvailable == -1)
	{
		//If it cant find... and the number is less than max UI
		if (playerHitIndicators.Num() < maxUI)
		{
			//Add a new entry
			playerHitIndicators.Add(FPlayerHitIndicator());
			//And set the index available to be the newest one
			indexOfAvailable = playerHitIndicators.Num() - 1;
			//Assign the information as well.
			playerHitIndicators[indexOfAvailable].AssignParametersFromInfo(infoToReceive);
			//Add this position into the array.
			positionArray.Add(playerHitIndicators[indexOfAvailable].playerHitParameters.position);

			int step = playerHitIndicators.Num() - 1;
			
			//Assign images to the playerHitIndicator.
			//Set the images to the specified images.
			playerHitIndicators[step].LinkedImage = imageArray[step];
			playerHitIndicators[step].LinkedImageTwo = imageArray[step + imageArray.Num() / 2];
			playerHitIndicators[step].LinkedBackground = spriteArray[step];
			playerHitIndicators[step].ResultImage = resultArray[step];
		}
		else
		{
			//If its default then theres no available images
			additionalRequests.Add(infoToReceive);
		}
	}
	else
	{
		//Now we have available images, but we want to show the additionalRequests first before we process this.
		if (additionalRequests.Num() > 0)
		{
			MyAttackManager::Attack_Info info = additionalRequests[0];
			//We assign the additionalRequests first to try to catch up
			playerHitIndicators[indexOfAvailable].AssignParametersFromInfo(info);
			positionArray[indexOfAvailable] = playerHitIndicators[indexOfAvailable].playerHitParameters.position;
			//Then we removed the first variable we took
			additionalRequests.RemoveAt(0);
			//And then we re-organize the array.
			additionalRequests.Shrink();
		}
		else
		{
			//We assign the info from the pass in
			playerHitIndicators[indexOfAvailable].AssignParametersFromInfo(infoToReceive);
			positionArray[indexOfAvailable] = playerHitIndicators[indexOfAvailable].playerHitParameters.position;
			//playerHitIndicators[indexOfAvailable].PrintDetails();
		}
		playerHitIndicators[indexOfAvailable].LinkedImage = imageArray[indexOfAvailable];
		playerHitIndicators[indexOfAvailable].LinkedImageTwo = imageArray[indexOfAvailable + imageArray.Num() / 2];
		playerHitIndicators[indexOfAvailable].LinkedBackground = spriteArray[indexOfAvailable];
		playerHitIndicators[indexOfAvailable].ResultImage = resultArray[indexOfAvailable];
	}
	//PrintIndicatorList();
}


void MyUIManager::HandleDelete(MyAttackManager::Attack_Info infoToReceive, bool blocked)
{
	UE_LOG(LogTemp, Warning, TEXT("-----Player UI HandleDeleteInvoked-----"));
	//UE_LOG(LogTemp, Warning, TEXT("Received MyCharacter's Name is %s , Robot Position : (%f, %f, %f), Rotation : (%f), Duration : (%f)")
	//	, *infoToReceive.info_EnemyID
	//	, infoToReceive.info_Position.X
	//	, infoToReceive.info_Position.Y
	//	, infoToReceive.info_Position.Z
	//	, (float)infoToReceive.info_Rotation
	//	, (float)infoToReceive.info_CountdownTimer);
	//Loop through all the ones and set based on blocked.
	for (int i = 0; i < playerHitIndicators.Num(); i++)
	{
		//Compare stuff
		if (playerHitIndicators[i].playerHitParameters.attackIndex ==infoToReceive.attackIndex)
		{
			//If everything is roughly the same, then we can add.
			if (playerHitIndicators[i].playerHitParameters.hitState == FPlayerHitUIParameters::HIT_STATES::TOTAL_STATES)
			{
				if (playerHitIndicators[i].playerHitParameters.currentFill != playerHitIndicators[i].playerHitParameters.desiredFill)
				{
					playerHitIndicators[i].playerHitParameters.currentFill = playerHitIndicators[i].playerHitParameters.desiredFill;
					//playerHitIndicators[i].UpdatePercent();
					
				}
				playerHitIndicators[i].playerHitParameters.hitState = (FPlayerHitUIParameters::HIT_STATES)blocked;
				//We change its values.
				if (playerHitIndicators[i].playerHitParameters.hitState == FPlayerHitUIParameters::HIT_STATES::STATE_HIT)
				{
					//fail guard
					playerHitIndicators[i].ResultImage->SetBrushFromTexture(failImage);
				}
				else if(playerHitIndicators[i].playerHitParameters.hitState == FPlayerHitUIParameters::HIT_STATES::STATE_BLOCK)
				{
					//guard success
					playerHitIndicators[i].ResultImage->SetBrushFromTexture(successImage);
				}
			
			}
		}

	}
}

void MyUIManager::PrintIndicatorList()
{
	//UE_LOG(LogTemp, Warning, TEXT("----PRINTING OF LIST----"))
	//	for (int i = 0; i < playerHitIndicators.Num(); i++)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("----Index: %d----"), i);
	//		playerHitIndicators[i].PrintDetails();
	//	}
}
