/*
  Tasks:
    * read from file one dimensional array;
    * print one dimensional array
    * get the three minimum values who are multiple of 3
*/

#include "../../esential.hpp"

class multipleOfThree {
private:
  errorsHandler __handler__;
  validationRules __validations__;

  bool isMultipleOfThree (int number);

public:
  multipleOfThree () {}

  template <class Type> void getMultipleOfThreeNumbersFromODA (oneDimensionalArrayType<Type> ODAObject);

  virtual ~multipleOfThree () {}
};

bool multipleOfThree::isMultipleOfThree (int number) {

  if (__validations__.isNegativeOrZero (number)) return false;

  if (number % 3 == 0) return true;

  return false;
}

template <class Type> void multipleOfThree::getMultipleOfThreeNumbersFromODA (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  int contor = 0;

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (isMultipleOfThree(ODAObject.oneDimensionalArray[iterator]) && contor < 3) {
      std::cout << ODAObject.oneDimensionalArray[iterator] << " ";
      contor += 1;
    }
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayType<int> ODARefference;
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  multipleOfThree multipleOfThreeRefference;
  IOSystemOneDimensionalArray ioODA;

  ioODA.readDynamicFileOneDimensionalArray ((char*)"multipleOfThreeData.data", ODARefference);
  ioODA.outputOneDimensionalArray (ODARefference);
  ODAWorkFlow.shellSort (ODARefference);
  ioODA.outputOneDimensionalArray (ODARefference);
  multipleOfThreeRefference.getMultipleOfThreeNumbersFromODA (ODARefference);

  return 0;
}
