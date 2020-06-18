#include "../../esential.hpp"

class maxPalindrome {
private:
  errorsHandler __handler__;
  checkersWorkFlow checkersWorkflow;
  checkAndSupport validationsSupport;

public:
  maxPalindrome () {}

  int getMaximumValuePalindrome (oneDimensionalArrayType<int> ODA);
  int reportFrequencyInODA (oneDimensionalArrayType<int> ODA, int valueToCheck);

  virtual ~maxPalindrome () {}
};

int maxPalindrome::getMaximumValuePalindrome (oneDimensionalArrayType<int> ODAObject) {
  
  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  int result = 0;

  for (int iterator = ODAObject.startPoint; iterator < ODAObject.length; iterator++)
    if (checkersWorkflow.isPalindrome (ODAObject.oneDimensionalArray[iterator]))
      result = validationsSupport.returnTheMaximumParameterWithoutObject (result, ODAObject.oneDimensionalArray[iterator]);

  return result;
}

int maxPalindrome::reportFrequencyInODA (oneDimensionalArrayType<int> ODAObject, int valueToCheck) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  int contor = 0;

  for (int iterator = ODAObject.startPoint; iterator < ODAObject.length; iterator++)
    if (ODAObject.oneDimensionalArray[iterator] == valueToCheck)
      contor += 1;

  return contor;
}

int main (int argc, char const * argv[]) {

  oneDimensionalArrayType<int> ODA;
  IOSystemOneDimensionalArray ioODA;
  maxPalindrome workflow; 

  int result;
  int frequency;

  ioODA.readDynamicFileOneDimensionalArray ((char*)"ODA.txt", ODA);
  ioODA.outputOneDimensionalArray (ODA);

  result = workflow.getMaximumValuePalindrome (ODA);
  frequency = workflow.reportFrequencyInODA (ODA, result);

  std::cout << result << " " << frequency;
  
  return 0;
}