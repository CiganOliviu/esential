#include "esential.hpp"

class systemTestingWorkflow {
private:
  assertions __assert__;

  IOSystem inputOutputSystem;
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  matricesWorkFlow MatricesWorkFlow;
  fundamentalAlgorithmsWorkFlow fundamentalAlgosWorkFlow;
  treesWorkFlow TWorkFlow;
  graphsWorkFlow GWorkFlow;

public:
  systemTestingWorkflow () {}

  void assertIOSystem ();
  void assertOneDimensionalArraysWorkFlow ();
  void assertMatricesWorkFlow ();
  void assertFundamentalAlgorithmsWorkFlow ();
  void assertTreesWorkFlow ();
  void assertGraphsWorkFlow ();

  virtual ~systemTestingWorkflow () {}
};

void systemTestingWorkflow::assertIOSystem () {

  limits<bool> results;

  results.minimLimit = inputOutputSystem.classResponse();
  results.maximLimit = true;

  __assert__.countTest ((char*)"assertIOSystem", __assert__.assertPrimitiveDataTypes<bool>(results) );
}

void systemTestingWorkflow::assertOneDimensionalArraysWorkFlow () {

    limits<bool> results;

    results.minimLimit = ODAWorkFlow.classResponse();
    results.maximLimit = true;

    __assert__.countTest ((char*)"assertOneDimensionalArraysWorkFlow", __assert__.assertPrimitiveDataTypes<bool>(results) );
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

class RunSystemTests {
private:
  systemTestingWorkflow testingObject;

public:
  RunSystemTests () {}

  void run ();

  virtual ~RunSystemTests () {}
};

void RunSystemTests::run () {

  testingObject.assertIOSystem ();
  testingObject.assertOneDimensionalArraysWorkFlow ();
  testingObject.assertMatricesWorkFlow ();
  testingObject.assertFundamentalAlgorithmsWorkFlow ();
  testingObject.assertTreesWorkFlow ();
  testingObject.assertGraphsWorkFlow ();
}
