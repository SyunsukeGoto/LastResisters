// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitUI.h"
#include "Components/Image.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "../../../MyGameInstance.h"
#include "../../../Managers/MyPlayerManager.h"

UPlayerHitUI::UPlayerHitUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//UE_LOG(LogTemp, Warning, TEXT("Size: %d"), hitArray.Num());
}

void UPlayerHitUI::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	//Set everything not visible
	imageArray.Add(HitImageOne);
	imageArray.Add(HitImageTwo);
	imageArray.Add(HitImageThree);
	imageArray.Add(HitImageFour);
	imageArray.Add(HitImageFive);
	imageArray.Add(HitImageSix);
	imageArray.Add(HitImageSeven);
	imageArray.Add(HitImageEight);
	imageArray.Add(HitImageNine);
	imageArray.Add(HitImageTen);

	spriteArray.Add(BackgroundOne);
	spriteArray.Add(BackgroundTwo);
	spriteArray.Add(BackgroundThree);
	spriteArray.Add(BackgroundFour);
	spriteArray.Add(BackgroundFive);

	for (int i = 0; i < imageArray.Num(); i++)
	{
		//Set all to hidden first...
		imageArray[i]->SetVisibility(ESlateVisibility::Hidden);
	}
	for (int i = 0; i < spriteArray.Num(); i++)
	{
		//Set all to hidden first...
		spriteArray[i]->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UPlayerHitUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	//Copy the array from the UI Manager
	hitArray = UMyGameInstance::GetInstance()->GetUIManagerInstance()->playerHitIndicators;

	//Loop through all the elements.
	for (int i = 0; i < hitArray.Num(); i++)
	{
		//Set the images to the specified images.
		hitArray[i].LinkedImage = imageArray[i];
		hitArray[i].LinkedImageTwo = imageArray[i + imageArray.Num() / 2];
		hitArray[i].LinkedBackground = spriteArray[i];


		//Check for material now and create if it's not already there.
		if (hitArray[i].MaterialInstance == nullptr)
		{
			//Create the first one
			hitArray[i].MaterialInstance = UMaterialInstanceDynamic::Create(MainMaterial, this);
			hitArray[i].MaterialInstanceTwo = UMaterialInstanceDynamic::Create(SubMaterial, this);
			hitArray[i].MainTexture = MainTexture;
			hitArray[i].DesiredBlockTexture = DesiredBlockTexture;
			hitArray[i].DesiredHitTexture = DesiredHitTexture;
			hitArray[i].MainColor = MainColor;
			hitArray[i].DesiredBlockColor = DesiredBlockColor;
			hitArray[i].DesiredHitColor = DesiredHitColor;

			hitArray[i].ApplyToMaterial();
			hitArray[i].ApplyToImage(hitArray[i].MaterialInstance,hitArray[i].LinkedImage);
			hitArray[i].ApplyToImage(hitArray[i].MaterialInstanceTwo,hitArray[i].LinkedImageTwo);
		}

		hitArray[i].UpdateState();
		hitArray[i].UpdateBlockPercentage();
		
		//FVector hit_ = hitArray[i].playerHitParameters.position - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos;

		//Set rotations based on the type it is. I can improve this laster on.
		hitArray[i].LinkedImage->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation);
		hitArray[i].LinkedImageTwo->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation);
		hitArray[i].LinkedBackground->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation);

		//enemy position is hitArray variable.
		FVector playerUp = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_upVector;
		FVector playerRight = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_rightVector;
		FVector ballPos = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->ballPos;

		FVector resultX = ballPos.ProjectOnTo(playerRight);
		FVector resultY = ballPos.ProjectOnTo(playerUp);

		FVector2D viewportSize = FVector2D(1920, 1080);
		FVector2D halfViewportSize = viewportSize * 0.25f;

		FVector finalResult = resultX + resultY;
		//FVector finalResult = FVector(-3880.0,-40.000000, 260.000000);
		//finalResult = finalResult - UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos;

		//UE_LOG(LogTemp, Warning, TEXT("Final Result Vector:(%f,%f,%f)"),
		//	finalResult.X,
		//	finalResult.Y,
		//	finalResult.Z);

		hitArray[i].LinkedImage->SetRenderTranslation(FVector2D(halfViewportSize.X + finalResult.Y, halfViewportSize.Y -finalResult.Z));
		hitArray[i].LinkedImageTwo->SetRenderTranslation(FVector2D(halfViewportSize.X + finalResult.Y, halfViewportSize.Y -finalResult.Z));
		hitArray[i].LinkedBackground->SetRenderTranslation(FVector2D(halfViewportSize.X + finalResult.Y, halfViewportSize.Y -finalResult.Z));
				
		//Basic calculation on rate.
		if (hitArray[i].playerHitParameters.calculateRate)
		{
			hitArray[i].playerHitParameters.delayTimer = hitArray[i].playerHitParameters.delay;
			hitArray[i].UpdateFillAmount(InDeltaTime);
		}
		else
		{
			if (hitArray[i].playerHitParameters.delayTimer > 0)
				hitArray[i].playerHitParameters.delayTimer -= InDeltaTime;
			else
				hitArray[i].UpdateFillAmount(InDeltaTime);
		}
	}

	//Update back into the UIManager
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->playerHitIndicators = hitArray;
}
