#include <vector>
#include <stdlib.h>
#include <iostream>

#include "neural_network.h"
#include "neuron.h"

int main(int argc, char** args) {
	std::vector<double> training;
	std::cout << "created training data" << std::endl;
	std::vector<double> answers;
	std::cout << "created answers" << std::endl;
	NeuralNetwork a(2, 4, &training, &answers);
	std::cout << "done" << std::endl;
	a.printNetwork();
}
