#include "../esential.hpp"

namespace maxMinData {

  oneDimensionalArrayType<int> minMaxODATestCaseOne;
  oneDimensionalArrayType<int> minMaxODATestCaseTwo;
  oneDimensionalArrayType<int> minMaxODATestCaseThree;
  oneDimensionalArrayType<float> minMaxODATestCaseFour;
  oneDimensionalArrayType<float> minMaxODATestCaseFive;

  limits<int> minLimitsCaseOne;
  limits<int> minLimitsCaseTwo;
  limits<int> minLimitsCaseThree;
  limits<float> minLimitsCaseFour;
  limits<float> minLimitsCaseFive;

  limits<int> intervalAtDivideEtEmperaTestCaseOne;
  limits<int> intervalAtDivideEtEmperaTestCaseTwo;
  limits<int> intervalAtDivideEtEmperaTestCaseThree;
  limits<float> intervalAtDivideEtEmperaTestCaseFour;
  limits<float> intervalAtDivideEtEmperaTestCaseFive;

  limits<int> maxLimitsCaseOne;
  limits<int> maxLimitsCaseTwo;
  limits<int> maxLimitsCaseThree;
  limits<float> maxLimitsCaseFour;
  limits<float> maxLimitsCaseFive;
}

namespace sumProductDivisionDifference {

  oneDimensionalArrayType<int> sumProductDivisionDifferenceTestCaseOne;
  oneDimensionalArrayType<int> sumProductDivisionDifferenceTestCaseTwo;
  oneDimensionalArrayType<int> sumProductDivisionDifferenceTestCaseThree;
  oneDimensionalArrayType<float> sumProductDivisionDifferenceTestCaseFour;
  oneDimensionalArrayType<float> sumProductDivisionDifferenceTestCaseFive;

  oneDimensionalArrayType<int> ExpectedResultArraysSumProductDivisionDifferenceTestCaseOne;
  oneDimensionalArrayType<int> ExpectedResultArraysSumProductDivisionDifferenceTestCaseTwo;
  oneDimensionalArrayType<float> ExpectedResultArraysSumProductDivisionDifferenceTestCaseThree;
  oneDimensionalArrayType<float> ExpectedResultArraysSumProductDivisionDifferenceTestCaseFive;

  limits<int> elementsSumLimitsCaseOne;
  limits<int> elementsSumLimitsCaseTwo;
  limits<int> elementsSumLimitsCaseThree;
  limits<float> elementsSumLimitsCaseFour;
  limits<float> elementsSumLimitsCaseFive;

  limits<int> elementsProductLimitsCaseOne;
  limits<int> elementsProductLimitsCaseTwo;
  limits<int> elementsProductLimitsCaseThree;
  limits<float> elementsProductLimitsCaseFive;

  limits<int> elementsDifferenceLimitsCaseOne;
  limits<int> elementsDifferenceLimitsCaseTwo;
  limits<int> elementsDifferenceLimitsCaseThree;
  limits<float> elementsDifferenceLimitsCaseFive;

  limits<int> arraysSumLimitsCaseOne;
  limits<int> arraysSumLimitsCaseTwo;
  limits<int> arraysSumLimitsCaseThree;
  limits<float> arraysSumLimitsCaseFour;
  limits<float> arraysSumLimitsCaseFive;

  limits<int> arraysProductLimitsCaseOne;
  limits<int> arraysProductLimitsCaseTwo;
  limits<int> arraysProductLimitsCaseThree;
  limits<float> arraysProductLimitsCaseFive;

  limits<int> arraysDifferenceLimitsCaseOne;
  limits<int> arraysDifferenceLimitsCaseTwo;
  limits<int> arraysDifferenceLimitsCaseThree;
  limits<float> arraysDifferenceLimitsCaseFive;

  limits<bool> resultTestCaseOne;
  limits<bool> resultTestCaseTwo;
  limits<bool> resultTestCaseThree;
  limits<bool> resultTestCaseFour;
}

namespace initializationSymetricAddValueIsValue {

  oneDimensionalArrayType<int> initializationAddValueIsValueDataTestCaseOne;
  oneDimensionalArrayType<int> initializationAddValueIsValueDataTestCaseTwo;
  oneDimensionalArrayType<float> initializationAddValueIsValueDataTestCaseThree;
  oneDimensionalArrayType<float> initializationAddValueIsValueDataTestCaseFour;

  oneDimensionalArrayType<int> initializationAddValueIsValueTestCaseOne;
  oneDimensionalArrayType<int> initializationAddValueIsValueTestCaseTwo;
  oneDimensionalArrayType<float> initializationAddValueIsValueTestCaseThree;
  oneDimensionalArrayType<float> initializationAddValueIsValueTestCaseFour;

