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
//uses linear activator, fires out linear function
//will switch to if block and later tanh activators
void Neuron::fire(){
	int i = 0;
	activator = 0;
	while(i < &inputs.size())
	{
	
		activator += ((*((*inputs)[i])).val)*(coefficients[i]);
		i+=1;

	}
	
	val = activator;

}
