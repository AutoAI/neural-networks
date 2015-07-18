all: main

main: main.o neural_network.o neuron.o
	g++ main.o neural_network.o neuron.o

main.o: main.cc
	g++ -c main.cc

neuron_network.o: neural_network.cc
	g++ -c neuron_network.cc

neuron.o: neuron.cc
	g++ -c neuron.cc

clean: 
	rm -rf *.o main