  limits<int> addValueTestCaseOne;
  limits<int> addValueTestCaseTwo;
  limits<float> addValueTestCaseThree;
  limits<float> addValueTestCaseFour;

  limits<bool> checkIfEqualODACaseOne;
  limits<bool> checkIfEqualODACaseTwo;
  limits<bool> checkIfEqualODACaseThree;
  limits<bool> checkIfEqualODACaseFour;
}

namespace symetricData {

  oneDimensionalArrayType<int> symetricDataTestCaseOne;
  oneDimensionalArrayType<int> symetricDataTestCaseTwo;
  oneDimensionalArrayType<float> symetricDataTestCaseThree;
  oneDimensionalArrayType<float> symetricDataTestCaseFour;

  limits<bool> symetricTestCaseOne;
  limits<bool> symetricTestCaseTwo;
  limits<bool> symetricTestCaseThree;
  limits<bool> symetricTestCaseFour;
}

using namespace maxMinData;
using namespace sumProductDivisionDifference;
using namespace initializationSymetricAddValueIsValue;
using namespace symetricData;

class setParameters {

private:
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  assertions assert;

public:
  setParameters () {}

  void _setParametersFor_getMinimumValueOneDimensionalArrayTestCases ();
  void _setParametersFor_getMaximumValueOneDimensionalArrayTestCases ();
  void _setParametersFor_getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  void _setParametersFor_getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  void _setParametersFor_getOneDimensionalArrayElementsSumTestCases ();
  void _setParametersFor_getOneDimensionalArrayElementsProductTestCases ();
  void _setParametersFor_getOneDimensionalArrayElementsDifferenceTestCases ();
  void _setParametersFor_oneDimensionalArrayInitializationTestCases ();
  void _setParametersFor_checkIfSymetricOneDimensionalArrayTestCases ();
  void _setParametersFor_addValueOneDimensionalArrayTestCases ();
  void _setParametersFor_isValueInOneDimensionalArrayTestCases ();

  virtual ~setParameters () {}
};

void setParameters::_setParametersFor_getMinimumValueOneDimensionalArrayTestCases () {

    ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/maxMinCases/ODATestCaseOne.data", minMaxODATestCaseOne);
    ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/maxMinCases/ODATestCaseTwo.data", minMaxODATestCaseTwo);
    ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/maxMinCases/ODATestCaseThree.data", minMaxODATestCaseThree);
    ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/maxMinCases/ODATestCaseFour.data", minMaxODATestCaseFour);
    ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/maxMinCases/ODATestCaseFive.data", minMaxODATestCaseFive);

    int minValueFromODACaseOne = ODAWorkFlow.getMinimumValueOneDimensionalArray<int> (minMaxODATestCaseOne);
    int minValueFromODACaseTwo = ODAWorkFlow.getMinimumValueOneDimensionalArray<int> (minMaxODATestCaseTwo);
    int minValueFromODACaseThree = ODAWorkFlow.getMinimumValueOneDimensionalArray<int> (minMaxODATestCaseThree);
    float minValueFromODACaseFour = ODAWorkFlow.getMinimumValueOneDimensionalArray<float> (minMaxODATestCaseFour);
    float minValueFromODACaseFive = ODAWorkFlow.getMinimumValueOneDimensionalArray<float> (minMaxODATestCaseFive);

    minLimitsCaseOne.minimLimit = 1;
    minLimitsCaseOne.maximLimit = minValueFromODACaseOne;

    minLimitsCaseTwo.minimLimit = -564387;
    minLimitsCaseTwo.maximLimit = minValueFromODACaseTwo;

    minLimitsCaseThree.minimLimit = -999999;
    minLimitsCaseThree.maximLimit = minValueFromODACaseThree;

    minLimitsCaseFour.minimLimit = 1.2;
    minLimitsCaseFour.maximLimit = minValueFromODACaseFour;

    minLimitsCaseFive.minimLimit = -999999.999999;
    minLimitsCaseFive.maximLimit = minValueFromODACaseFive;
}

