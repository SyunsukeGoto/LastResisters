#include "Brain.h"
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

//---------------------------------------------------------------------------
/*
Book:           AI for Game Developers
Authors:        David M. Bourg & Glenn Seemann
Example:        Neural Networks, Chapter 14
*/
//---------------------------------------------------------------------------

// BrainLayer Class
BrainLayer::BrainLayer()
{
	ParentLayer = NULL;
	ChildLayer = NULL;
	LinearOutput = false;
	UseMomentum = false;
	MomentumFactor = 0.9f;
}

void BrainLayer::Initialize(int NumNodes, BrainLayer* parent, BrainLayer* child)
{
	// Allocate memory
	NeuronValues = (float*)malloc(sizeof(float) * NumberOfNodes);
	DesiredValues = (float*)malloc(sizeof(float) * NumberOfNodes);
	Errors = (float*)malloc(sizeof(float) * NumberOfNodes);

	if (parent != NULL)
	{
		ParentLayer = parent;
	}

	if (child != NULL)
	{
		ChildLayer = child;

		Weights = (float**)malloc(sizeof(float*) * NumberOfNodes);
		WeightChanges = (float**)malloc(sizeof(float*) * NumberOfNodes);
		for (int i = 0; i < NumberOfNodes; i++)
		{
			Weights[i] = (float*)malloc(sizeof(float) * NumberOfChildNodes);
			WeightChanges[i] = (float*)malloc(sizeof(float) * NumberOfChildNodes);
		}

		BiasValues = (float*)malloc(sizeof(float) * NumberOfChildNodes);
		BiasWeights = (float*)malloc(sizeof(float) * NumberOfChildNodes);
	}
	else
	{
		Weights = NULL;
		BiasValues = NULL;
		BiasWeights = NULL;
	}

	// Make sure everything contains zeros
	for (int i = 0; i < NumberOfNodes; i++)
	{
		NeuronValues[i] = 0;
		DesiredValues[i] = 0;
		Errors[i] = 0;

		if (ChildLayer != NULL)
		{
			for (int j = 0; j < NumberOfChildNodes; j++)
			{
				Weights[i][j] = 0;
				WeightChanges[i][j] = 0;
			}
		}
	}

	if (ChildLayer != NULL)
	{
		for (int j = 0; j < NumberOfChildNodes; j++)
		{
			BiasValues[j] = -1;
			BiasWeights[j] = 0;
		}
	}
}

void BrainLayer::CleanUp(void)
{
	free(NeuronValues);
	free(DesiredValues);
	free(Errors);

	if (Weights != NULL)
	{
		for (int i = 0; i < NumberOfNodes; i++)
		{
			free(Weights[i]);
			free(WeightChanges[i]);
		}
		free(Weights);
		free(WeightChanges);
	}

	if (BiasValues != NULL)
		free(BiasValues);
	if (BiasWeights != NULL)
		free(BiasWeights);
}

void BrainLayer::RandomizeWeights(void)
{
	int	min = 0;
	int	max = 200;
	int	number;

	srand((unsigned)time(NULL));

	for (int i = 0; i < NumberOfNodes; i++)
	{
		for (int j = 0; j < NumberOfChildNodes; j++)
		{
			number = (((abs(rand()) % (max - min + 1)) + min));
			if (number > max)
				number = max;
			if (number < min)
				number = min;
			Weights[i][j] = number / 100.0f - 1.0f;
		}
	}

	for (int j = 0; j < NumberOfChildNodes; j++)
	{
		number = (((abs(rand()) % (max - min + 1)) + min));
		if (number > max)
			number = max;
		if (number < min)
			number = min;
		BiasWeights[j] = number / 100.0f - 1.0f;
	}
}

void BrainLayer::CalculateErrors(void)
{
	float	sum = 0.0;
	// Output layer
	if (ChildLayer == NULL)
	{
		for (int i = 0; i < NumberOfNodes; i++)
		{
			Errors[i] = (DesiredValues[i] - NeuronValues[i]) * NeuronValues[i] * (1.0f - NeuronValues[i]);
		}
	} // Input layer
	else if (ParentLayer == NULL)
	{
		for (int i = 0; i < NumberOfNodes; i++)
		{
			// There can't be errors in the input layer since input is the same
			Errors[i] = 0.0f;
		}
	} // Hidden layer
	else
	{
		for (int i = 0; i < NumberOfNodes; i++)
		{
			sum = 0;
			for (int j = 0; j < NumberOfChildNodes; j++)
			{
				sum += ChildLayer->Errors[j] * Weights[i][j];
			}
			Errors[i] = sum * NeuronValues[i] * (1.0f - NeuronValues[i]);
		}
	}
}

void BrainLayer::AdjustWeights(void)
{
	float	dw = 0.0;
	if (ChildLayer != NULL)
	{
		for (int i = 0; i < NumberOfNodes; i++)
		{
			for (int j = 0; j < NumberOfChildNodes; j++)
			{
				dw = LearningRate * ChildLayer->Errors[j] * NeuronValues[i];
				Weights[i][j] += dw + MomentumFactor * WeightChanges[i][j];
				WeightChanges[i][j] = dw;
			}
		}

		for (int j = 0; j < NumberOfChildNodes; j++)
		{
			BiasWeights[j] += LearningRate * ChildLayer->Errors[j] * BiasValues[j];
		}
	}
}

