#include "NeuralNetwork.h"

float NeuralNetwork::SigmoidFunction(float _x)
{
	return 1 / (1 + exp(-_x));
}

int NeuralNetwork::CalculateOutput()
{
	// Find out values for hidden layer nodes
	for (int i = 0; i < NeuralNetworkValues::NUM_HIDDEN_LAYER_NODES; i++)
	{
		// Reset values just in case
		values.hiddenLayerValues[i] = 0;

		for (int j = 0; j < NeuralNetworkValues::NUM_INPUTS; j++)
		{
			// Add input value * respective weights
			values.hiddenLayerValues[i] += values.inputValues[j] * values.inputWeights[j][i];
		}

		// Account for biases
		values.hiddenLayerValues[i] *= values.hiddenLayerBiases[i];
	}

	// Find out values for output
	for (int i = 0; i < NeuralNetworkValues::NUM_OUTPUTS; i++)
	{
		// Reset values just in case
		values.outputValues[i] = 0;

		for (int j = 0; j < NeuralNetworkValues::NUM_HIDDEN_LAYER_NODES; j++)
		{
			// Add hidden layer value * respective weights
			values.outputValues[i] += values.hiddenLayerValues[j] * values.hiddenLayerWeights[j][i];
		}

		// Account for biases
		values.outputValues[i] *= values.outputBiases[i];
	}

	int highestOutputIndex = 0;

	// Compare outputs and return the highest
	for (int i = 0; i < values.NUM_OUTPUTS; i++)
	{
		if (values.outputValues[i] >= values.outputValues[highestOutputIndex])
		{
			highestOutputIndex = i;
		}
	}

	return highestOutputIndex;
}

bool NeuralNetwork::GenerateValuesRandomly()
{
	float randFloat;

	// Set values for input weights
	for (int i = 0; i < values.NUM_INPUTS; i++)
	{
		for (int j = 0; j < values.NUM_HIDDEN_LAYER_NODES; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 2;
			randFloat -= 1;
			values.inputWeights[i][j] = randFloat;
		}
	}

	// Set values for hidden layer biases
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 2;
		randFloat -= 1;
		values.hiddenLayerBiases[i] = randFloat;
	}

	// Set values for hidden layer weights
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		for (int j = 0; j < values.NUM_OUTPUTS; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 2;
			randFloat -= 1;
			values.hiddenLayerWeights[i][j] = randFloat;
		}
	}

	// Set values for output biases
	for (int i = 0; i < values.NUM_OUTPUTS; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 2;
		randFloat -= 1;
		values.outputBiases[i] = randFloat;
	}

	return true;
}

bool NeuralNetwork::GenerateValuesFromNeuralNetwork(NeuralNetwork _neuralNet)
{
	float randFloat;

	// Set values for input weights
	for (int i = 0; i < values.NUM_INPUTS; i++)
	{
		for (int j = 0; j < values.NUM_HIDDEN_LAYER_NODES; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 0.2;
			randFloat -= 1;
			values.inputWeights[i][j] = _neuralNet.values.inputWeights[i][j] + randFloat;

			if (values.inputWeights[i][j] > 1)
				values.inputWeights[i][j] = 1;
			else if (values.inputWeights[i][j] < -1)
				values.inputWeights[i][j] = -1;
		}
	}

	// Set values for hidden layer biases
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 0.2;
		randFloat -= 1;
		values.hiddenLayerBiases[i] = _neuralNet.values.hiddenLayerBiases[i] + randFloat;

		if (values.hiddenLayerBiases[i] > 1)
			values.hiddenLayerBiases[i] = 1;
		else if (values.hiddenLayerBiases[i] < -1)
			values.hiddenLayerBiases[i] = -1;
	}

	// Set values for hidden layer weights
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		for (int j = 0; j < values.NUM_OUTPUTS; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 0.2;
			randFloat -= 1;
			values.hiddenLayerWeights[i][j] = _neuralNet.values.hiddenLayerWeights[i][j] + randFloat;

			if (values.hiddenLayerWeights[i][j] > 1)
				values.hiddenLayerWeights[i][j] = 1;
			else if (values.hiddenLayerWeights[i][j] < -1)
				values.hiddenLayerWeights[i][j] = -1;
		}
	}

	// Set values for output biases
	for (int i = 0; i < values.NUM_OUTPUTS; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 0.2;
		randFloat -= 1;
		values.outputBiases[i] = _neuralNet.values.outputBiases[i] + randFloat;

		if (values.outputBiases[i] > 1)
			values.outputBiases[i] = 1;
		else if (values.outputBiases[i] < -1)
			values.outputBiases[i] = -1;
	}

	return true;
}

bool NeuralNetwork::GenerateValuesFromNeuralNetwork(NeuralNetwork _father, NeuralNetwork _mother)
{
	float randFloat;

	// Set values for input weights
	for (int i = 0; i < values.NUM_INPUTS; i++)
	{
		for (int j = 0; j < values.NUM_HIDDEN_LAYER_NODES; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 0.35;
			randFloat -= 1;
			values.inputWeights[i][j] = ((_father.values.inputWeights[i][j] + _mother.values.inputWeights[i][j]) * 0.5f) + randFloat;

			if (values.inputWeights[i][j] > 1)
				values.inputWeights[i][j] = 1;
			else if (values.inputWeights[i][j] < -1)
				values.inputWeights[i][j] = -1;
		}
	}

	// Set values for hidden layer biases
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 0.35;
		randFloat -= 1;
		values.hiddenLayerBiases[i] = ((_father.values.hiddenLayerBiases[i] + _mother.values.hiddenLayerBiases[i]) * 0.5f) + randFloat;

		if (values.hiddenLayerBiases[i] > 1)
			values.hiddenLayerBiases[i] = 1;
		else if (values.hiddenLayerBiases[i] < -1)
			values.hiddenLayerBiases[i] = -1;
	}

	// Set values for hidden layer weights
	for (int i = 0; i < values.NUM_HIDDEN_LAYER_NODES; i++)
	{
		for (int j = 0; j < values.NUM_OUTPUTS; j++)
		{
			randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			randFloat *= 0.35;
			randFloat -= 1;
			values.hiddenLayerWeights[i][j] = ((_father.values.hiddenLayerWeights[i][j] + _mother.values.hiddenLayerWeights[i][j]) * 0.5f) + randFloat;

			if (values.hiddenLayerWeights[i][j] > 1)
				values.hiddenLayerWeights[i][j] = 1;
			else if (values.hiddenLayerWeights[i][j] < -1)
				values.hiddenLayerWeights[i][j] = -1;
		}
	}

	// Set values for output biases
	for (int i = 0; i < values.NUM_OUTPUTS; i++)
	{
		randFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		randFloat *= 0.35;
		randFloat -= 1;
		values.outputBiases[i] = ((_father.values.outputBiases[i] + _mother.values.outputBiases[i]) * 0.5f) + randFloat;

		if (values.outputBiases[i] > 1)
			values.outputBiases[i] = 1;
		else if (values.outputBiases[i] < -1)
			values.outputBiases[i] = -1;
	}

	return true;
}