void setParameters::_setParametersFor_getMaximumValueOneDimensionalArrayTestCases () {

    int maxValueFromODACaseOne = ODAWorkFlow.getMaximumValueOneDimensionalArray<int> (minMaxODATestCaseOne);
    int maxValueFromODACaseTwo = ODAWorkFlow.getMaximumValueOneDimensionalArray<int> (minMaxODATestCaseTwo);
    int maxValueFromODACaseThree = ODAWorkFlow.getMaximumValueOneDimensionalArray<int> (minMaxODATestCaseThree);
    float maxValueFromODACaseFour = ODAWorkFlow.getMaximumValueOneDimensionalArray<float> (minMaxODATestCaseFour);
    float maxValueFromODACaseFive = ODAWorkFlow.getMaximumValueOneDimensionalArray<float> (minMaxODATestCaseFive);

    maxLimitsCaseOne.minimLimit = 7;
    maxLimitsCaseOne.maximLimit = maxValueFromODACaseOne;

    maxLimitsCaseTwo.minimLimit = 975432;
    maxLimitsCaseTwo.maximLimit = maxValueFromODACaseTwo;

    maxLimitsCaseThree.minimLimit = 999999;
    maxLimitsCaseThree.maximLimit = maxValueFromODACaseThree;

    maxLimitsCaseFour.minimLimit = 9.9;
    maxLimitsCaseFour.maximLimit = maxValueFromODACaseFour;

    maxLimitsCaseFive.minimLimit = 999999.999999;
    maxLimitsCaseFive.maximLimit = maxValueFromODACaseFive;
}

void setParameters::_setParametersFor_getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases () {

  intervalAtDivideEtEmperaTestCaseOne.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseOne.maximLimit = minMaxODATestCaseOne.length - 1;

  intervalAtDivideEtEmperaTestCaseTwo.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseTwo.maximLimit = minMaxODATestCaseTwo.length - 1;

  intervalAtDivideEtEmperaTestCaseThree.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseThree.maximLimit = minMaxODATestCaseThree.length - 1;

  intervalAtDivideEtEmperaTestCaseFour.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseFour.maximLimit = minMaxODATestCaseFour.length - 1;

  intervalAtDivideEtEmperaTestCaseFive.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseFive.maximLimit = minMaxODATestCaseFive.length - 1;

  ODAWorkFlow.minimumValueSort (minMaxODATestCaseOne);
  ODAWorkFlow.minimumValueSort (minMaxODATestCaseTwo);
  ODAWorkFlow.minimumValueSort (minMaxODATestCaseThree);
  ODAWorkFlow.minimumValueSort (minMaxODATestCaseFour);
  ODAWorkFlow.minimumValueSort (minMaxODATestCaseFive);

  int minValueFromODACaseOne = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseOne, minMaxODATestCaseOne);
  int minValueFromODACaseTwo = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseTwo, minMaxODATestCaseTwo);
  int minValueFromODACaseThree = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseThree, minMaxODATestCaseThree);
  float minValueFromODACaseFour = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera<float> (intervalAtDivideEtEmperaTestCaseFour, minMaxODATestCaseFour);
  float minValueFromODACaseFive = ODAWorkFlow.getMinimumValueOneDimensionalArrayDivideEtEmpera<float> (intervalAtDivideEtEmperaTestCaseFive, minMaxODATestCaseFive);

  minLimitsCaseOne.minimLimit = 1;
  minLimitsCaseOne.maximLimit = minValueFromODACaseOne;

  minLimitsCaseTwo.minimLimit = -564387;
  minLimitsCaseTwo.maximLimit = minValueFromODACaseTwo;

  minLimitsCaseThree.minimLimit = -999999;
  minLimitsCaseThree.maximLimit = minValueFromODACaseThree;

  minLimitsCaseFour.minimLimit = 1.2;
  minLimitsCaseFour.maximLimit = minValueFromODACaseFour;

  minLimitsCaseFive.minimLimit = -999999.999999;
  minLimitsCaseFive.maximLimit = minValueFromODACaseFive;
}

