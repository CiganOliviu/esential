#include "functionalitiesTestsDef.hpp"

template<class Type> void oneDimensionalArrayTestingWorkflow::assertMinimumValueOneDimensionalArray () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMinimumValueOneDimensionalArray(ODAObject);
	results.maximLimit = -50000;

	__assert__.countTest ((char*)"getMinimumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertMaximumValueOneDimensionalArray () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMaximumValueOneDimensionalArray(ODAObject);
	results.maximLimit = 50000;

	__assert__.countTest ((char*)"getMaximumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsSum () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsSum(ODAObject);
	results.maximLimit = -2978380;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsSum", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsProduct () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsProduct(ODAObject);
	results.maximLimit = 0;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsProduct", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsDifference () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsDifference(ODAObject);
	results.maximLimit = 3061608;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsDifference", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayMean () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayMean(ODAObject);
	results.maximLimit = -297.838;

	__assert__.countTest ((char*)"getOneDimensionalArrayMean", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void oneDimensionalArrayTestingWorkflow::assertMinimumValueOneDimensionalArrayDivideEtEmpera () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
	SortWorkFlow.bubbleSort (ODAObject);

	limits<int> interval;

	interval.minimLimit = 0;
	interval.maximLimit = ODAObject.length;

	limits<Type> results;

	results.minimLimit = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera(interval, ODAObject);
	results.maximLimit = -50000;

	__assert__.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmpera", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void oneDimensionalArrayTestingWorkflow::assertMaximumValueOneDimensionalArrayDivideEtEmpera () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
	SortWorkFlow.minimumValueSort (ODAObject);

	limits<int> interval;

	interval.minimLimit = 0;
	interval.maximLimit = ODAObject.length;

	limits<Type> results;

	results.minimLimit = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera(interval, ODAObject);
	results.maximLimit = 50000;

	__assert__.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmpera", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMaximumValueFromMatrix () {

		matrixType<Type> matrixObject;

		ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMaximumValueFromMatrix(matrixObject);
		results.maximLimit = 54645;

		__assert__.countTest ((char*)"getMaximumValueFromMatrix", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMinimumValueFromMatrix () {

		matrixType<Type> matrixObject;

		ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMinimumValueFromMatrix(matrixObject);
		results.maximLimit = -342534;

		__assert__.countTest ((char*)"getMinimumValueFromMatrix", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsSum () {

		matrixType<Type> matrixObject;

		ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsSum(matrixObject);
		results.maximLimit = -250646;

	  __assert__.countTest ((char*)"getMatrixElementsSum", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsProduct () {

		matrixType<Type> matrixObject;

		ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsProduct(matrixObject);
		results.maximLimit = 0;

		__assert__.countTest ((char*)"getMatrixElementsProduct", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsDifference () {

		matrixType<Type> matrixObject;

		ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsDifference(matrixObject);
		results.maximLimit = 250902;

		__assert__.countTest ((char*)"getMatrixElementsDifference", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void searchEnginesWorkFlowTesting::assertFindValueByBinarySearch () {

	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray ((char*)"data/arrayDataSet.data", ODAObject);

	SortWorkFlow.bubbleSort (ODAObject);
	
	limits<bool> interval;

	interval.minimLimit = engine.findValueByBinarySearch<Type> (ODAObject, -3009);
	interval.maximLimit = true;

	__assert__.countTest ((char*)"binarySearch", __assert__.assertPrimitiveDataTypes<bool> (interval));
}

template <class Type> void searchEnginesWorkFlowTesting::assertFindValueByLinearSearchOneDimensionalArray () {
	
	oneDimensionalArrayType<Type> ODAObject;

	ioODA.readDynamicFileOneDimensionalArray ((char*)"data/arrayDataSet.data", ODAObject);

	SortWorkFlow.bubbleSort (ODAObject);
	
	limits<bool> interval;

	interval.minimLimit = engine.findValueByLinearSearchOneDimensionalArray<Type> (ODAObject, -3009);
	interval.maximLimit = true;

	__assert__.countTest ((char*)"linearSearchOneDimensionalArray", __assert__.assertPrimitiveDataTypes<bool> (interval));
}

template <class Type> void searchEnginesWorkFlowTesting::assertFindValueByLinearSearchMatrix () {

	matrixType<Type> MObject; 

	ioM.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", MObject);
	
	limits<bool> interval;

	interval.minimLimit = engine.findValueByLinearSearchMatrix<Type> (MObject, 32543);
	interval.maximLimit = true;

	__assert__.countTest ((char*)"linearSearchMatrix", __assert__.assertPrimitiveDataTypes<bool> (interval));
}

void fundamentalAlgorithmsTestingWorkflow::assertGaussSum () {

	limits<float> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getGaussSum (5);
	results.maximLimit = 15;

	__assert__.countTest ((char*)"getGaussSum", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertFactorialNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getThe_N_FactorialNumber(5);
	resultsSetOne.maximLimit = 120;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getThe_N_FactorialNumber(7);
	resultsSetTwo.maximLimit = 5040;

	__assert__.countTest ((char*)"getThe_N_FactorialNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"getThe_N_FactorialNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertFactorialNumberRecursive () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getThe_N_FactorialNumberRecursive(5);
	resultsSetOne.maximLimit = 120;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getThe_N_FactorialNumberRecursive(7);
	resultsSetTwo.maximLimit = 5040;

	__assert__.countTest ((char*)"getThe_N_FactorialNumberRecursive", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"getThe_N_FactorialNumberRecursive", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertAckermanNumber () {

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getThe_N_ackermanNumber(1, 2);
	results.maximLimit = 4;

	__assert__.countTest ((char*)"getThe_N_ackermanNumber", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertEulerianNumber () {

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getThe_N_eulerianNumber(3, 1);
	results.maximLimit = 4;

	__assert__.countTest ((char*)"getThe_N_eulerianNumber", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertCatalanNumber () {

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getThe_N_catalanNumber(3);
	results.maximLimit = 5;

	__assert__.countTest ((char*)"getThe_N_catalanNumber", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertFibonacciNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getThe_N_fibonacciNumber(5);
	resultsSetOne.maximLimit = 5;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getThe_N_fibonacciNumber(7);
	resultsSetTwo.maximLimit = 13;

	__assert__.countTest ((char*)"getThe_N_fibonacciNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"getThe_N_fibonacciNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertFibonacciNumberRecursive () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getThe_N_fibonacciNumberRecursive(5);
	resultsSetOne.maximLimit = 5;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getThe_N_fibonacciNumberRecursive(7);
	resultsSetTwo.maximLimit = 13;

	__assert__.countTest ((char*)"getThe_N_fibonacciNumberRecursive", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"getThe_N_fibonacciNumberRecursive", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertMannaPnueliNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getThe_N_mannaPnueliNumber(8);
	resultsSetOne.maximLimit = 11;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getThe_N_mannaPnueliNumber(15);
	resultsSetTwo.maximLimit = 14;

	__assert__.countTest ((char*)"getThe_N_mannaPnueliNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"getThe_N_mannaPnueliNumber", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void numbersPropertiesTestingWorkFlow::assertTheLargestCommonDivisor () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = __numberProperties__.getTheLargestCommonDivisor (interval);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisor", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void numbersPropertiesTestingWorkFlow::assertTheLargestCommonDivisorRecursive () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = __numberProperties__.getTheLargestCommonDivisorRecursive (interval);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisorRecursive", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void numbersPropertiesTestingWorkFlow::assertTheLargestCommonDivisorOfTwoNumbers () {

	limits<int> results;

	results.minimLimit = __numberProperties__.getTheLargestCommonDivisorOfTwoNumbers (12, 36);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisorOfTwoNumbers", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void numbersPropertiesTestingWorkFlow::assertLeastCommonMultiple () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = __numberProperties__.getLeastCommonMultiple (interval);
	results.maximLimit = 36;

	__assert__.countTest ((char*)"getLeastCommonMultiple", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void numbersPropertiesTestingWorkFlow::assertLeastCommonMultipleOfTwoNumbers () {

	limits<int> results;

	results.minimLimit = __numberProperties__.getLeastCommonMultipleOfTwoNumbers (12, 36);
	results.maximLimit = 36;

	__assert__.countTest ((char*)"getLeastCommonMultipleOfTwoNumbers", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void numbersPropertiesTestingWorkFlow::assertReversedNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = __numberProperties__.reverseNumber(12321);
	resultsSetOne.maximLimit = 12321;

	resultsSetTwo.minimLimit = __numberProperties__.reverseNumber(65);
	resultsSetTwo.maximLimit = 56;

	__assert__.countTest ((char*)"assertReversedNumberSetOne", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"assertReversedNumberSetTwo", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void numbersPropertiesTestingWorkFlow::assertPalindromeNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = __numberProperties__.getPalindromValue(123421);
	resultsSetOne.maximLimit = 0;

	resultsSetTwo.minimLimit = __numberProperties__.getPalindromValue(8);
	resultsSetTwo.maximLimit = 8;

	__assert__.countTest ((char*)"assertPalindromeNumberSetOne", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"assertPalindromeNumberSetTwo", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void numbersPropertiesTestingWorkFlow::assertMeansOfTwoNumbers () {

	limits<float> resultsSetOne;
	limits<float> resultsSetTwo;

	resultsSetOne.minimLimit = __numberProperties__.getMeanOfTwoNumbers(12, 24);
	resultsSetOne.maximLimit = 18;

	resultsSetTwo.minimLimit = __numberProperties__.getMeanOfTwoNumbers(13, 3);
	resultsSetTwo.maximLimit = 8;

	__assert__.countTest ((char*)"getMeanOfTwoNumbersSetOne", __assert__.assertPrimitiveDataTypes<float>(resultsSetOne) );
	__assert__.countTest ((char*)"getMeanOfTwoNumbersSetTwo", __assert__.assertPrimitiveDataTypes<float>(resultsSetTwo) );
}

void equationsWorkFlowTesting::assertRootLinearEquation () {

	linearEquation __LEquation__;

	__LEquation__.y_intercept = 4;
	__LEquation__.slope = 2;
	__LEquation__.root = -2;

	limits<float> results;

	results.minimLimit = equations.getRootLinearEquation(__LEquation__);
	results.maximLimit = -2;

	__assert__.countTest ((char*)"getRootLinearEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void equationsWorkFlowTesting::assertValueLinearEquation () {

	linearEquation __LEquation__;

	__LEquation__.y_intercept = 4;
	__LEquation__.slope = 2;
	__LEquation__.root = 2;

	limits<float> results;

	results.minimLimit = equations.getValueLinearEquation(__LEquation__);
	results.maximLimit = 8;

	__assert__.countTest ((char*)"getValueLinearEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void equationsWorkFlowTesting::assertRootsQuadraticEquation () {

	quadraticEquation __QEquation__;

	__QEquation__.coefficient_a = 1;
	__QEquation__.coefficient_b = 3;
	__QEquation__.coefficient_c = 2;

	limits<float> roots;
	port.portLimits (roots, equations.getRootsQuadraticEquation (__QEquation__));

	limits<float> results;

	results.minimLimit = -1;
	results.maximLimit = -2;

	__assert__.countTest ((char*)"getRootsQuadraticEquation", __assert__.assertLimits<float>(roots, results) );
}

void equationsWorkFlowTesting::assertValueQuadraticEquation () {

	quadraticEquation __QEquation__;

	__QEquation__.coefficient_a = 1;
	__QEquation__.coefficient_b = -3;
	__QEquation__.coefficient_c = 2;
	float roots = 5;

	limits<float> results;

	results.minimLimit = equations.getValueQuadraticEquation (__QEquation__, roots);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getValueQuadraticEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void checkersWorkFlowTesting::assertIfPrime () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isPrime(13);
	resultsSetOne.maximLimit = true;

	resultsSetTwo.minimLimit = checks.isPrime(14);
	resultsSetTwo.maximLimit = false;

	__assert__.countTest ((char*)"assertIfPrimeSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"assertIfPrimeSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}


void checkersWorkFlowTesting::assertIfOdd () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isOdd(12);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = checks.isOdd(13);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isOddSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isOddSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void checkersWorkFlowTesting::assertIfEven () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isEven(57);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = checks.isEven(12);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isEvenSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isEvenSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void checkersWorkFlowTesting::assertConstantNumber () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isConstantNumber(12345);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = checks.isConstantNumber(4444);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isConstantNumberSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isConstantNumberSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void checkersWorkFlowTesting::assertPerfectSquare () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isPerfectSquare(25);
	resultsSetOne.maximLimit = true;

	resultsSetTwo.minimLimit = checks.isPerfectSquare(34);
	resultsSetTwo.maximLimit = false;

	__assert__.countTest ((char*)"isPerfectSquareSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isPerfectSquareSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void checkersWorkFlowTesting::assertIsFibonacciNumber () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = checks.isFibonacci(13);
	resultsSetOne.maximLimit = true;

	resultsSetTwo.minimLimit = checks.isFibonacci(12);
	resultsSetTwo.maximLimit = false;

	__assert__.countTest ((char*)"isFibonacciNumberSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isFibonacciNumberSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void charArrayWorkFlowTesting::assertGetCharArrayLength () {

	char charArray[120] = "Just";

	limits<int> results;

	results.minimLimit = CharArrayWF.getCharArrayLength(charArray);
	results.maximLimit = 4;

	__assert__.countTest ((char*)"assertGetCharArrayLength", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertConcatCharArrays () {

	char charArrayOne[120] = "Just";
	char charArrayTwo[120] = " Do it";

	CharArrayWF.concatCharArrays(charArrayOne, charArrayTwo);

	limits<int> results;

	results.minimLimit = CharArrayWF.getCharArrayLength(charArrayOne);
	results.maximLimit = 10;

	__assert__.countTest ((char*)"assertConcatCharArrays", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertCopyCharArray () {

	char charArrayOne[120] = "Just";
	char charArrayTwo[120] = "Do it";

	CharArrayWF.copyCharArray(charArrayOne, charArrayTwo);

	limits<int> results;

	results.minimLimit = CharArrayWF.getCharArrayLength(charArrayOne);
	results.maximLimit = 5;

	__assert__.countTest ((char*)"assertCopyCharArray", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertCompareCharArrays () {

	char charArrayOne[120] = "Just";
	char charArrayTwo[120] = "Just";

	limits<int> results;

	results.minimLimit = CharArrayWF.compareCharArrays(charArrayOne, charArrayTwo);
	results.maximLimit = 0;

	__assert__.countTest ((char*)"assertCompareCharArrays", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertSearchCharInCharArray () {

	char charArrayOne[120] = "Just";
	char charToSearch = 's';

	limits<bool> results;

	results.minimLimit = CharArrayWF.searchCharInCharArray(charArrayOne, charToSearch);
	results.maximLimit = true;

	__assert__.countTest ((char*)"assertSearchCharInCharArray", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void charArrayWorkFlowTesting::assertGetNumberOfConsonantsInCharArray () {

	char charArrayOne[120] = "just";

	limits<int> results;

	results.minimLimit = CharArrayWF.getNumberOfConsonantsInCharArray(charArrayOne);
	results.maximLimit = 3;

	__assert__.countTest ((char*)"getNumberOfConsonantsInCharArray", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertGetNumberOfVowelsInCharArray () {

	char charArrayOne[120] = "just";

	limits<int> results;

	results.minimLimit = CharArrayWF.getNumberOfVowelsInCharArray(charArrayOne);
	results.maximLimit = 1;

	__assert__.countTest ((char*)"getNumberOfVowelsInCharArray", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertDeleteCharFromCharArray () {

	char charArrayOne[120] = "just";
 
	limits<int> results;

	CharArrayWF.deleteCharFromCharArray(charArrayOne, 2);

	results.minimLimit = CharArrayWF.getCharArrayLength (charArrayOne);
	results.maximLimit = 3;

	__assert__.countTest ((char*)"deleteCharFromCharArray", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void charArrayWorkFlowTesting::assertConvertToLowerCase () {

	char character = 'A';
	
	CharArrayWF.convertToLowerCase(character);

	limits<char> results;

	results.minimLimit = character;
	results.maximLimit = 'a';

	__assert__.countTest ((char*)"convertToLowerCase", __assert__.assertPrimitiveDataTypes<char>(results) );
}

void charArrayWorkFlowTesting::assertConvertToUpperCase () {

	char character = 'a';

	CharArrayWF.convertToUpperCase(character);

	limits<char> results;

	results.minimLimit = character;
	results.maximLimit = 'A';

	__assert__.countTest ((char*)"convertToUpperCase", __assert__.assertPrimitiveDataTypes<char>(results) );
}

class RunTests {
private:
		assertions __assert__;
		oneDimensionalArrayTestingWorkflow ODATWF;
		matricesTestingWorkFlow MTWF;
		searchEnginesWorkFlowTesting SWK;
		fundamentalAlgorithmsTestingWorkflow FAWF;
		numbersPropertiesTestingWorkFlow NUMWF;
		equationsWorkFlowTesting EWF;
		checkersWorkFlowTesting CWF;
		charArrayWorkFlowTesting CAWF;

public:
	RunTests () {}

	void run () {

		ODATWF.assertMinimumValueOneDimensionalArray<int> ();
		ODATWF.assertMaximumValueOneDimensionalArray<int> ();
		ODATWF.assertOneDimensionalArrayElementsSum<int> ();
		ODATWF.assertOneDimensionalArrayElementsProduct<int> ();
		ODATWF.assertOneDimensionalArrayElementsDifference<int> ();
		ODATWF.assertOneDimensionalArrayMean<int> ();
		ODATWF.assertMinimumValueOneDimensionalArrayDivideEtEmpera<int> ();
		ODATWF.assertMaximumValueOneDimensionalArrayDivideEtEmpera<int> ();

		MTWF.assertMaximumValueFromMatrix<int> ();
		MTWF.assertMinimumValueFromMatrix<int> ();
		MTWF.assertMatrixElementsSum<int> ();
		MTWF.assertMatrixElementsProduct<int> ();
		MTWF.assertMatrixElementsDifference<int> ();

		SWK.assertFindValueByBinarySearch<int> ();
		SWK.assertFindValueByLinearSearchOneDimensionalArray<int> ();
		SWK.assertFindValueByLinearSearchMatrix<int> ();
		
		FAWF.assertGaussSum ();
		FAWF.assertFactorialNumber ();
		FAWF.assertFactorialNumberRecursive ();
		FAWF.assertAckermanNumber ();
		FAWF.assertEulerianNumber ();
		FAWF.assertCatalanNumber ();
		FAWF.assertFibonacciNumber ();
		FAWF.assertFibonacciNumberRecursive ();
		FAWF.assertMannaPnueliNumber ();

		EWF.assertRootLinearEquation ();
		EWF.assertValueLinearEquation ();
		EWF.assertRootsQuadraticEquation ();
		EWF.assertValueQuadraticEquation ();
		
		
		NUMWF.assertTheLargestCommonDivisor ();
		NUMWF.assertTheLargestCommonDivisorRecursive ();
		NUMWF.assertTheLargestCommonDivisorOfTwoNumbers ();
		NUMWF.assertLeastCommonMultiple ();
		NUMWF.assertLeastCommonMultipleOfTwoNumbers ();
		NUMWF.assertReversedNumber ();
		NUMWF.assertPalindromeNumber ();
		NUMWF.assertMeansOfTwoNumbers ();
		
		CWF.assertIfPrime ();
		CWF.assertIfOdd ();
		CWF.assertIfEven ();
		CWF.assertConstantNumber ();
		CWF.assertPerfectSquare ();
		CWF.assertIsFibonacciNumber ();

		CAWF.assertGetCharArrayLength ();
		CAWF.assertConcatCharArrays ();
		CAWF.assertCopyCharArray ();
		CAWF.assertCompareCharArrays ();
		CAWF.assertSearchCharInCharArray ();
		CAWF.assertGetNumberOfConsonantsInCharArray ();
		CAWF.assertGetNumberOfVowelsInCharArray ();
		CAWF.assertDeleteCharFromCharArray ();
		CAWF.assertConvertToLowerCase ();
		CAWF.assertConvertToUpperCase ();

		__assert__.getConclusion();
	}

	virtual ~RunTests () {}
};
