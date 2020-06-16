#include "esential.hpp"

class systemTestingWorkflow {
private:
  assertions __assert__;

  IOSystemOneDimensionalArray inputOutputSystemODA;
  IOSystemMatrices inputOutputSystemMatrices;
  IOSystemTrees inputOutputSystemTrees;
  IOSystemGraphs inputOutputSystemGraphs;
  IOSystemComplexNumbers inputOutputSystemComplexNumbers;
  IOSystemCharArray inputOutputSystemCharArray;
  IOSystemDirectFlow inputOutputSystemDirectFlow;

  oneDimensionalArraysWorkFlow ODAWorkFlow;

  sortAlgorithmsOneDimensionalArray SortWorkFlow;

  matricesWorkFlow MatricesWorkFlow;

  searchEnginesWorkFlow SearchWorkFlow;

  fundamentalAlgorithmsWorkFlow fundamentalAlgosWorkFlow;

  complexNumbersWorkFlow ComplexNumbers;

  numbersPropertiesWorkFlow NumberProperties;

  equationsWorkFlow Equations;

  checkersWorkFlow Checkers;

  treesWorkFlow TWorkFlow;

  graphsWorkFlow GWorkFlow;

  charArrayWorkFlow CAWorkFlow;

public:
  systemTestingWorkflow () {}

  void assertIOSystemOneDimensionaArray ();
  void assertIOSystemMatrices ();
  void assertIOSystemTrees ();
  void assertIOSystemGraphs ();
  void assertIOSystemComplexNumbers ();
  void assertIOSystemCharArray ();
  void assertIOSystemDirectFlow ();

  void assertOneDimensionalArraysWorkFlow ();
  void assertsortAlgorithmsOneDimensionalArray ();
  void assertMatricesWorkFlow ();
  void assertSearchEnginesWorkFlow ();
  void assertFundamentalAlgorithmsWorkFlow ();
  void assertComplexNumbersWorkFlow ();
  void assertNumbersPropertiesWorkFlow ();
  void assertEquationsWorkFlow ();
  void assertCheckersWorkFlow ();
  void assertTreesWorkFlow ();
  void assertGraphsWorkFlow ();
  void assertCharArrayWorkFlow ();

  virtual ~systemTestingWorkflow () {}
};

void systemTestingWorkflow::assertIOSystemOneDimensionaArray () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemODA.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemOneDimensionaArray", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemMatrices () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemMatrices.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemMatrices", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemTrees () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemTrees.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemTrees", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemGraphs () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemGraphs.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemGraphs", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemComplexNumbers () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemComplexNumbers.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemComplexNumbers", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemCharArray () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemCharArray.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemCharArray", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertIOSystemDirectFlow () {

  limits<bool> results;

  results.minimLimit = inputOutputSystemDirectFlow.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystemDirectFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertOneDimensionalArraysWorkFlow () {

    limits<bool> results;

    results.minimLimit = ODAWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertOneDimensionalArraysWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertsortAlgorithmsOneDimensionalArray () {

    limits<bool> results;

    results.minimLimit = SortWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertsortAlgorithmsOneDimensionalArray", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertMatricesWorkFlow () {

    limits<bool> results;

    results.minimLimit = MatricesWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertMatricesWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertFundamentalAlgorithmsWorkFlow () {

    limits<bool> results;

    results.minimLimit = fundamentalAlgosWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertFundamentalAlgorithmsWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertComplexNumbersWorkFlow () {

    limits<bool> results;

    results.minimLimit = ComplexNumbers.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertComplexNumbersWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertNumbersPropertiesWorkFlow () {

    limits<bool> results;

    results.minimLimit = NumberProperties.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertNumbersPropertiesWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertEquationsWorkFlow () {

    limits<bool> results;

    results.minimLimit = Equations.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertEquationsWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertCheckersWorkFlow () {

    limits<bool> results;

    results.minimLimit = Checkers.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertCheckersWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}


void systemTestingWorkflow::assertTreesWorkFlow () {

    limits<bool> results;

    results.minimLimit = TWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertTreesWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertGraphsWorkFlow () {

  limits<bool> results;

  results.minimLimit = GWorkFlow.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertGraphsWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertCharArrayWorkFlow () {

  limits<bool> results;

  results.minimLimit = CAWorkFlow.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertCharArrayWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertSearchEnginesWorkFlow () {

  limits<bool> results;

  results.minimLimit = SearchWorkFlow.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertSearchEnginesWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

class RunSystemTests {
private:
  systemTestingWorkflow testingObject;

public:
  RunSystemTests () {}

  void run ();

  virtual ~RunSystemTests () {}
};

void RunSystemTests::run () {

  testingObject.assertIOSystemOneDimensionaArray ();
  testingObject.assertIOSystemMatrices ();
  testingObject.assertIOSystemTrees ();
  testingObject.assertIOSystemGraphs ();
  testingObject.assertIOSystemCharArray ();
  testingObject.assertIOSystemDirectFlow ();

  testingObject.assertOneDimensionalArraysWorkFlow ();

  testingObject.assertMatricesWorkFlow ();

  testingObject.assertSearchEnginesWorkFlow ();

  testingObject.assertFundamentalAlgorithmsWorkFlow ();

  testingObject.assertComplexNumbersWorkFlow ();

  testingObject.assertNumbersPropertiesWorkFlow ();

  testingObject.assertEquationsWorkFlow ();

  testingObject.assertCheckersWorkFlow ();

  testingObject.assertTreesWorkFlow ();

  testingObject.assertGraphsWorkFlow ();

  testingObject.assertCharArrayWorkFlow ();
}
