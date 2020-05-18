#include "../../esential.hpp"

void convertToUpperSentence (char array[]) {

	charArrayWorkFlow chWF;

	for (int iterator = 0; iterator < chWF.getCharArrayLength(array); iterator++)
		chWF.convertToUpperCase (array[iterator]);
}

int main (int argc, char const * argv[]) {

	char array[100];

	IOSystemCharArray ioCH;

	ioCH.readCharArray (array, 100);

	convertToUpperSentence (array);

	ioCH.outputCharArray (array);
}