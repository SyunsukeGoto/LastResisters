// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrackedEdge.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FCrackedEdge
{
	GENERATED_BODY()

		FCrackedEdge();
	FCrackedEdge(FCrackedEdge & other);

	UPROPERTY(EditDefaultsOnly)
	//Multiplier between 0 and 1.
		float multiplier;
	UPROPERTY(EditDefaultsOnly)
		class UTexture2D * FirstCrack;
	UPROPERTY(EditDefaultsOnly)
		class UTexture2D * SecondCrack;

};