void setParameters::_setParametersFor_getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases () {

  intervalAtDivideEtEmperaTestCaseOne.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseOne.maximLimit = minMaxODATestCaseOne.length - 1;

  intervalAtDivideEtEmperaTestCaseTwo.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseTwo.maximLimit = minMaxODATestCaseTwo.length - 1;

  intervalAtDivideEtEmperaTestCaseThree.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseThree.maximLimit = minMaxODATestCaseThree.length - 1;

  intervalAtDivideEtEmperaTestCaseFour.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseFour.maximLimit = minMaxODATestCaseFour.length - 1;

  intervalAtDivideEtEmperaTestCaseFive.minimLimit = 0;
  intervalAtDivideEtEmperaTestCaseFive.maximLimit = minMaxODATestCaseFive.length - 1;

  int maxValueFromODACaseOne = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseOne, minMaxODATestCaseOne);
  int maxValueFromODACaseTwo = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseTwo, minMaxODATestCaseTwo);
  int maxValueFromODACaseThree = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera<int> (intervalAtDivideEtEmperaTestCaseThree, minMaxODATestCaseThree);
  float maxValueFromODACaseFour = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera<float> (intervalAtDivideEtEmperaTestCaseFour, minMaxODATestCaseFour);
  float maxValueFromODACaseFive = ODAWorkFlow.getMaximumValueOneDimensionalArrayDivideEtEmpera<float> (intervalAtDivideEtEmperaTestCaseFive, minMaxODATestCaseFive);

  minLimitsCaseOne.minimLimit = 7;
  minLimitsCaseOne.maximLimit = maxValueFromODACaseOne;

  minLimitsCaseTwo.minimLimit = 975432;
  minLimitsCaseTwo.maximLimit = maxValueFromODACaseTwo;

  minLimitsCaseThree.minimLimit = 999999;
  minLimitsCaseThree.maximLimit = maxValueFromODACaseThree;

  minLimitsCaseFour.minimLimit = 9.9;
  minLimitsCaseFour.maximLimit = maxValueFromODACaseFour;

  minLimitsCaseFive.minimLimit = 999999.999999;
  minLimitsCaseFive.maximLimit = maxValueFromODACaseFive;
}

void setParameters::_setParametersFor_getOneDimensionalArrayElementsSumTestCases () {

  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/sumProductDivisionDifference/ODATestCaseOne.data", sumProductDivisionDifferenceTestCaseOne);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/sumProductDivisionDifference/ODATestCaseTwo.data", sumProductDivisionDifferenceTestCaseTwo);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/sumProductDivisionDifference/ODATestCaseThree.data", sumProductDivisionDifferenceTestCaseThree);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/sumProductDivisionDifference/ODATestCaseFour.data", sumProductDivisionDifferenceTestCaseFour);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/sumProductDivisionDifference/ODATestCaseFive.data", sumProductDivisionDifferenceTestCaseFive);

  int sumValueFromODACaseOne = ODAWorkFlow.getOneDimensionalArrayElementsSum <int> (sumProductDivisionDifferenceTestCaseOne);
  int sumValueFromODACaseTwo = ODAWorkFlow.getOneDimensionalArrayElementsSum <int> (sumProductDivisionDifferenceTestCaseTwo);
  int sumValueFromODACaseThree = ODAWorkFlow.getOneDimensionalArrayElementsSum <int> (sumProductDivisionDifferenceTestCaseThree);
  float sumValueFromODACaseFour = ODAWorkFlow.getOneDimensionalArrayElementsSum <float> (sumProductDivisionDifferenceTestCaseFour);
  float sumValueFromODACaseFive = ODAWorkFlow.getOneDimensionalArrayElementsSum <float> (sumProductDivisionDifferenceTestCaseFive);

  elementsSumLimitsCaseOne.minimLimit = 28;
  elementsSumLimitsCaseOne.maximLimit = sumValueFromODACaseOne;

  elementsSumLimitsCaseTwo.minimLimit = 496580;
  elementsSumLimitsCaseTwo.maximLimit = sumValueFromODACaseTwo;

  elementsSumLimitsCaseThree.minimLimit = 6019;
  elementsSumLimitsCaseThree.maximLimit = sumValueFromODACaseThree;

  elementsSumLimitsCaseFour.minimLimit = 1401110.9929900004;
  elementsSumLimitsCaseFour.maximLimit = sumValueFromODACaseFour;

  elementsSumLimitsCaseFive.minimLimit = 69.2;
  elementsSumLimitsCaseFive.maximLimit = sumValueFromODACaseFive;
}

void setParameters::_setParametersFor_getOneDimensionalArrayElementsProductTestCases () {

  int productValueFromODACaseOne = ODAWorkFlow.getOneDimensionalArrayElementsProduct <int> (sumProductDivisionDifferenceTestCaseOne);
  int productValueFromODACaseTwo = ODAWorkFlow.getOneDimensionalArrayElementsProduct <int> (sumProductDivisionDifferenceTestCaseTwo);
  int productValueFromODACaseThree = ODAWorkFlow.getOneDimensionalArrayElementsProduct <int> (sumProductDivisionDifferenceTestCaseThree);
  float productValueFromODACaseFive = ODAWorkFlow.getOneDimensionalArrayElementsProduct <float> (sumProductDivisionDifferenceTestCaseFive);

  elementsProductLimitsCaseOne.minimLimit = 5040;
  elementsProductLimitsCaseOne.maximLimit = productValueFromODACaseOne;

  elementsProductLimitsCaseTwo.minimLimit = 0;
  elementsProductLimitsCaseTwo.maximLimit = productValueFromODACaseTwo;

  elementsProductLimitsCaseThree.minimLimit = 0;
  elementsProductLimitsCaseThree.maximLimit = productValueFromODACaseThree;

  elementsProductLimitsCaseFive.minimLimit = 97107017.26053968;
  elementsProductLimitsCaseFive.maximLimit = productValueFromODACaseFive;
}

