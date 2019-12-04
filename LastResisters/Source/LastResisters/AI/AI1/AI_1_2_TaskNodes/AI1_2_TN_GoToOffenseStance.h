// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AI1_2_TN_GoToOffenseStance.generated.h"

/**
 * 
 */
UCLASS()
class LASTRESISTERS_API UAI1_2_TN_GoToOffenseStance : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UBlackboardComponent* m_bbComp;

	void ChangeStance(int _stance);

	struct ComboAttackInfo
	{
		//Attack 1.
		FVector infoPos0;
		FFloat16 infoDuration0;
		FFloat16 infoRotation0;
		FFloat16 infoDamage0;

		//Attack 2.
		FVector infoPos1;
		FFloat16 infoDuration1;
		FFloat16 infoRotation1;
		FFloat16 infoDamage1;

		ComboAttackInfo(
			FFloat16 _infoDamage0, FVector _infoPos0, FFloat16 _infoDuration0, FFloat16 _infoRotation0,
			FFloat16 _infoDamage1, FVector _infoPos1, FFloat16 _infoDuration1, FFloat16 _infoRotation1)
			: infoDamage0(_infoDamage0)
			, infoDamage1(_infoDamage1)
			, infoPos0(_infoPos0)
			, infoDuration0(_infoDuration0)
			, infoRotation0(_infoRotation0)
			, infoPos1(_infoPos1)
			, infoDuration1(_infoDuration1)
			, infoRotation1(_infoRotation1)
		{
		}
	};

	//First attack combo
	ComboAttackInfo comboAttackOne =
		ComboAttackInfo(
			FFloat16(20.f)					//damage info0
			, FVector(150.f, 45.f, -45.0f)  //position info 0
			, FFloat16(1.073f)			    //duration info 0
			, FFloat16(10.0f)				//rotation info 0
			, FFloat16(25.0f)				//damage info1
			, FVector(150.f, 35.f, -50.0f)  //position info1
			, FFloat16(1.678f)				//duration info1
			, FFloat16(90.f));				//rotation info1

	ComboAttackInfo comboAttackTwo =
		ComboAttackInfo(
			FFloat16(20.f)					//damage info0
			, FVector(150.f, 0.f, 0.f)		//position info 0
			, FFloat16(0.666f)				//duration info 0
			, FFloat16(70.)					//rotation info 0
			, FFloat16(25.0)				//damage info1
			, FVector(150.f, 0.f, 0.f)		//position info1
			, FFloat16(1.176f)				//duration info1
			, FFloat16(255.f));				//rotation info1

	ComboAttackInfo comboAttackThree =
		ComboAttackInfo(
			FFloat16(20.f)					//damage info0
			, FVector(150.f, 40.f, 35.0f)	//position info 0
			, FFloat16(0.737f)				//duration info 0
			, FFloat16(-15.0f)				//rotation info 0
			, FFloat16(25.0f)				//damage info1
			, FVector(150.f, 35.f, 0.f)		//position info1
			, FFloat16(1.8f)				//duration info1
			, FFloat16(230.f));				//rotation info1

	ComboAttackInfo comboAttackFour =
		ComboAttackInfo(
			FFloat16(20.f)					//damage info0
			, FVector(150.f, 32.5f, 0.f)	//position info 0
			, FFloat16(0.85f)				//duration info 0
			, FFloat16(80.f)				//rotation info 0
			, FFloat16(25.0f)				//damage info1
			, FVector(150.f, 45.f, 10.f)	//position info1
			, FFloat16(1.90f)				//duration info1
			, FFloat16(245.f));				//rotation info1

	float multiplicationValue = 0.75f;

};