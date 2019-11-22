// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimatedBar.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"

FAnimatedBar::FAnimatedBar()
{

}

void FAnimatedBar::ApplyToImage(UImage * imageToApply)
{
	imageToApply->SetBrushFromMaterial(MaterialInstance);
}
void FAnimatedBar::ApplyToMaterial()
{
	MaterialInstance->SetScalarParameterValue("Use Texture", barParameters.useTexture);
	MaterialInstance->SetScalarParameterValue("Percentage", barParameters.percent);
	MaterialInstance->SetScalarParameterValue("OpacityStrength", barParameters.opacityStrength);

	if (barParameters.useTexture)
	{
		MaterialInstance->SetScalarParameterValue("Texture Strength", barParameters.brightness);
		MaterialInstance->SetTextureParameterValue("Texture", Texture);
	}
	else
	{
		MaterialInstance->SetVectorParameterValue("Color", barParameters.color);
	}
}
void FAnimatedBar::UpdatePercent()
{
	MaterialInstance->SetScalarParameterValue("Percentage", barParameters.percent);
}