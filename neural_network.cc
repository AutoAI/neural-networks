#include <string>
#include <iostream>

#include "neural_network.h"

NeuralNetwork::NeuralNetwork(int inputs, int layers, std::vector<double>* trainingInputs, std::vector<double>* trainingOutputs) {
	std::vector<Neuron*> neurons(inputs);
	for (int layer = 0; layer < layers; layer++) {
		for (int input = 0; input < inputs; input++) {
			if (layer == 0) {
				Neuron* n = new Neuron(inputs);
				neurons[input] = n;
			} else {
				Neuron* n = new Neuron(&(neural_network[layer-1]), 10);
				neurons[input] = n;
			}
		}
		neural_network.push_back(neurons);
	}
}

std::vector<double> compute(std::vector<double> inputs) {

}

void NeuralNetwork::printNetwork() {
	std::cout << "{";
	for (int layer = 0; layer < neural_network.size(); layer++) {
		std::cout << "\"" << layer << "\"" << ":{";
		for (int neuron = 0; neuron < neural_network[0].size(); neuron++) {
			std::cout << "\"" << neuron << "\"" << ":{";
			std::vector<Neuron*> neurons = neural_network[layer];
			for (int coefficients = 0; coefficients < neurons[neuron] -> coefficients.size(); coefficients++) {
				std::cout << "\"" << coefficients << "\"" << ":" << neurons[neuron] -> coefficients[coefficients];
				if (coefficients != neurons[neuron] -> coefficients.size() - 1) {
					std::cout << ",";
				}
			}
			std::cout << "}";
			if (neuron != neural_network[0].size() - 1) {
				std::cout << ",";
			}
		}
		std::cout << "}";
		if (layer != neural_network.size() - 1) {
			std::cout << ",";
		}
	}
	std::cout <<  "}";
}
