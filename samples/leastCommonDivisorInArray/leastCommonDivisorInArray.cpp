#include "../../esential.hpp"

class commonDivisorInArray {
private:
  errorsHandler __handler__;
  numbersPropertiesWorkFlow properties;

public:
  commonDivisorInArray () {}

  int getCommonDivisorInArray (oneDimensionalArrayType<int> ODAObject);

  virtual ~commonDivisorInArray () {}
};

int commonDivisorInArray::getCommonDivisorInArray (oneDimensionalArrayType<int> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  int theBiggestCommonDivisor = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++) {
    theBiggestCommonDivisor = properties.getTheLargestCommonDivisorOfTwoNumbers (theBiggestCommonDivisor, ODAObject.oneDimensionalArray[iterator]);
  }

  return theBiggestCommonDivisor;
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayType<int> ODAObject;
  IOSystemOneDimensionalArray ioODA;
  commonDivisorInArray commonDivisorODA;

  ioODA.readOneDimensionalArray (ODAObject);
  ioODA.outputOneDimensionalArray (ODAObject);

  std::cout << commonDivisorODA.getCommonDivisorInArray (ODAObject);

  return 0;
}
