#include <vector>

class Neuron {
public:
	Neuron(std::vector<Neuron> inputs);
	void fire();

private:
	std::vector<Neuron> inputs;
};
