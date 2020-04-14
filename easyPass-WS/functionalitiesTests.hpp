#include "../esential.hpp"

class oneDimensionalArrayTestingWorkflow {
private:
	oneDimensionalArraysWorkFlow ODAWorkFlow;
	IOSystem io;
	assertions __assert__;

public:
	oneDimensionalArrayTestingWorkflow () {}

	template<class Type> void assertMinimumValueOneDimensionalArray ();
	template<class Type> void assertMaximumValueOneDimensionalArray ();
	template<class Type> void assertOneDimensionalArrayElementsSum ();
	template<class Type> void assertOneDimensionalArrayElementsProduct ();
	template<class Type> void assertOneDimensionalArrayElementsDifference ();
	template<class Type> void assertOneDimensionalArrayMean ();

	template <class Type> void assertMinimumValueOneDimensionalArrayDivideEtEmpera ();
	template <class Type> void assertMaximumValueOneDimensionalArrayDivideEtEmpera ();

	template <class Type> void assertBinarySearch ();

	virtual ~oneDimensionalArrayTestingWorkflow () {}
};

template<class Type> void oneDimensionalArrayTestingWorkflow::assertMinimumValueOneDimensionalArray () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMinimumValueOneDimensionalArray(ODAObject);
	results.maximLimit = -50000;

	__assert__.countTest ((char*)"getMinimumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertMaximumValueOneDimensionalArray () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMaximumValueOneDimensionalArray(ODAObject);
	results.maximLimit = 50000;

	__assert__.countTest ((char*)"getMaximumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsSum () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsSum(ODAObject);
	results.maximLimit = -2978380;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsSum", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsProduct () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsProduct(ODAObject);
	results.maximLimit = 0;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsProduct", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsDifference () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsDifference(ODAObject);
	results.maximLimit = 3061608;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsDifference", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayMean () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayMean(ODAObject);
	results.maximLimit = -297.838;

	__assert__.countTest ((char*)"getOneDimensionalArrayMean", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void oneDimensionalArrayTestingWorkflow::assertMinimumValueOneDimensionalArrayDivideEtEmpera () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
	ODAWorkFlow.bubbleSort (ODAObject);

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

	io.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
	ODAWorkFlow.minimumValueSort (ODAObject);

	limits<int> interval;

	interval.minimLimit = 0;
	interval.maximLimit = ODAObject.length;

	limits<Type> results;

	results.minimLimit = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera(interval, ODAObject);
	results.maximLimit = 50000;

	__assert__.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmpera", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void oneDimensionalArrayTestingWorkflow::assertBinarySearch () {

	oneDimensionalArrayType<Type> ODAObject;

	io.readDynamicFileOneDimensionalArray ((char*)"data/arrayDataSet.data", ODAObject);

	ODAWorkFlow.bubbleSort (ODAObject);
	
	limits<bool> interval;

	interval.minimLimit = ODAWorkFlow.binarySearch<Type> (ODAObject, -3009);
	interval.maximLimit = true;

	__assert__.countTest ((char*)"binarySearch", __assert__.assertPrimitiveDataTypes<bool> (interval));
}

class matricesTestingWorkFlow {

private:
	matricesWorkFlow MWorkFlow;
	IOSystem io;
	assertions __assert__;

public:
	matricesTestingWorkFlow () {}

	template <class Type> void assertMaximumValueFromMatrix ();
	template <class Type> void assertMinimumValueFromMatrix ();
	template <class Type> void assertMatrixElementsSum ();
	template <class Type> void assertMatrixElementsProduct ();
	template <class Type> void assertMatrixElementsDifference ();

	virtual ~matricesTestingWorkFlow () {}
};

template <class Type> void matricesTestingWorkFlow::assertMaximumValueFromMatrix () {

		matrixType<Type> matrixObject;

		io.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMaximumValueFromMatrix(matrixObject);
		results.maximLimit = 54645;

		__assert__.countTest ((char*)"getMaximumValueFromMatrix", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMinimumValueFromMatrix () {

		matrixType<Type> matrixObject;

		io.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMinimumValueFromMatrix(matrixObject);
		results.maximLimit = -342534;

		__assert__.countTest ((char*)"getMinimumValueFromMatrix", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsSum () {

		matrixType<Type> matrixObject;

		io.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsSum(matrixObject);
		results.maximLimit = -250646;

	  __assert__.countTest ((char*)"getMatrixElementsSum", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsProduct () {

		matrixType<Type> matrixObject;

		io.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsProduct(matrixObject);
		results.maximLimit = 0;

		__assert__.countTest ((char*)"getMatrixElementsProduct", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void matricesTestingWorkFlow::assertMatrixElementsDifference () {

		matrixType<Type> matrixObject;

		io.readDynamicFileMatrix ((char*)"data/matrixDataSet.data", matrixObject);

		limits<Type> results;

		results.minimLimit = MWorkFlow.getMatrixElementsDifference(matrixObject);
		results.maximLimit = 250902;

		__assert__.countTest ((char*)"getMatrixElementsDifference", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

class fundamentalAlgorithmsTestingWorkflow {

private:
	fundamentalAlgorithmsWorkFlow fundamentalAlgosWorkFlow;
	assertions __assert__;
	portData port;

public:
	fundamentalAlgorithmsTestingWorkflow () {}

	void assertRootLinearEquation ();
	void assertValueLinearEquation ();
	void assertRootsQuadraticEquation ();
	void assertValueQuadraticEquation ();

	void assertGaussSum ();

	void assertTheLargestCommonDivisor ();
	void assertTheLargestCommonDivisorRecursive ();
	void assertTheLargestCommonDivisorOfTwoNumbers ();

	void assertLeastCommonMultiple ();
	void assertLeastCommonMultipleOfTwoNumbers ();

	void assertIfPrime ();
	void assertIfOdd ();
	void assertIfEven ();
	void assertConstantNumber ();
	void assertReversedNumber ();
	void assertPalindromeNumber ();
	void assertMeansOfTwoNumbers ();

	void assertFactorialNumber ();
	void assertFactorialNumberRecursive ();

	void assertAckermanNumber ();
	void assertEulerianNumber ();
	void assertCatalanNumber ();

	void assertFibonacciNumber ();
	void assertFibonacciNumberRecursive ();

	void assertMannaPnueliNumber ();

	virtual ~fundamentalAlgorithmsTestingWorkflow () {}
};

void fundamentalAlgorithmsTestingWorkflow::assertRootLinearEquation () {

	linearEquation __LEquation__;

	__LEquation__.y_intercept = 4;
	__LEquation__.slope = 2;
	__LEquation__.root = -2;

	limits<float> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getRootLinearEquation(__LEquation__);
	results.maximLimit = -2;

	__assert__.countTest ((char*)"getRootLinearEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertValueLinearEquation () {

	linearEquation __LEquation__;

	__LEquation__.y_intercept = 4;
	__LEquation__.slope = 2;
	__LEquation__.root = 2;

	limits<float> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getValueLinearEquation(__LEquation__);
	results.maximLimit = 8;

	__assert__.countTest ((char*)"getValueLinearEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertRootsQuadraticEquation () {

	quadraticEquation __QEquation__;

	__QEquation__.coefficient_a = 1;
	__QEquation__.coefficient_b = 3;
	__QEquation__.coefficient_c = 2;

	limits<float> roots;
	port.portLimits (roots, fundamentalAlgosWorkFlow.getRootsQuadraticEquation (__QEquation__));

	limits<float> results;

	results.minimLimit = -1;
	results.maximLimit = -2;

	__assert__.countTest ((char*)"getRootsQuadraticEquation", __assert__.assertLimits<float>(roots, results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertValueQuadraticEquation () {

	quadraticEquation __QEquation__;

	__QEquation__.coefficient_a = 1;
	__QEquation__.coefficient_b = -3;
	__QEquation__.coefficient_c = 2;
	float roots = 5;

	limits<float> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getValueQuadraticEquation (__QEquation__, roots);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getValueQuadraticEquation", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertGaussSum () {

	limits<float> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getGaussSum (5);
	results.maximLimit = 15;

	__assert__.countTest ((char*)"getGaussSum", __assert__.assertPrimitiveDataTypes<float>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertTheLargestCommonDivisor () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getTheLargestCommonDivisor (interval);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisor", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertTheLargestCommonDivisorRecursive () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getTheLargestCommonDivisorRecursive (interval);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisorRecursive", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertTheLargestCommonDivisorOfTwoNumbers () {

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getTheLargestCommonDivisorOfTwoNumbers (12, 36);
	results.maximLimit = 12;

	__assert__.countTest ((char*)"getTheLargestCommonDivisorOfTwoNumbers", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertLeastCommonMultiple () {

	limits<int> interval;

	interval.minimLimit = 12;
	interval.maximLimit = 36;

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getLeastCommonMultiple (interval);
	results.maximLimit = 36;

	__assert__.countTest ((char*)"getLeastCommonMultiple", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertLeastCommonMultipleOfTwoNumbers () {

	limits<int> results;

	results.minimLimit = fundamentalAlgosWorkFlow.getLeastCommonMultipleOfTwoNumbers (12, 36);
	results.maximLimit = 36;

	__assert__.countTest ((char*)"getLeastCommonMultipleOfTwoNumbers", __assert__.assertPrimitiveDataTypes<int>(results) );
}

void fundamentalAlgorithmsTestingWorkflow::assertIfPrime () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.isPrime(13);
	resultsSetOne.maximLimit = true;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.isPrime(14);
	resultsSetTwo.maximLimit = false;

	__assert__.countTest ((char*)"assertIfPrimeSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"assertIfPrimeSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}


void fundamentalAlgorithmsTestingWorkflow::assertIfOdd () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.isOdd(12);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.isOdd(13);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isOddSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isOddSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertIfEven () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.isEven(57);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.isEven(12);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isEvenSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isEvenSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertConstantNumber () {

	limits<bool> resultsSetOne;
	limits<bool> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.isConstantNumber(12345);
	resultsSetOne.maximLimit = false;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.isConstantNumber(4444);
	resultsSetTwo.maximLimit = true;

	__assert__.countTest ((char*)"isConstantNumberSetOne", __assert__.assertPrimitiveDataTypes<bool>(resultsSetOne) );
	__assert__.countTest ((char*)"isConstantNumberSetTwo", __assert__.assertPrimitiveDataTypes<bool>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertReversedNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.reverseNumber(12321);
	resultsSetOne.maximLimit = 12321;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.reverseNumber(65);
	resultsSetTwo.maximLimit = 56;

	__assert__.countTest ((char*)"assertReversedNumberSetOne", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"assertReversedNumberSetTwo", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertPalindromeNumber () {

	limits<int> resultsSetOne;
	limits<int> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getPalindromValue(123421);
	resultsSetOne.maximLimit = 0;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getPalindromValue(8);
	resultsSetTwo.maximLimit = 8;

	__assert__.countTest ((char*)"assertPalindromeNumberSetOne", __assert__.assertPrimitiveDataTypes<int>(resultsSetOne) );
	__assert__.countTest ((char*)"assertPalindromeNumberSetTwo", __assert__.assertPrimitiveDataTypes<int>(resultsSetTwo) );
}

void fundamentalAlgorithmsTestingWorkflow::assertMeansOfTwoNumbers () {

	limits<float> resultsSetOne;
	limits<float> resultsSetTwo;

	resultsSetOne.minimLimit = fundamentalAlgosWorkFlow.getMeanOfTwoNumbers(12, 24);
	resultsSetOne.maximLimit = 18;

	resultsSetTwo.minimLimit = fundamentalAlgosWorkFlow.getMeanOfTwoNumbers(13, 3);
	resultsSetTwo.maximLimit = 8;

	__assert__.countTest ((char*)"getMeanOfTwoNumbersSetOne", __assert__.assertPrimitiveDataTypes<float>(resultsSetOne) );
	__assert__.countTest ((char*)"getMeanOfTwoNumbersSetTwo", __assert__.assertPrimitiveDataTypes<float>(resultsSetTwo) );
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

class RunTests {
private:
		assertions __assert__;
		oneDimensionalArrayTestingWorkflow ODATWF;
		matricesTestingWorkFlow MTWF;
		fundamentalAlgorithmsTestingWorkflow FAWF;

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
		ODATWF.assertBinarySearch<int> ();

		MTWF.assertMaximumValueFromMatrix<int> ();
		MTWF.assertMinimumValueFromMatrix<int> ();
		MTWF.assertMatrixElementsSum<int> ();
		MTWF.assertMatrixElementsProduct<int> ();
		MTWF.assertMatrixElementsDifference<int> ();

		FAWF.assertRootLinearEquation ();
		FAWF.assertValueLinearEquation ();
		FAWF.assertRootsQuadraticEquation ();
		FAWF.assertValueQuadraticEquation ();
		FAWF.assertGaussSum ();
		FAWF.assertTheLargestCommonDivisor ();
		FAWF.assertTheLargestCommonDivisorRecursive ();
		FAWF.assertLeastCommonMultipleOfTwoNumbers ();
		FAWF.assertLeastCommonMultiple ();
		FAWF.assertIfPrime ();
		FAWF.assertIfOdd ();
		FAWF.assertIfEven ();
		FAWF.assertConstantNumber ();
		FAWF.assertReversedNumber ();
		FAWF.assertPalindromeNumber ();
		FAWF.assertMeansOfTwoNumbers ();
		FAWF.assertFactorialNumber ();
		FAWF.assertFactorialNumberRecursive ();
		FAWF.assertAckermanNumber ();
		FAWF.assertEulerianNumber ();
		FAWF.assertCatalanNumber ();
		FAWF.assertFibonacciNumber ();
		FAWF.assertFibonacciNumberRecursive ();
		FAWF.assertMannaPnueliNumber ();

		__assert__.getConclusion();
	}

	virtual ~RunTests () {}
};
