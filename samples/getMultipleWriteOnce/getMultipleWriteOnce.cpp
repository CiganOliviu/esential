/*
  Tasks:
    * read one dimensional array from file
    * print one dimensional array
    * print every value once
*/

#include "../../esential.hpp"

class getMultipleWriteOnce {
private:
  errorsHandler __handler__;

public:
  getMultipleWriteOnce () {}

  template <class Type> void writeValuesFromODAOnce (oneDimensionalArrayType<Type> ODAObject);

  virtual ~getMultipleWriteOnce () {}
};

template <class Type> void getMultipleWriteOnce::writeValuesFromODAOnce (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (ODAObject.oneDimensionalArray[iterator] != ODAObject.oneDimensionalArray[iterator + 1])
      std::cout << ODAObject.oneDimensionalArray[iterator] << " ";
}

int main(int argc, char const *argv[]) {

  oneDimensionalArrayType<int> ODAObject;
  oneDimensionalArraysWorkFlow ODAWorkFlow;
  IOSystemOneDimensionalArray ioODA;
  getMultipleWriteOnce getMultipleWriteOnceWorkFlow;

  ioODA.readDynamicFileOneDimensionalArray ((char*)"getMultipleWriteOnceData.data", ODAObject);
  ioODA.outputOneDimensionalArray (ODAObject);
  getMultipleWriteOnceWorkFlow.writeValuesFromODAOnce (ODAObject);

  return 0;
}
