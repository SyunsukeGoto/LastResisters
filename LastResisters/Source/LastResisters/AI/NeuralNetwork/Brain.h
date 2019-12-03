#ifndef Brain_HEADER
#define Brain_HEADER

class BrainLayer
{
public:
	int			NumberOfNodes;
	int			NumberOfChildNodes;
	int			NumberOfParentNodes;
	float** Weights;
	float** WeightChanges;
	float* NeuronValues;
	float* DesiredValues;
	float* Errors;
	float* BiasWeights;
	float* BiasValues;
	float		LearningRate;

	bool		LinearOutput;
	bool		UseMomentum;
	float		MomentumFactor;

	BrainLayer* ParentLayer;
	BrainLayer* ChildLayer;

	BrainLayer();

	void	Initialize(int NumNodes, BrainLayer* parent, BrainLayer* child);
	void	CleanUp(void);
	void	RandomizeWeights(void);
	void	CalculateErrors(void);
	void	AdjustWeights(void);
	void	CalculateNeuronValues(void);

};

// Implements a 3-Layer neural network with one input layer, one hidden layer, and one output layer
class Brain
{
public:
	BrainLayer	InputLayer;
	BrainLayer	HiddenLayer;
	BrainLayer	OutputLayer;

	void	Initialize(int nNodesInput, int nNodesHidden, int nNodesOutput);
	void	CleanUp();
	void	SetInput(int i, float value);
	void	SetInputFromGame(float value0, float value1);
	void	SetInputForUE(float x, float y, float z);
	float	GetOutput(int i);
	void	SetDesiredOutput(int i, float value);
	void	FeedForward(void);
	void	BackPropagate(void);
	int		GetMaxOutputID(void);
	float	CalculateError(void);
	void	SetLearningRate(float rate);
	void	SetLinearOutput(bool useLinear);
	void	SetMomentum(bool useMomentum, float factor);
	void	DumpData(char* filename);
};

#endif