void setParameters::_setParametersFor_getOneDimensionalArrayElementsDifferenceTestCases () {

  int differenceValueFromODACaseOne = ODAWorkFlow.getOneDimensionalArrayElementsDifference <int> (sumProductDivisionDifferenceTestCaseOne);
  int differenceValueFromODACaseTwo = ODAWorkFlow.getOneDimensionalArrayElementsDifference <int> (sumProductDivisionDifferenceTestCaseTwo);
  int differenceValueFromODACaseThree = ODAWorkFlow.getOneDimensionalArrayElementsDifference <int> (sumProductDivisionDifferenceTestCaseThree);
  float differenceValueFromODACaseFive = ODAWorkFlow.getOneDimensionalArrayElementsDifference <float> (sumProductDivisionDifferenceTestCaseFive);

  elementsDifferenceLimitsCaseOne.minimLimit = -26;
  elementsDifferenceLimitsCaseOne.maximLimit = differenceValueFromODACaseOne;

  elementsDifferenceLimitsCaseTwo.minimLimit = -472154;
  elementsDifferenceLimitsCaseTwo.maximLimit = differenceValueFromODACaseTwo;

  elementsDifferenceLimitsCaseThree.minimLimit = -5995;
  elementsDifferenceLimitsCaseThree.maximLimit = differenceValueFromODACaseThree;
}

void setParameters::_setParametersFor_oneDimensionalArrayInitializationTestCases () {

  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/initializationAddValueIsValue/ODATestCaseOne.data", initializationAddValueIsValueDataTestCaseOne);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/initializationAddValueIsValue/ODATestCaseTwo.data", initializationAddValueIsValueDataTestCaseTwo);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/initializationAddValueIsValue/ODATestCaseThree.data", initializationAddValueIsValueDataTestCaseThree);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/initializationAddValueIsValue/ODATestCaseFour.data", initializationAddValueIsValueDataTestCaseFour);

  initializationAddValueIsValueTestCaseOne.length = initializationAddValueIsValueDataTestCaseOne.length;
  initializationAddValueIsValueTestCaseTwo.length = initializationAddValueIsValueDataTestCaseTwo.length;
  initializationAddValueIsValueTestCaseThree.length = initializationAddValueIsValueDataTestCaseThree.length;
  initializationAddValueIsValueTestCaseFour.length = initializationAddValueIsValueDataTestCaseFour.length;

  ODAWorkFlow.oneDimensionalArrayInitialization<int> (initializationAddValueIsValueTestCaseOne, 1);
  ODAWorkFlow.oneDimensionalArrayInitialization<int> (initializationAddValueIsValueTestCaseTwo, 99);
  ODAWorkFlow.oneDimensionalArrayInitialization<float> (initializationAddValueIsValueTestCaseThree, 3.3);
  ODAWorkFlow.oneDimensionalArrayInitialization<float> (initializationAddValueIsValueTestCaseFour, 16.6);

  checkIfEqualODACaseOne.minimLimit = assert.assertOneDimensionalArrays<int> (initializationAddValueIsValueTestCaseOne, initializationAddValueIsValueDataTestCaseOne);
  checkIfEqualODACaseOne.maximLimit = true;

  checkIfEqualODACaseTwo.minimLimit = assert.assertOneDimensionalArrays<int> (initializationAddValueIsValueTestCaseTwo, initializationAddValueIsValueDataTestCaseTwo);
  checkIfEqualODACaseTwo.maximLimit = false;

  checkIfEqualODACaseThree.minimLimit = assert.assertOneDimensionalArrays<float> (initializationAddValueIsValueTestCaseThree, initializationAddValueIsValueDataTestCaseThree);
  checkIfEqualODACaseThree.maximLimit = true;

  checkIfEqualODACaseFour.minimLimit = assert.assertOneDimensionalArrays<float> (initializationAddValueIsValueTestCaseFour, initializationAddValueIsValueDataTestCaseFour);
  checkIfEqualODACaseFour.maximLimit = false;

}

