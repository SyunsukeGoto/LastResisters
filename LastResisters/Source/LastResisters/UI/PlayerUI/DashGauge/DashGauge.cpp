// Fill out your copyright notice in the Description page of Project Settings.


#include "DashGauge.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"

FDashGauge::FDashGauge()
{

}

void FDashGauge::ApplyToImage(UImage * imageToApply)
{
	imageToApply->SetBrushFromMaterial(MaterialInstance);
}
void FDashGauge::ApplyToMaterial()
{
	MaterialInstance->SetScalarParameterValue("Use Texture", gaugeParameters.useTexture);
	MaterialInstance->SetScalarParameterValue("AlphaCutOff", gaugeParameters.percent);
	MaterialInstance->SetScalarParameterValue("Brightness", gaugeParameters.brightness);
	MaterialInstance->SetScalarParameterValue("DesiredRadius", gaugeParameters.desiredRadius);
	MaterialInstance->SetScalarParameterValue("InitialRadius", gaugeParameters.initialRadius);

	if (gaugeParameters.useTexture)
	{
		MaterialInstance->SetScalarParameterValue("PanSpeedX", gaugeParameters.panSpeeds.X);
		MaterialInstance->SetScalarParameterValue("PanSpeedY", gaugeParameters.panSpeeds.Y);
		MaterialInstance->SetScalarParameterValue("Texture Scale", gaugeParameters.textureScale);
		MaterialInstance->SetScalarParameterValue("Texture Time Scale", gaugeParameters.textureTimeScale);
		MaterialInstance->SetTextureParameterValue("First Texture", Texture);
	}
	else
	{
		MaterialInstance->SetVectorParameterValue("Color", gaugeParameters.color);
	}
}
void FDashGauge::UpdatePercent()
{
	MaterialInstance->SetScalarParameterValue("AlphaCutOff", gaugeParameters.percent);
}
