// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyUI.h"
#include "../../SpriteAnimation/SpriteAnimation.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "../../Math/UIMath.h"
#include "Kismet/KismetMathLibrary.h"
#include "../../../MyGameInstance.h"
#include "../../../Managers/MyPlayerManager.h"
#include "Components/Image.h"

UEnemyUI::UEnemyUI(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UEnemyUI::NativeConstruct()
{
	// Do some custom setup
	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();

	//Create the delayedGauge materialInstance and apply it to the actual Image
	delayedArmorGauge.MaterialInstance = UMaterialInstanceDynamic::Create(delayedArmorGauge.Material, this);
	delayedArmorGauge.ApplyToMaterial();
	delayedArmorGauge.ApplyToImage(D_ArmorGauge);

	//Create the delayedGauge materialInstance and apply it to the actual Image
	delayedHealthGauge.MaterialInstance = UMaterialInstanceDynamic::Create(delayedHealthGauge.Material, this);
	delayedHealthGauge.ApplyToMaterial();
	delayedHealthGauge.ApplyToImage(D_HPGauge);

	//Create the delayedGauge materialInstance and apply it to the actual Image
	instantArmorGauge.MaterialInstance = UMaterialInstanceDynamic::Create(instantArmorGauge.Material, this);
	instantArmorGauge.ApplyToMaterial();
	instantArmorGauge.ApplyToImage(I_ArmorGauge);

	//Create the delayedGauge materialInstance and apply it to the actual Image
	instantHealthGauge.MaterialInstance = UMaterialInstanceDynamic::Create(instantHealthGauge.Material, this);
	instantHealthGauge.ApplyToMaterial();
	instantHealthGauge.ApplyToImage(I_HPGauge);

	//Create the delayedGauge materialInstance and apply it to the actual Image
	_enemyIcon.MaterialInstance = UMaterialInstanceDynamic::Create(_enemyIcon.Material, this);
	_enemyIcon.ApplyToMaterial();
	_enemyIcon.ApplyToImage(EnemyIcon);

	//Set the delay.
	healthDelayTimer = healthDelay;
	armorDelayTimer = armorDelay;

	//Do casting of the controller to find out its type.
	aiCon1_ = Cast<AAI1_AIController>(aiController);

	isAiOne = aiCon1_ != nullptr;

	//Casting and stuff.
	if (isAiOne)
	{
		maxHealth = aiCon1_->GetMaxHP();
		maxArmor = aiCon1_->GetMaxArmor();
		_enemyIcon.UpdateTexture(aiOneImage);
	}
	else
	{
		//Defaults.
		maxHealth = 0;
		maxArmor = 0;
	}
	_enemyIcon.SetTexture();
	currentHealth = maxHealth;
	currentArmor = maxArmor;
}

void UEnemyUI::NativeTick(const FGeometry & MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);
	// Do your custom tick stuff here

#pragma region Normalization
		//Call the normalizedFunctions
	NormalizeArmorValue();
	NormalizeHealthValue();
#pragma endregion

#pragma region HealthGauge
	if (calculateDifferenceHealth)
	{
		healthDelayTimer = healthDelay;
		UpdateHealthGauge(InDeltaTime);
	}
	else
	{
		if (healthDelayTimer > 0)
			healthDelayTimer -= InDeltaTime;
		else
			UpdateHealthGauge(InDeltaTime);
	}
#pragma endregion

#pragma region ArmorGauge
	if (calculateDifferenceArmor)
	{
		armorDelayTimer = armorDelay;
		UpdateArmorGauge(InDeltaTime);
	}
	else
	{
		if (armorDelayTimer > 0)
			armorDelayTimer -= InDeltaTime;
		else
			UpdateArmorGauge(InDeltaTime);
	}
#pragma endregion

	GetCrackEdges();
	//Get distnace and shwo thsi UI only if its a certain distance.
	if (GetDistanceToPlayer())
	{
		//Do rotation towards player.
		RotateTowardsPlayer();
	}

	//Health update.
	if (isAiOne)
	{
		if (currentHealth != aiCon1_->GetHP())
		{
			currentHealth = aiCon1_->GetHP();
			calculateDifferenceHealth = true;
		}
	}
	else
	{
		//Else statement,
	}
	
	//Armor update.
	if (isAiOne)
	{
		if (currentArmor != aiCon1_->GetArmor())
		{
			currentArmor = aiCon1_->GetArmor();
			calculateDifferenceArmor = true;
		}
	}
	else
	{
		//Else statement,
	}
}

