// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHitUI.h"
#include "Components/Image.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "../../../MyGameInstance.h"
#include "../../../Managers/MyPlayerManager.h"
#include "../../../Managers/MyUIManager.h"
#include "Components/CanvasPanelSlot.h"

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

	resultArray.Add(ResultImageOne);
	resultArray.Add(ResultImageTwo);
	resultArray.Add(ResultImageThree);
	resultArray.Add(ResultImageFour);
	resultArray.Add(ResultImageFive);

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
	for (int i = 0; i < resultArray.Num(); i++)
	{
		//Set all to hidden first...
		resultArray[i]->SetVisibility(ESlateVisibility::Hidden);
	}

	//Set it all UI Manager Instance
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->successImage = GuardSuccessImage;
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->failImage = GuardFailImage;
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->imageArray = imageArray;
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->spriteArray = spriteArray;
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->resultArray = resultArray;
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->StoreValues(desiredScale, scaleTime, delay);
	UMyGameInstance::GetInstance()->GetUIManagerInstance()->StoreDownScaleValues(desiredDownScale, downScaleTime, downScaleDelay);
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
		//Check for material now and create if it's not already there.
		if (hitArray[i].MaterialInstance == nullptr)
		{
			UE_LOG(LogTemp, Warning, TEXT("Generated material instance."));
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
			hitArray[i].ApplyToImage(hitArray[i].MaterialInstance, hitArray[i].LinkedImage);
			hitArray[i].ApplyToImage(hitArray[i].MaterialInstanceTwo, hitArray[i].LinkedImageTwo);
			hitArray[i].ResultImage->SetRenderOpacity(hitArray[i].currentOpacity);
		}

		hitArray[i].UpdateState();
		hitArray[i].UpdateBlockPercentage();
		//Updates scale.
		hitArray[i].UpdateScaleXY(InDeltaTime);

		FVector2D canvasSize = FVector2D(1000, 1000);
		//This is the current viewport...
		FVector2D viewportSize = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->cameraValues.viewportSize;
		//Half viewport size
		FVector2D halfViewportSize = viewportSize * 0.5f;
		//Find the multiplication values.
		FVector2D viewToCanvasRatio = FVector2D(canvasSize.X / viewportSize.X, canvasSize.Y / viewportSize.Y);

		int screenPositionArrayNum = UMyGameInstance::GetInstance()->GetUIManagerInstance()->screenPositionArray.Num();
		int hitArrayNum = hitArray.Num();

		FVector2D screenPos = FVector2D(-9999, 9999);
		if (screenPositionArrayNum == hitArrayNum)
		{
			screenPos = UMyGameInstance::GetInstance()->GetUIManagerInstance()->screenPositionArray[i];
		}
		FVector2D finalTranslation = FVector2D(
			((screenPos.X - halfViewportSize.X) *viewToCanvasRatio.X)
			, ((screenPos.Y - halfViewportSize.Y) *viewToCanvasRatio.Y));

		UCanvasPanelSlot * linkedImageOneSlot = Cast<UCanvasPanelSlot>(hitArray[i].LinkedImage->Slot);
		UCanvasPanelSlot * linkedImageTwoSlot = Cast<UCanvasPanelSlot>(hitArray[i].LinkedImageTwo->Slot);
		UCanvasPanelSlot * linkedBackgroundSlot = Cast<UCanvasPanelSlot>(hitArray[i].LinkedBackground->Slot);
		UCanvasPanelSlot * linkedResultSlot = Cast<UCanvasPanelSlot>(hitArray[i].ResultImage->Slot);

		if (linkedImageOneSlot != nullptr)
		{
			linkedImageOneSlot->SetPosition(finalTranslation);
			linkedImageOneSlot->SetSize(FVector2D(hitArray[i].scaleX.currentScale, hitArray[i].scaleY.currentScale));
		}
		if (linkedImageTwoSlot != nullptr)
		{
			linkedImageTwoSlot->SetPosition(finalTranslation);
			linkedImageTwoSlot->SetSize(FVector2D(hitArray[i].scaleX.currentScale, hitArray[i].scaleY.currentScale));
		}
		if (linkedBackgroundSlot != nullptr)
		{
			linkedBackgroundSlot->SetPosition(finalTranslation);
			linkedBackgroundSlot->SetSize(FVector2D(hitArray[i].scaleX.currentScale, hitArray[i].scaleY.currentScale));
		}

		if (linkedResultSlot != nullptr)
		{
			linkedResultSlot->SetPosition(finalTranslation);
			linkedResultSlot->SetSize(FVector2D(hitArray[i].scaleX.currentScale + bigOffset.X, hitArray[i].scaleY.currentScale + bigOffset.Y));

		}

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
