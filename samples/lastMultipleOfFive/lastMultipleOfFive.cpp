#include "../../esential.hpp"

class lastMultipleOfFive {
private:
  validationRules __validations__;
  errorsHandler __handler__;

  bool isDivisibleWithFive (int number);

public:
  lastMultipleOfFive () {}

  template <class Type> limits<int> getLastMultipleOfFiveODA (oneDimensionalArrayType<Type> ODAObject);

  virtual ~lastMultipleOfFive () {}
};

bool lastMultipleOfFive::isDivisibleWithFive (int number) {

  __handler__.negativeNumberHandler (number, __PRETTY_FUNCTION__);

  if (number % 5 == 0) return true;

  return false;
}

template <class Type> limits<int> lastMultipleOfFive::getLastMultipleOfFiveODA (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  limits<int> resultValueAndIndex;

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (isDivisibleWithFive(ODAObject.oneDimensionalArray[iterator])) {
      resultValueAndIndex.minimLimit = ODAObject.oneDimensionalArray[iterator];
      resultValueAndIndex.maximLimit = iterator + 1;
    }

  return resultValueAndIndex;
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayType<int> ODAObject;
  limits<int> valueAndIndex;
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  IOSystemOneDimensionalArray ioODA;
  lastMultipleOfFive lastMultipleOfFiveWorkFlow;
  portData __port__;

  ioODA.readDynamicFileOneDimensionalArray ((char*)"lastMultipleOfFiveData.data", ODAObject);
  ioODA.outputOneDimensionalArray (ODAObject);

  __port__.portLimits (valueAndIndex, lastMultipleOfFiveWorkFlow.getLastMultipleOfFiveODA (ODAObject));

  std::cout << valueAndIndex.minimLimit << " " << valueAndIndex.maximLimit;

  return 0;
}
