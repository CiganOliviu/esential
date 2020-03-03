#include "../../esential.hpp"

class linearRegression {
private:
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  errorsHandler __handler__;
  portData __port__;

public:
  linearRegression () {}

  float bestFitSlope (oneDimensionalArrayType<float> XsArray, oneDimensionalArrayType<float> YsArray);

  virtual ~linearRegression () {}
};

float linearRegression::bestFitSlope (oneDimensionalArrayType<float> XsArray, oneDimensionalArrayType<float> YsArray) {

  __handler__.standardHandlerOneDimensionalArray (XsArray, __PRETTY_FUNCTION__);
  __handler__.standardHandlerOneDimensionalArray (YsArray, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<float> XsYsArray;
  oneDimensionalArrayType<float> XsXsArray;

  __port__.portOneDimensionalArrays (XsYsArray, ODAWorkFlow.getOneDimensionalArraysProduct(XsArray, YsArray));
  __port__.portOneDimensionalArrays (XsXsArray, ODAWorkFlow.getOneDimensionalArraysProduct(XsArray, XsArray));

  float slope;

  slope = (( ODAWorkFlow.getOneDimensionalArrayMean (XsArray) * ODAWorkFlow.getOneDimensionalArrayMean (YsArray) ) - ODAWorkFlow.getOneDimensionalArrayMean (XsYsArray) ) /
             (( pow(ODAWorkFlow.getOneDimensionalArrayMean(XsArray), 2) ) - ODAWorkFlow.getOneDimensionalArrayMean (XsXsArray));

  return slope;
}

int main(int argc, char const *argv[]) {

  limits<int> __interval__;
  __interval__.minimLimit = -100;
  __interval__.maximLimit = 100;

  oneDimensionalArrayType<float> testArrayOne;
  testArrayOne.length = 100;

  oneDimensionalArrayType<float> testArrayTwo;
  testArrayTwo.length = 100;

  randomGenerator __generator__;

  __generator__.oneDimensionalArrayGenerator (testArrayOne, __interval__);
  __generator__.oneDimensionalArrayGenerator (testArrayTwo, __interval__);

  linearRegression __regression__;

  std::cout << __regression__.bestFitSlope (testArrayOne, testArrayTwo);

  return 0;
}
