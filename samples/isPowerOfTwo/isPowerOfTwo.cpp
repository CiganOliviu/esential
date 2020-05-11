/*
  Tasks:
    * read one dimensional array
    * print one dimensional array
    * get all values who are power of two
*/

#include "../../esential.hpp"

class powerOfTwoProcesses {
private:
  validationRules __validations__;
  errorsHandler __handler__;

  bool isNotDivisibleWithTwo (int number);
  bool isPowerOfTwo (int number);

public:
  powerOfTwoProcesses () {}

  template <class Type> void getAllValuesPowerOfTwo (oneDimensionalArrayType<Type> ODAObject);

  virtual ~powerOfTwoProcesses () {}
};

bool powerOfTwoProcesses::isNotDivisibleWithTwo (int number) {

  if (__validations__.isNegativeOrZero(number)) return true;

  if (number % 2 == 0) return false;

  return true;
}

bool powerOfTwoProcesses::isPowerOfTwo (int number) {

  int theDivision = 1;
  bool runTimeChecker = true;

  while (runTimeChecker) {

    if (isNotDivisibleWithTwo(number))
      runTimeChecker = false;

    number /= 2;

    if (__validations__.isEqualParameterBased(number, 1))
      return true;
  }
  return false;
}

template <class Type> void powerOfTwoProcesses::getAllValuesPowerOfTwo (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (isPowerOfTwo(ODAObject.oneDimensionalArray[iterator]))
      std::cout << ODAObject.oneDimensionalArray[iterator] << " ";
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayType<int> ODAObject;
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  IOSystemOneDimensionalArray ioODA;
  powerOfTwoProcesses powerOfTwoProcessesWorkFlow;

  ioODA.readDynamicFileOneDimensionalArray ((char*)"isPowerOfTwoData.data", ODAObject);
  ioODA.outputOneDimensionalArray (ODAObject);
  powerOfTwoProcessesWorkFlow.getAllValuesPowerOfTwo (ODAObject);

  return 0;
}