void BrainLayer::CalculateNeuronValues(void)
{
	float	sumationOfValues;
	if (ParentLayer != NULL)
	{
		for (int j = 0; j < NumberOfNodes; j++)
		{
			sumationOfValues = 0.0f;
			for (int i = 0; i < NumberOfParentNodes; i++)
			{
				sumationOfValues += ParentLayer->NeuronValues[i] * ParentLayer->Weights[i][j];

				if ((ChildLayer == NULL) && LinearOutput)
					NeuronValues[j] = sumationOfValues;
				else
					// 1 / (1 + e^-sumation)	
					// Ensures that the NeuronValue is within the range of 0 to 1
					NeuronValues[j] = 1.0f / (1.0f + expf(-sumationOfValues));
			}
		}
	}
}



// Brain Class
void Brain::Initialize(int nNodesInput, int nNodesHidden, int nNodesOutput)
{
	InputLayer.NumberOfNodes = nNodesInput;
	InputLayer.NumberOfChildNodes = nNodesHidden;
	InputLayer.NumberOfParentNodes = 0;
	InputLayer.Initialize(nNodesInput, NULL, &HiddenLayer);
	InputLayer.RandomizeWeights();

	HiddenLayer.NumberOfNodes = nNodesHidden;
	HiddenLayer.NumberOfChildNodes = nNodesOutput;
	HiddenLayer.NumberOfParentNodes = nNodesInput;
	HiddenLayer.Initialize(nNodesHidden, &InputLayer, &OutputLayer);
	HiddenLayer.RandomizeWeights();

	OutputLayer.NumberOfNodes = nNodesOutput;
	OutputLayer.NumberOfChildNodes = 0;
	OutputLayer.NumberOfParentNodes = nNodesHidden;
	OutputLayer.Initialize(nNodesOutput, &HiddenLayer, NULL);
}

void Brain::CleanUp()
{
	InputLayer.CleanUp();
	HiddenLayer.CleanUp();
	OutputLayer.CleanUp();
}

void Brain::SetInput(int i, float value)
{
	if ((i >= 0) && (i < InputLayer.NumberOfNodes))
	{
		InputLayer.NeuronValues[i] = value;
	}
}

void Brain::SetInputFromGame(float value0, float value1)
{
	InputLayer.NeuronValues[0] = value0;
	InputLayer.NeuronValues[1] = value1;
}

void Brain::SetInputForUE(float x, float y, float z)
{
	InputLayer.NeuronValues[0] = x;
	InputLayer.NeuronValues[1] = y;
	InputLayer.NeuronValues[2] = z;
}

float Brain::GetOutput(int i)
{
	if ((i >= 0) && (i < OutputLayer.NumberOfNodes))
	{
		return OutputLayer.NeuronValues[i];
	}
	return (float)INT_MAX; // to indicate an error
}

void Brain::SetDesiredOutput(int i, float value)
{
	if ((i >= 0) && (i < OutputLayer.NumberOfNodes))
	{
		OutputLayer.DesiredValues[i] = value;
	}
}

void Brain::FeedForward(void)
{
	InputLayer.CalculateNeuronValues();
	HiddenLayer.CalculateNeuronValues();
	OutputLayer.CalculateNeuronValues();
}

void Brain::BackPropagate(void)
{
	OutputLayer.CalculateErrors();
	HiddenLayer.CalculateErrors();

	HiddenLayer.AdjustWeights();
	InputLayer.AdjustWeights();
}

int	Brain::GetMaxOutputID(void)
{
	float maxval = OutputLayer.NeuronValues[0];
	int id = 0;

	for (int i = 1; i < OutputLayer.NumberOfNodes; i++)
	{
		if (OutputLayer.NeuronValues[i] > maxval)
		{
			maxval = OutputLayer.NeuronValues[i];
			id = i;
		}
	}
	return id;
}

float Brain::CalculateError(void)
{
	float error = 0.0f;
	for (int i = 0; i < OutputLayer.NumberOfNodes; i++)
	{
		// For all nodes in output layer, sum the error for each node
		// error += (The difference in output between the desired output and the neuron output)^2
		// ^2 is to make it positive
		error += powf(OutputLayer.NeuronValues[i] - OutputLayer.DesiredValues[i], 2);
	}

	// Divide by numNodes to get the percentage of error
	// If theres 3 nodes
	// node_0 has 0.5 error
	// node_1 has 0.4 error
	// node_2 has 0.1 error
	error = error / OutputLayer.NumberOfNodes;

	return error;
}

void Brain::SetLearningRate(float rate)
{
	InputLayer.LearningRate = rate;
	HiddenLayer.LearningRate = rate;
	OutputLayer.LearningRate = rate;
}

void Brain::SetLinearOutput(bool useLinear)
{
	InputLayer.LinearOutput = useLinear;
	HiddenLayer.LinearOutput = useLinear;
	OutputLayer.LinearOutput = useLinear;
}

void Brain::SetMomentum(bool useMomentum, float factor)
{
	InputLayer.UseMomentum = useMomentum;
	HiddenLayer.UseMomentum = useMomentum;
	OutputLayer.UseMomentum = useMomentum;

	InputLayer.MomentumFactor = factor;
	HiddenLayer.MomentumFactor = factor;
	OutputLayer.MomentumFactor = factor;
}

void Brain::DumpData(char* filename)
{}
