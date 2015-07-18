#pragma once

#include <string>
#include "neuron.h"

class NeuralNetwork {
public:
	NeuralNetwork(int inputs, int layers, std::vector<Neuron>* trainingInputs, std::vector<Neuron>* trainingOutputs);
	std::vector<double> compute(std::vector<double> inputs);
	void printNetwork();
private:
	std::vector<std::vector<Neuron*> > neural_network;
	void createNeuralNetwork(int inputs, int layers);
	void train(std::vector<double> inputs, std::vector<double> outputs);
};
