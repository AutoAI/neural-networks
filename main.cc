#include <vector>
#include <stdlib.h>
#include <iostream>

#include "neural_network.h"
#include "neuron.h"

int main(int argc, char** args) {
	std::vector<double> training;
	std::vector<double> answers;
	NeuralNetwork a(2, 4, &training, &answers);
	a.printNetwork();
}