void setParameters::_setParametersFor_checkIfSymetricOneDimensionalArrayTestCases () {

  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/symetricCases/ODATestCaseOne.data", symetricDataTestCaseOne);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<int> ((char*)"data/symetricCases/ODATestCaseTwo.data", symetricDataTestCaseTwo);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/symetricCases/ODATestCaseThree.data", symetricDataTestCaseThree);
  ODAWorkFlow.readDynamicFileOneDimensionalArray<float> ((char*)"data/symetricCases/ODATestCaseFour.data", symetricDataTestCaseFour);

  symetricTestCaseOne.minimLimit = ODAWorkFlow.checkIfSymetricOneDimensionalArray<int> (symetricDataTestCaseOne);
  symetricTestCaseOne.maximLimit = true;

  symetricTestCaseTwo.minimLimit = ODAWorkFlow.checkIfSymetricOneDimensionalArray<int> (symetricDataTestCaseTwo);
  symetricTestCaseTwo.maximLimit = true;

  symetricTestCaseThree.minimLimit = ODAWorkFlow.checkIfSymetricOneDimensionalArray<float> (symetricDataTestCaseThree);
  symetricTestCaseThree.maximLimit = false;

  symetricTestCaseFour.minimLimit = ODAWorkFlow.checkIfSymetricOneDimensionalArray<float> (symetricDataTestCaseFour);
  symetricTestCaseFour.maximLimit = true;
}

void setParameters::_setParametersFor_addValueOneDimensionalArrayTestCases () {

  addValueTestCaseOne.minimLimit = 12;
  addValueTestCaseOne.maximLimit = 5;

  addValueTestCaseTwo.minimLimit = 7;
  addValueTestCaseTwo.maximLimit = 9;

  addValueTestCaseThree.minimLimit = 3.3;
  addValueTestCaseThree.maximLimit = 3;

  addValueTestCaseFour.minimLimit = 4.123;
  addValueTestCaseFour.maximLimit = 6;

  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueDataTestCaseOne, addValueTestCaseOne);
  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueTestCaseOne, addValueTestCaseOne);

  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueDataTestCaseTwo, addValueTestCaseTwo);

  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueDataTestCaseThree, addValueTestCaseThree);
  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueTestCaseThree, addValueTestCaseThree);

  ODAWorkFlow.addValueOneDimensionalArray (initializationAddValueIsValueDataTestCaseFour, addValueTestCaseFour);

  checkIfEqualODACaseOne.minimLimit = assert.assertOneDimensionalArrays<int> (initializationAddValueIsValueTestCaseOne, initializationAddValueIsValueDataTestCaseOne);
  checkIfEqualODACaseOne.maximLimit = true;

  checkIfEqualODACaseTwo.minimLimit = assert.assertOneDimensionalArrays<int> (initializationAddValueIsValueTestCaseTwo, initializationAddValueIsValueDataTestCaseTwo);
  checkIfEqualODACaseTwo.maximLimit = false;

  checkIfEqualODACaseThree.minimLimit = assert.assertOneDimensionalArrays<float> (initializationAddValueIsValueTestCaseThree, initializationAddValueIsValueDataTestCaseThree);
  checkIfEqualODACaseThree.maximLimit = true;

  checkIfEqualODACaseFour.minimLimit = assert.assertOneDimensionalArrays<float> (initializationAddValueIsValueTestCaseFour, initializationAddValueIsValueDataTestCaseFour);
  checkIfEqualODACaseFour.maximLimit = false;
}

void setParameters::_setParametersFor_isValueInOneDimensionalArrayTestCases () {

  checkIfEqualODACaseOne.minimLimit = ODAWorkFlow.isValueInOneDimensionalArray<int> (initializationAddValueIsValueTestCaseOne, 12);
  checkIfEqualODACaseOne.maximLimit = true;

  checkIfEqualODACaseTwo.minimLimit = ODAWorkFlow.isValueInOneDimensionalArray<int> (initializationAddValueIsValueTestCaseTwo, 37);
  checkIfEqualODACaseTwo.maximLimit = false;

  checkIfEqualODACaseThree.minimLimit = ODAWorkFlow.isValueInOneDimensionalArray<float> (initializationAddValueIsValueTestCaseThree, 3.3);
  checkIfEqualODACaseThree.maximLimit = true;

  checkIfEqualODACaseFour.minimLimit = ODAWorkFlow.isValueInOneDimensionalArray<float> (initializationAddValueIsValueTestCaseFour, 17.2);
  checkIfEqualODACaseFour.maximLimit = false;
}

class testCases : public setParameters {

private:
  assertions assert;

public:
  testCases () {}

  void getMinimumValueOneDimensionalArrayTestCases ();
  void getMaximumValueOneDimensionalArrayTestCases ();
  void getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  void getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  void getOneDimensionalArrayElementsSumTestCases ();
  void getOneDimensionalArrayElementsProductTestCases ();
  void getOneDimensionalArrayElementsDifferenceTestCases ();
  void oneDimensionalArrayInitializationTestCases ();
  void checkIfSymetricOneDimensionalArrayTestCases ();
  void addValueOneDimensionalArrayTestCases ();
  void isValueInOneDimensionalArrayTestCases ();

