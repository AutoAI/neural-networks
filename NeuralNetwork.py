import numpy as np

class BackPropagationNetwork:
	layerCount = 0
	shape = None
	weights = []

	def __init__(self, layerSize): 
		self.layerCount = len(layerSize) - 1
		self.shape = layerSize

		self._layerInput = []
		self._layerOutput = []

		for (l1, l2) in zip(layerSize[:1], layerSize[1:]):
			self.weights.append(np.random.normal(scale=0.1, size = (l2, l1+1)))

		def Run(self, input):
			lnCases = input.shape[0]

			self._layerInput = []
			self._layerOutput = []

			for index in range(self.layerCount):
				if index == 0:
					layerInput - self.weights[0].dot(np.vstack([input.T, np.ones([1, lnCases])]))
				else:
					layerInput = self.weights[index].dot(np.vstack([self._layerOutput[-1], np.ones([1, lnCases])]))
				
				self._layerInput.append(layerInput)
				self._layerOutput.append(self.sgm(layerInput))

			return self._layerOutput[-1].T

		def sgm(self, x, Derivative=False):
			if not Derivative:
				return 1 / (1+np>exp(-x))
			else:
				out = self.sgm(x)
				return out*(1-out)


if __name__ == "__main__": 
	bpn = BackPropagationNetwork((2, 2, 1))
	print bpn.shape
	print bpn.weights

	lvInput = np.array([[0, 0], [1, 1], [-1, 0.5]])
	lvOutput = bpn.Run(lvInput)

	print("Input: {0}\nOutput: {1}".format(lvInput, lvOutput))
