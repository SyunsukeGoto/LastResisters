#include "SpecialGaugeParameters.h"

//I'm doing it here for now first.
SpecialGaugeParameters::SpecialGaugeParameters()
	: percent(1.01f)
	, brightness(10.f)
	, desiredRadius(0.07f)
	, initialRadius(0.4f)
	, panSpeedX(0.0f)
	, panSpeedY(0.0f)
	, textureScale(1.0f)
	, textureTimeScale(1.0f)
{
}

void SpecialGaugeParameters::SetPercent(float percent)
{
	this->percent = percent;
}

void SpecialGaugeParameters::SetBrightness(float brightness)
{
	this->brightness = brightness;
}

void SpecialGaugeParameters::SetDesiredRadius(float desiredRadius)
{
	this->desiredRadius = desiredRadius;
}

void SpecialGaugeParameters::SetInitialRadius(float initialRadius)
{
	this->initialRadius = initialRadius;
}

void SpecialGaugeParameters::SetPanSpeedX(float panSpeedX)
{
	this->panSpeedX = panSpeedX;
}

void SpecialGaugeParameters::SetPanSpeedY(float panSpeedY)
{
	this->panSpeedY = panSpeedY;
}

void SpecialGaugeParameters::SetTextureScale(float textureScale)
{
	this->textureScale = textureScale;
}

void SpecialGaugeParameters::SetTextureTimeScale(float textureTimeScale)
{
	this->textureTimeScale = textureTimeScale;
}

float SpecialGaugeParameters::GetPercent()
{
	return percent;
}

float SpecialGaugeParameters::GetBrightness()
{
	return brightness;
}

float SpecialGaugeParameters::GetDesiredRadius()
{
	return desiredRadius;
}

float SpecialGaugeParameters::GetInitialRadius()
{
	return initialRadius;
}

float SpecialGaugeParameters::GetPanSpeedX()
{
	return panSpeedX;
}

float SpecialGaugeParameters::GetPanSpeedY()
{
	return panSpeedY;
}

float SpecialGaugeParameters::GetTextureScale()
{
	return textureScale;
}

float SpecialGaugeParameters::GetTextureTimeScale()
{
	return textureTimeScale;
}

void SpecialGaugeParameters::SetPanSpeeds(float xSpeed, float ySpeed)
{
	this->panSpeedX = xSpeed;
	this->panSpeedY = ySpeed;
}