  virtual ~testCases () {}
};

void testCases::getMinimumValueOneDimensionalArrayTestCases () {

  _setParametersFor_getMinimumValueOneDimensionalArrayTestCases ();

  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayTestCaseOne", assert.assertPrimitiveDataTypes<int> (minLimitsCaseOne));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayTestCaseTwo", assert.assertPrimitiveDataTypes<int> (minLimitsCaseTwo));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayTestCaseThree", assert.assertPrimitiveDataTypes<int> (minLimitsCaseThree));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayTestCaseFour", assert.assertPrimitiveDataTypes<float> (minLimitsCaseFour));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayTestCaseFive", assert.assertPrimitiveDataTypes<float> (minLimitsCaseFive));
}

void testCases::getMaximumValueOneDimensionalArrayTestCases () {

  _setParametersFor_getMaximumValueOneDimensionalArrayTestCases ();

  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayTestCaseOne", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseOne));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayTestCaseTwo", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseTwo));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayTestCaseThree", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseThree));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayTestCaseFour", assert.assertPrimitiveDataTypes<float> (maxLimitsCaseFour));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayTestCaseFive", assert.assertPrimitiveDataTypes<float> (maxLimitsCaseFive));
}

void testCases::getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases () {

  _setParametersFor_getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases ();

  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmperaTestCaseOne", assert.assertPrimitiveDataTypes<int> (minLimitsCaseOne));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmperaTestCaseTwo", assert.assertPrimitiveDataTypes<int> (minLimitsCaseTwo));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmperaTestCaseThree", assert.assertPrimitiveDataTypes<int> (minLimitsCaseThree));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmperaTestCaseFour", assert.assertPrimitiveDataTypes<float> (minLimitsCaseFour));
  assert.countTest ((char*)"getMinimumValueOneDimensionalArrayDivideEtEmperaTestCaseFive", assert.assertPrimitiveDataTypes<float> (minLimitsCaseFive));
}

void testCases::getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases () {

  _setParametersFor_getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases ();

  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmperaTestCaseOne", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseOne));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmperaTestCaseTwo", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseTwo));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmperaTestCaseThree", assert.assertPrimitiveDataTypes<int> (maxLimitsCaseThree));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmperaTestCaseFour", assert.assertPrimitiveDataTypes<float> (maxLimitsCaseFour));
  assert.countTest ((char*)"getMaximumValueOneDimensionalArrayDivideEtEmperaTestCaseFive", assert.assertPrimitiveDataTypes<float> (maxLimitsCaseFive));
}

void testCases::getOneDimensionalArrayElementsSumTestCases () {

  _setParametersFor_getOneDimensionalArrayElementsSumTestCases ();

  assert.countTest ((char*)"getOneDimensionalArrayElementsSumTestCaseOne", assert.assertPrimitiveDataTypes<int> (elementsSumLimitsCaseOne));
  assert.countTest ((char*)"getOneDimensionalArrayElementsSumTestCaseTwo", assert.assertPrimitiveDataTypes<int> (elementsSumLimitsCaseTwo));
  assert.countTest ((char*)"getOneDimensionalArrayElementsSumTestCaseThree", assert.assertPrimitiveDataTypes<int> (elementsSumLimitsCaseThree));
  assert.countTest ((char*)"getOneDimensionalArrayElementsSumTestCaseFour", assert.assertPrimitiveDataTypes<float> (elementsSumLimitsCaseFour));
  assert.countTest ((char*)"getOneDimensionalArrayElementsSumTestCaseFive", assert.assertPrimitiveDataTypes<float> (elementsSumLimitsCaseFive));
}

void testCases::getOneDimensionalArrayElementsProductTestCases () {

  _setParametersFor_getOneDimensionalArrayElementsProductTestCases ();

  assert.countTest ((char*)"getOneDimensionalArrayElementsProductTestCaseOne", assert.assertPrimitiveDataTypes<int> (elementsProductLimitsCaseOne));
  assert.countTest ((char*)"getOneDimensionalArrayElementsProductTestCaseTwo", assert.assertPrimitiveDataTypes<int> (elementsProductLimitsCaseTwo));
  assert.countTest ((char*)"getOneDimensionalArrayElementsProductTestCaseThree", assert.assertPrimitiveDataTypes<int> (elementsProductLimitsCaseThree));
  assert.countTest ((char*)"getOneDimensionalArrayElementsProductTestCaseFive", assert.assertPrimitiveDataTypes<float> (elementsProductLimitsCaseFive));
}

