#include "../esential.hpp"

class oneDimensionalArrayTestingWorkflow {
private:
	oneDimensionalArraysWorkFlow ODAWorkFlow;
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

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMinimumValueOneDimensionalArray(ODAObject);
	results.maximLimit = -50000;

	__assert__.countTest ((char*)"getMinimumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertMaximumValueOneDimensionalArray () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getMaximumValueOneDimensionalArray(ODAObject);
	results.maximLimit = 50000;

	__assert__.countTest ((char*)"getMaximumValueOneDimensionalArray", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsSum () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsSum(ODAObject);
	results.maximLimit = -2978380;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsSum", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsProduct () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsProduct(ODAObject);
	results.maximLimit = 0;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsProduct", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayElementsDifference () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayElementsDifference(ODAObject);
	results.maximLimit = 3061608;

	__assert__.countTest ((char*)"getOneDimensionalArrayElementsDifference", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template<class Type> void oneDimensionalArrayTestingWorkflow::assertOneDimensionalArrayMean () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);

	limits<Type> results;

	results.minimLimit =  ODAWorkFlow.getOneDimensionalArrayMean(ODAObject);
	results.maximLimit = -297.838;

	__assert__.countTest ((char*)"getOneDimensionalArrayMean", __assert__.assertPrimitiveDataTypes<Type>(results) );
}

template <class Type> void oneDimensionalArrayTestingWorkflow::assertMinimumValueOneDimensionalArrayDivideEtEmpera () {

	oneDimensionalArrayType<Type> ODAObject;

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
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

	ODAWorkFlow.readDynamicFileOneDimensionalArray((char*)"data/arrayDataSet.data", ODAObject);
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

public:
	matricesTestingWorkFlow () {}

	template <class Type> void assertMaximumValueFromMatrix ();
	template <class Type> void assertMinimumValueFromMatrix ();
	template <class Type> void assertMatrixElementsSum ();
	template <class Type> void assertMatrixElementsProduct ();
	template <class Type> void assertMatrixElementsDifference ();

	virtual ~matricesTestingWorkFlow () {}
};

class fundamentalAlgorithmsTestingWorkflow {

public:
	fundamentalAlgorithmsTestingWorkflow () {}

	virtual ~fundamentalAlgorithmsTestingWorkflow () {}
};

int main(int argc, char const *argv[]) {

	assertions __assert__;
	oneDimensionalArrayTestingWorkflow ODATWF;
	matricesTestingWorkFlow MTWF;

	ODATWF.assertMinimumValueOneDimensionalArray<int> ();
	ODATWF.assertMaximumValueOneDimensionalArray<int> ();
	ODATWF.assertOneDimensionalArrayElementsSum<int> ();
	ODATWF.assertOneDimensionalArrayElementsProduct<int> ();
	ODATWF.assertOneDimensionalArrayElementsDifference<int> ();
	ODATWF.assertOneDimensionalArrayMean<int> ();
	ODATWF.assertMinimumValueOneDimensionalArrayDivideEtEmpera<int> ();
	ODATWF.assertMaximumValueOneDimensionalArrayDivideEtEmpera<int> ();

	__assert__.getConclusion();

	return 0;
}
