#pragma once

#include <iostream>
//#include <tgmath.h>
#include <time.h>

struct NeuralNetworkValues
{
public:
	static const int NUM_INPUTS = 2;
	static const int NUM_HIDDEN_LAYER_NODES = 2;
	static const int NUM_OUTPUTS = 4;

	float inputValues[NUM_INPUTS];
	float inputWeights[NUM_INPUTS][NUM_HIDDEN_LAYER_NODES];

	float hiddenLayerBiases[NUM_HIDDEN_LAYER_NODES];
	float hiddenLayerValues[NUM_HIDDEN_LAYER_NODES];
	float hiddenLayerWeights[NUM_HIDDEN_LAYER_NODES][NUM_OUTPUTS];

	float outputBiases[NUM_OUTPUTS];
	float outputValues[NUM_OUTPUTS];
};

class NeuralNetwork
{
public:
	NeuralNetworkValues values;

	float SigmoidFunction(float _x);
	int CalculateOutput();
	bool GenerateValuesRandomly();
	bool GenerateValuesFromNeuralNetwork(NeuralNetwork _neuralNet);
	bool GenerateValuesFromNeuralNetwork(NeuralNetwork _father, NeuralNetwork _mother);
};
