#include "../../esential.hpp"

class linearRegression {
private:
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  errorsHandler __handler__;
  portData __port__;
  equationsWorkFlow equations;

public:
  linearRegression () {}

  float bestFitSlope (oneDimensionalArrayType<float> XsArray, oneDimensionalArrayType<float> YsArray);
  float intercept (oneDimensionalArrayType<float> XsArray, oneDimensionalArrayType<float> YsArray);
  void saveRegression (oneDimensionalArrayType<float> regressionArray, float slope, float y_intercept);
  float squaredError (oneDimensionalArrayType<float> YsOriginal, oneDimensionalArrayType<float> YsLine);
  float coefficientOfDetermination (oneDimensionalArrayType<float> YsOriginal, oneDimensionalArrayType<float> YsLine);

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

float linearRegression::intercept (oneDimensionalArrayType<float> XsArray, oneDimensionalArrayType<float> YsArray) {

  __handler__.standardHandlerOneDimensionalArray (XsArray, __PRETTY_FUNCTION__);
  __handler__.standardHandlerOneDimensionalArray (YsArray, __PRETTY_FUNCTION__);

  float slope;
  float y_intercept;

  slope = bestFitSlope (XsArray, YsArray);
  y_intercept =  (( ODAWorkFlow.getOneDimensionalArrayMean (YsArray) ) - ( slope * ODAWorkFlow.getOneDimensionalArrayMean (XsArray) ));

  return y_intercept;
}

void linearRegression::saveRegression (oneDimensionalArrayType<float> regressionArray, float slope, float y_intercept) {

  __handler__.standardHandlerOneDimensionalArray (regressionArray, __PRETTY_FUNCTION__);

  linearEquation __LEquation__;

  __LEquation__.slope = slope;
  __LEquation__.y_intercept = y_intercept;

  for (size_t iterator = regressionArray.startPoint; iterator < regressionArray.length + regressionArray.endPoint; iterator++) {
    __LEquation__.root = iterator + 1;
    regressionArray.oneDimensionalArray[iterator] = equations.getValueLinearEquation(__LEquation__);
  }
}

float linearRegression::squaredError (oneDimensionalArrayType<float> YsOriginal, oneDimensionalArrayType<float> YsLine) {

  __handler__.standardHandlerOneDimensionalArray (YsOriginal, __PRETTY_FUNCTION__);
  __handler__.standardHandlerOneDimensionalArray (YsLine, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<float> YsOriginalYsLineDifference;

  __port__.portOneDimensionalArrays (YsOriginalYsLineDifference, ODAWorkFlow.getOneDimensionalArraysDifference(YsOriginal, YsLine));

  ODAWorkFlow.getOneDimensionalArraysProduct (YsOriginalYsLineDifference, YsOriginalYsLineDifference);

  return ODAWorkFlow.getOneDimensionalArrayElementsSum (YsOriginalYsLineDifference);
}

float linearRegression::coefficientOfDetermination (oneDimensionalArrayType<float> YsOriginal, oneDimensionalArrayType<float> YsLine) {

  __handler__.standardHandlerOneDimensionalArray (YsOriginal, __PRETTY_FUNCTION__);
  __handler__.standardHandlerOneDimensionalArray (YsLine, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<float> ysMeanLine;
  float squaredErrorRegression;
  float squaredErrorYMean;

  ysMeanLine.length = YsOriginal.length;

  for (size_t iterator = YsOriginal.startPoint; iterator < YsOriginal.length + YsOriginal.endPoint; iterator++)
    ysMeanLine.oneDimensionalArray[iterator] = ODAWorkFlow.getOneDimensionalArrayMean (YsOriginal);

  squaredErrorRegression = squaredError (YsOriginal, YsLine);
  squaredErrorYMean = squaredError (YsOriginal, ysMeanLine);

  return 1.1 - (squaredErrorRegression / squaredErrorYMean);
}

int main(int argc, char const *argv[]) {

  limits<int> __interval__;

  linearRegression __regression__;

  float slope;
  float y_intercept;
  float r_Squared;

  oneDimensionalArrayType<float> testArrayOne;
  oneDimensionalArrayType<float> testArrayTwo;
  oneDimensionalArrayType<float> regressionArray;

  randomGenerator __generator__;

  __interval__.minimLimit = -40;
  __interval__.maximLimit = 40;

  testArrayOne.length = 20;
  testArrayTwo.length = 20;
  regressionArray.length = 20;

  __generator__.oneDimensionalArrayGenerator (testArrayOne, __interval__);

  std::chrono::milliseconds timespan(1000);

  std::this_thread::sleep_for(timespan);

  __generator__.oneDimensionalArrayGenerator (testArrayTwo, __interval__);

  oneDimensionalArraysWorkFlow ODAWorkFlow;

  slope = __regression__.bestFitSlope (testArrayOne, testArrayTwo);
  y_intercept = __regression__.intercept (testArrayOne, testArrayTwo);

  __regression__.saveRegression (regressionArray, slope, y_intercept);

  r_Squared = __regression__.coefficientOfDetermination (testArrayTwo, regressionArray);

  std::cout << r_Squared;

  return 0;
}
