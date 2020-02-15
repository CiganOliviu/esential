#include "../esential.hpp"

class oneDimensionalArrayTestingWorkflow {
private:
	oneDimensionalArraysWorkFlow ODAWorkFlow;
	assertions __assert__;

public:
	oneDimensionalArrayTestingWorkflow () {}

	template<class Type> void assertMinimumValueOneDimensionalArray ();
	template<class Type> void assertMaximumValueOneDimensionalArray ();

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

	__assert__.getConclusion();

	return 0;
}
