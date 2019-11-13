// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitUI.h"
#include "Components/Image.h"
#include "Materials/MaterialInstanceDynamic.h"

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
			hitArray[i].MaterialInstance = UMaterialInstanceDynamic::Create(MainMaterial, this);
			hitArray[i].MainTexture = MainTexture;
			hitArray[i].DesiredBlockTexture = DesiredBlockTexture;
			hitArray[i].DesiredHitTexture = DesiredHitTexture;
			hitArray[i].MainColor = MainColor;
			hitArray[i].DesiredBlockColor = DesiredBlockColor;
			hitArray[i].DesiredHitColor = DesiredHitColor;
			hitArray[i].ApplyToMaterial();
			hitArray[i].ApplyToImage(hitArray[i].LinkedImage);
			hitArray[i].ApplyToImage(hitArray[i].LinkedImageTwo);
		}

		hitArray[i].UpdateState();
		hitArray[i].UpdateBlockPercentage();

		//Set all images to be visible so it shows on screen.
		if (hitArray[i].LinkedImage != nullptr)
			hitArray[i].LinkedImage->SetVisibility(ESlateVisibility::Visible);
		
		if (hitArray[i].LinkedImageTwo != nullptr)
			hitArray[i].LinkedImageTwo->SetVisibility(ESlateVisibility::Visible);
		
		if (hitArray[i].LinkedBackground != nullptr)
			hitArray[i].LinkedBackground->SetVisibility(ESlateVisibility::Visible);
		
		//Set rotations based on the type it is. I can improve this laster on.
		hitArray[i].LinkedImage->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation);
		hitArray[i].LinkedImageTwo->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation + 180.f);
		hitArray[i].LinkedBackground->SetRenderTransformAngle(hitArray[i].playerHitParameters.rotation);

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
