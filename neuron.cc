#include <stdlib.h>

#include "neuron.h"

Neuron::Neuron(int inputs) {
	for (int i = 0; i < inputs; i++) {
		coefficients.push_back(2);
	}
}

Neuron::Neuron(std::vector<Neuron*>* inputs, int i) {
	this -> inputs = inputs;
	for (int i = 0; i < inputs -> size(); i++) {
		coefficients.push_back(2);
	}
}

void Neuron::fire() {

}