void testCases::getOneDimensionalArrayElementsDifferenceTestCases () {

  _setParametersFor_getOneDimensionalArrayElementsDifferenceTestCases ();

  assert.countTest ((char*)"getOneDimensionalArrayElementsDifferenceTestCaseOne", assert.assertPrimitiveDataTypes<int> (elementsDifferenceLimitsCaseOne));
  assert.countTest ((char*)"getOneDimensionalArrayElementsDifferenceTestCaseTwo", assert.assertPrimitiveDataTypes<int> (elementsDifferenceLimitsCaseTwo));
  assert.countTest ((char*)"getOneDimensionalArrayElementsDifferenceTestCaseThree", assert.assertPrimitiveDataTypes<int> (elementsDifferenceLimitsCaseThree));
  assert.countTest ((char*)"getOneDimensionalArrayElementsDifferenceTestCaseFive", assert.assertPrimitiveDataTypes<float> (elementsDifferenceLimitsCaseFive));
}

void testCases::oneDimensionalArrayInitializationTestCases () {

  _setParametersFor_oneDimensionalArrayInitializationTestCases ();

  assert.countTest ((char*)"oneDimensionalArrayInitializationTestCaseOne", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseOne));
  assert.countTest ((char*)"oneDimensionalArrayInitializationTestCaseTwo", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseTwo));
  assert.countTest ((char*)"oneDimensionalArrayInitializationTestCaseThree", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseThree));
  assert.countTest ((char*)"oneDimensionalArrayInitializationTestCaseFour", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseFour));
}

void testCases::checkIfSymetricOneDimensionalArrayTestCases () {

  _setParametersFor_checkIfSymetricOneDimensionalArrayTestCases ();

  assert.countTest ((char*)"checkIfSymetricOneDimensionalArrayTestCaseOne", assert.assertPrimitiveDataTypes<bool> (symetricTestCaseOne));
  assert.countTest ((char*)"checkIfSymetricOneDimensionalArrayTestCaseTwo", assert.assertPrimitiveDataTypes<bool> (symetricTestCaseTwo));
  assert.countTest ((char*)"checkIfSymetricOneDimensionalArrayTestCaseThree", assert.assertPrimitiveDataTypes<bool> (symetricTestCaseThree));
  assert.countTest ((char*)"checkIfSymetricOneDimensionalArrayTestCaseFour", assert.assertPrimitiveDataTypes<bool> (symetricTestCaseFour));
}

void testCases::addValueOneDimensionalArrayTestCases () {

  _setParametersFor_addValueOneDimensionalArrayTestCases ();

  assert.countTest ((char*)"addValueOneDimensionalArrayTestCaseOne", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseOne));
  assert.countTest ((char*)"addValueOneDimensionalArrayTestCaseTwo", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseTwo));
  assert.countTest ((char*)"addValueOneDimensionalArrayTestCaseThree", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseThree));
  assert.countTest ((char*)"addValueOneDimensionalArrayTestCaseFour", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseFour));
}

void testCases::isValueInOneDimensionalArrayTestCases () {

  _setParametersFor_isValueInOneDimensionalArrayTestCases ();

  assert.countTest ((char*)"isValueInOneDimensionalArrayTestCaseOne", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseOne));
  assert.countTest ((char*)"isValueInOneDimensionalArrayTestCaseTwo", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseTwo));
  assert.countTest ((char*)"isValueInOneDimensionalArrayTestCaseThree", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseThree));
  assert.countTest ((char*)"isValueInOneDimensionalArrayTestCaseFour", assert.assertPrimitiveDataTypes<bool> (checkIfEqualODACaseFour));
}

int main(int argc, char const *argv[]) {
  testCases tests;
  assertions assert;

  tests.getMinimumValueOneDimensionalArrayTestCases ();
  tests.getMaximumValueOneDimensionalArrayTestCases ();
  tests.getMinimumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  tests.getMaximumValueOneDimensionalArrayDivideEtEmperaTestCases ();
  tests.getOneDimensionalArrayElementsSumTestCases ();
  tests.getOneDimensionalArrayElementsProductTestCases ();
  tests.getOneDimensionalArrayElementsDifferenceTestCases ();
  tests.oneDimensionalArrayInitializationTestCases ();
  tests.checkIfSymetricOneDimensionalArrayTestCases ();
  tests.addValueOneDimensionalArrayTestCases ();
  tests.isValueInOneDimensionalArrayTestCases ();

  assert.getConclusion ();

  return 0;
}
