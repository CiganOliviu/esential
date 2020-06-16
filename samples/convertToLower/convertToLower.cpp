#include "../../esential.hpp"

void convertToLowerSentence (char array[]) {

	charArrayWorkFlow chWF;

	for (int iterator = 0; iterator < chWF.getCharArrayLength(array); iterator++)
		chWF.convertToLowerCase (array[iterator]);
}

int main (int argc, char const * argv[]) {

	char array[100];

	IOSystemCharArray ioCH;

	ioCH.readCharArray (array, 100);

	convertToLowerSentence (array);

	ioCH.outputCharArray (array);
}
