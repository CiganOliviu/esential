#include "../esential.hpp"

class oneDimensionalArrayTestingWorkflow {
private:
	oneDimensionalArraysWorkFlow ODAWorkFlow;
	sortAlgorithmsOneDimensionalArray SortWorkFlow;
	IOSystemOneDimensionalArray ioODA;
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

class matricesTestingWorkFlow {

private:
	matricesWorkFlow MWorkFlow;
	IOSystemMatrices ioM;
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

class searchEnginesWorkFlowTesting {
private:
	searchEnginesWorkFlow engine;
	IOSystemOneDimensionalArray ioODA;
	IOSystemMatrices ioM;
	sortAlgorithmsOneDimensionalArray SortWorkFlow;
	assertions __assert__;

public:
	searchEnginesWorkFlowTesting () {}

	template <class Type> void assertFindValueByBinarySearch ();
	template <class Type> void assertFindValueByLinearSearchOneDimensionalArray ();
	template <class Type> void assertFindValueByLinearSearchMatrix ();

	virtual ~searchEnginesWorkFlowTesting () {}
};

class fundamentalAlgorithmsTestingWorkflow {

private:
	fundamentalAlgorithmsWorkFlow fundamentalAlgosWorkFlow;
	assertions __assert__;
	portData port;

public:
	fundamentalAlgorithmsTestingWorkflow () {}

	void assertGaussSum ();
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

class numbersPropertiesTestingWorkFlow {
private:
	numbersPropertiesWorkFlow __numberProperties__;
	assertions __assert__;
	portData port;

public:
	numbersPropertiesTestingWorkFlow () {}

	void assertTheLargestCommonDivisor ();
	void assertTheLargestCommonDivisorRecursive ();
	void assertTheLargestCommonDivisorOfTwoNumbers ();
	void assertLeastCommonMultiple ();
	void assertLeastCommonMultipleOfTwoNumbers ();
	void assertReversedNumber ();
	void assertPalindromeNumber ();
	void assertMeansOfTwoNumbers ();

	virtual ~numbersPropertiesTestingWorkFlow () {}
};

class equationsWorkFlowTesting {
private:
	equationsWorkFlow equations;	
	assertions __assert__;
	portData port;

public:
	equationsWorkFlowTesting () {}

	void assertRootLinearEquation ();
	void assertValueLinearEquation ();
	void assertRootsQuadraticEquation ();
	void assertValueQuadraticEquation ();

	virtual ~equationsWorkFlowTesting () {}
};

class checkersWorkFlowTesting {
private:	
	checkersWorkFlow checks;
	assertions __assert__;
	portData port;

public:
	checkersWorkFlowTesting () {}

	void assertIfPrime ();
	void assertIfOdd ();
	void assertIfEven ();
	void assertConstantNumber ();
	void assertPerfectSquare ();
	void assertIsFibonacciNumber ();

	virtual ~checkersWorkFlowTesting () {}
};

class charArrayWorkFlowTesting {
private:
	charArrayWorkFlow CharArrayWF;
	assertions __assert__;

public:
	charArrayWorkFlowTesting () {}

	void assertGetCharArrayLength ();
	void assertConcatCharArrays ();
	void assertCopyCharArray ();
	void assertCompareCharArrays ();
	void assertSearchCharInCharArray ();
	void assertGetNumberOfConsonantsInCharArray ();
	void assertGetNumberOfVowelsInCharArray ();
	void assertDeleteCharFromCharArray ();
	void assertConvertToLowerCase ();
	void assertConvertToUpperCase ();

	virtual ~charArrayWorkFlowTesting () {}
};