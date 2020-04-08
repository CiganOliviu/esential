#include "../esential.hpp"

class oneDimensionalArrayTestingWorkflow {
private:
	oneDimensionalArraysWorkFlow ODAWorkFlow;
	IOSysten io;
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

class matricesTestingWorkFlow {

private:
	matricesWorkFlow MWorkFlow;
	IOSysten io;
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

	void assertIfPrime ();
	void assertIfOdd ();
	void assertOfEven ();
	void assertConstantNumber ();
	void assertReversedNumber ();
	void assertPalindromeNumber ();
	void assertMeansOfTwoNumbers ();

	void assertFactorialNumber ();
	void assertFactorialNumberRecursive ();
	void assertMannaPnueliNumber ();
	void assertAckermanNumber ();
	void assertStirlingNumber ();
	void assertEulerianNumber ();
	void assertCatalanNumber ();
	void assertFibonacciNumber ();
	void assertFibonacciNumberRecursive ();
	void assertMasterTheoremNumber ();

	void assertComplexNumbersProduct ();
	void assertComplexNumbersSum ();
	void assertComplexNumbersDifference ();

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

int main(int argc, char const *argv[]) {

	assertions __assert__;
	oneDimensionalArrayTestingWorkflow ODATWF;
	matricesTestingWorkFlow MTWF;
	fundamentalAlgorithmsTestingWorkflow FAWF;

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

	FAWF.assertRootLinearEquation ();
	FAWF.assertValueLinearEquation ();
	FAWF.assertRootsQuadraticEquation ();

 	__assert__.getConclusion();

	return 0;
}
