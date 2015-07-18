#pragma once

#include <vector>

class Neuron {
public:
	Neuron(int inputs);
	Neuron(std::vector<Neuron*>* inputs, int i);
	void fire();
	std::vector<double> coefficients;

private:
	std::vector<Neuron*>* inputs;
	double val;

};
