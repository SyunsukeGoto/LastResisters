#ifndef SPECIAL_GAUGE_PARAMETERS_H
#define SPECIAL_GAUGE_PARAMETERS_H

//Not the best way for now, I will put this into another file later.
class SpecialGaugeParameters
{
private:
	//The progress of the image in the range of 0 to 1.
	float percent;
	//The brightness of the image;
	float brightness;
	//How thick you want the circle to be
	float desiredRadius;
	//The distance offset from the center(0.5,0.5) to start drawing the circle
	float initialRadius;
	//The speed in terms of x coordinates to move the texture
	float panSpeedX;
	//The speed in terms of y coordinates to move the texture
	float panSpeedY;
	//How big the texture mapped on the circle.
	float textureScale;
	//This is the deltaTime of the entire texture moving.
	float textureTimeScale;

public:
	//I'm doing it here cause I;m not sure to create a new one for now.
	SpecialGaugeParameters();
	
	float testPublic;

	void SetPercent(float percent);
	void SetBrightness(float brightness);
	void SetDesiredRadius(float desiredRadius);
	void SetInitialRadius(float initialRadius);
	void SetPanSpeedX(float panSpeedX);
	void SetPanSpeedY(float panSpeedY);
	void SetTextureScale(float textureScale);
	void SetTextureTimeScale(float textureTimeScale);

	float GetPercent();
	float GetBrightness();
	float GetDesiredRadius();
	float GetInitialRadius();
	float GetPanSpeedX();
	float GetPanSpeedY();
	float GetTextureScale();
	float GetTextureTimeScale();

	//Make it easier if we want to set both
	void SetPanSpeeds(float xSpeed, float ySpeed);


};



#endif