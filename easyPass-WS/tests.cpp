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

class matricesTestingWorkFlow {

public:
	matricesTestingWorkFlow () {}

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

	ODATWF.assertMinimumValueOneDimensionalArray<int> ();
	ODATWF.assertMaximumValueOneDimensionalArray<int> ();
	ODATWF.assertOneDimensionalArrayElementsSum<int> ();
	ODATWF.assertOneDimensionalArrayElementsProduct<int> ();
	ODATWF.assertOneDimensionalArrayElementsDifference<int> ();
	ODATWF.assertOneDimensionalArrayMean<int> ();

	__assert__.getConclusion();

	return 0;
}
