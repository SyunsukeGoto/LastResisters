#include "UIMath.h"

UIMath::~UIMath()
{
}

float UIMath::NormalizeValue(float in, float min, float max)
{
	return (in - min) / (max - min);
}

float UIMath::NormalizeValueCustomRange(float in, float minRange, float maxRange)
{
	return minRange + (maxRange - minRange) * in;
}

float UIMath::Deg2Rad()
{
	return (3.1415926535f * 2) / 360;
}
