#include "../../esential.hpp"

int minimumSequenceSum (oneDimensionalArrayType<int> ODA) {

	errorsHandler __handler__;
	int sum = 0;

	__handler__.standardHandlerOneDimensionalArray (ODA, __PRETTY_FUNCTION__);

	for (int iterator = ODA.startPoint; iterator < ODA.length + ODA.endPoint; iterator++) {
		
		sum += ODA.oneDimensionalArray[iterator];

		if (sum >= 0)
			sum = 0;	
	}

	return sum;
}

int main (int argc, char const * argv[]) {

	IOSystemOneDimensionalArray inputOutputSystem;
	oneDimensionalArrayType<int> Data;

	inputOutputSystem.readDynamicFileOneDimensionalArray ((char*)"ODA.data", Data);

	int result;

	result = minimumSequenceSum (Data);

	std::cout << result;

	return 0;
}