void UEnemyUI::UpdateHealthGauge(float inDeltaTime)
{
	if (calculateDifferenceHealth)
	{
		healthRate = (f_desiredHealth - f_currentHealth) / healthDownTime;
		calculateDifferenceHealth = false;
	}

	//Else we just keep minusing

	//Only if they're not the same then we bother to do these

	if (f_desiredHealth != f_currentHealth)
	{
		f_currentHealth += (healthRate * inDeltaTime);

		if (healthRate > 0)
		{
			if (f_currentHealth >= f_desiredHealth)
				f_currentHealth = f_desiredHealth;
		}
		else
		{
			if (f_currentHealth <= f_desiredHealth)
				f_currentHealth = f_desiredHealth;
		}

		instantHealthGauge.healthParameters.percentage = f_desiredHealth;
		delayedHealthGauge.healthParameters.percentage = f_currentHealth;

		//Update the percentages
		instantHealthGauge.UpdatePercent();
		delayedHealthGauge.UpdatePercent();
	}
	else
	{
		//End function
	}
}

void UEnemyUI::UpdateArmorGauge(float inDeltaTime)
{
	if (calculateDifferenceArmor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Armor Rate"));
		armorRate = (f_desiredArmor - f_currentArmor) / armorDownTime;
		calculateDifferenceArmor = false;
	}

	//Else we just keep minusing

	//Only if they're not the same then we bother to do these

	if (f_desiredArmor != f_currentArmor)
	{
		f_currentArmor += (armorRate * inDeltaTime);

		if (healthRate > 0)
		{
			if (f_currentArmor >= f_desiredArmor)
				f_currentArmor = f_desiredArmor;
		}
		else
		{
			if (f_currentArmor <= f_desiredArmor)
				f_currentArmor = f_desiredArmor;
		}

		instantArmorGauge.armorParameters.percentage = f_desiredArmor;
		delayedArmorGauge.armorParameters.percentage = f_currentArmor;

		//Update the percentages
		instantArmorGauge.UpdatePercent();
		delayedArmorGauge.UpdatePercent();
	}
	else
	{
		//End function
	}
}

void UEnemyUI::NormalizeHealthValue()
{
	float healthAmount;
	
	if (isAiOne)
		healthAmount = aiCon1_->GetHP();
	else
		healthAmount =  -1;
	
	f_desiredHealth = UIMath::NormalizeValueCustomRange(UIMath::NormalizeValue((float)healthAmount, minHealth, maxHealth), 0.f, 1.0f);
}

void UEnemyUI::NormalizeArmorValue()
{
	float armorAmount;

	if (isAiOne)
		armorAmount = aiCon1_->GetArmor();
	else
		armorAmount = -1;

	f_desiredArmor = UIMath::NormalizeValueCustomRange(UIMath::NormalizeValue((float)armorAmount, minArmor, maxArmor), 0.f, 1.0f);
}

void UEnemyUI::GetCrackEdges()
{
	float healthAmount;

	if (isAiOne)
		healthAmount = aiCon1_->GetHP();
	else
		healthAmount = -1;

	for (auto deviations : crackDeviations)
	{
		if (healthAmount >  100 * deviations.multiplier)
			continue;

		currentEdge.multiplier = deviations.multiplier;
		currentEdge.FirstCrack = deviations.FirstCrack;
		currentEdge.SecondCrack = deviations.SecondCrack;
		CrackedImage->SetBrushFromTexture(currentEdge.FirstCrack);
		CrackedImageTwo->SetBrushFromTexture(currentEdge.SecondCrack);
	}

}

bool UEnemyUI::GetDistanceToPlayer()
{
	FVector playerPos = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos;

	if (FVector::DistSquared(playerPos, AIPosition) > maxDistance)
	{
		SetRenderOpacity(0.f);
		return false;
	}
	SetRenderOpacity(1.0f);
	return true;
}

void UEnemyUI::RotateTowardsPlayer()
{
	FVector playerPos = UMyGameInstance::GetInstance()->GetPlayerManagerInstance()->m_playerPos;
	FRotator rotationTowardsPlayer = UKismetMathLibrary::FindLookAtRotation(playerPos,AIPosition );
	UIRotation = FRotator(0, rotationTowardsPlayer.Yaw + 180.f, 0);
}

void UEnemyUI::SetAIControllerUI(AAIController * targetAiController)
{
	this->aiController = targetAiController;
}

void UEnemyUI::SetAIPosition(FVector aiPosition)
{
	AIPosition = aiPosition;
}

FRotator UEnemyUI::GetUIRotation()
{
	return UIRotation;
}
