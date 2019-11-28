// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyIcon.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"

FEnemyIcon::FEnemyIcon()
{
}

void FEnemyIcon::ApplyToImage(UImage * imageToApply)
{
	imageToApply->SetBrushFromMaterial(MaterialInstance);
}

void FEnemyIcon::ApplyToMaterial()
{
	MaterialInstance->SetTextureParameterValue("Texture", Texture);
	MaterialInstance->SetScalarParameterValue("OpacityMaskScale", iconParameters.opacityMaskScale);
	MaterialInstance->SetScalarParameterValue("ScaleOriginX", iconParameters.scaleorigin.X);
	MaterialInstance->SetScalarParameterValue("ScaleOriginY", iconParameters.scaleorigin.Y);
	MaterialInstance->SetScalarParameterValue("Texture Brightness", iconParameters.brightness);
}

void FEnemyIcon::UpdateTexture(UTexture * textureToUpdate)
{
	Texture = textureToUpdate;
}

void FEnemyIcon::SetTexture()
{
	MaterialInstance->SetTextureParameterValue("Texture", Texture);
}
