#include "dependencies/esentialDef.hpp"

template <class Type> void oneDimensionalArraysWorkFlow::readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  std::cin >> ODAObject.length;

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.readOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.readOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cin >> ODAObject.oneDimensionalArray[iterator];
}

template <class Type> void oneDimensionalArraysWorkFlow::readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  if (dataStream.is_open()) {

    dataStream >> ODAObject.length;

    if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.readStaticFileOneDimensionalArrayZeroError);
    if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.readStaticFileOneDimensionalArrayNegativeError);

    for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
      dataStream >> ODAObject.oneDimensionalArray[iterator];

    dataStream.close();
  }
  else
    throw systemException (__errors__.openFileError);
}

template <class Type> void oneDimensionalArraysWorkFlow::readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ifstream dataStream(fileName, std::ios::in);
  Type data;
  int iterator = ODAObject.startPoint;

  if (dataStream.is_open()) {

    while (dataStream >> data) {

        ODAObject.oneDimensionalArray[iterator] = data;
        iterator += 1;
    }

    ODAObject.length = iterator;

    if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.readDynamicFileOneDimensionalArrayZeroError);
    if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.readDynamicFileOneDimensionalArrayNegativeError);

    dataStream.close();

  }
  else
    throw systemException (__errors__.openFileError);
}

template <class Type> void oneDimensionalArraysWorkFlow::outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.outputOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.outputOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cout << ODAObject.oneDimensionalArray[iterator] << " ";

  std::cout << '\n';
}

template <class Type> void oneDimensionalArraysWorkFlow::outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.outputStaticFileOneDimensionalArrayZeroError);
    if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.outputStaticFileOneDimensionalArrayNegativeError);

    dataStream << ODAObject.length << " ";
    for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
      dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

    dataStream << '\n';

    dataStream.close();
  }
  else
    throw systemException (__errors__.openFileError);
}

template <class Type> void oneDimensionalArraysWorkFlow::outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.outputDynamicFileOneDimensionalArrayZeroError);
    if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.outputDynamicFileOneDimensionalArrayNegativeError);

    for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
      dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

    dataStream << '\n';

    dataStream.close();
  }
  else
    throw systemException (__errors__.openFileError);
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getMinimumValueOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getMinimumValueOneDimensionalArrayNegativeError);

  Type minimumValue = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (minimumValue >= ODAObject.oneDimensionalArray[iterator])
      minimumValue = ODAObject.oneDimensionalArray[iterator];

  return minimumValue;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getMaximumValueOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getMaximumValueOneDimensionalArrayNegativeError);

  Type maximumValue = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (maximumValue <= ODAObject.oneDimensionalArray[iterator])
      maximumValue = ODAObject.oneDimensionalArray[iterator];

  return maximumValue;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsSumZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsSumNegativeError);

  Type sum = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    sum += ODAObject.oneDimensionalArray[iterator];

  return sum;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsProductZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsProductNegativeError);

  Type product = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    product *= ODAObject.oneDimensionalArray[iterator];

  return product;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsDifference(oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsDifferenceZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsDifferenceNegativeError);

  Type difference = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    difference -= ODAObject.oneDimensionalArray[iterator];

  return difference;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsDivisionZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getOneDimensionalArrayElementsDivisionNegativeError);

  Type division = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    division /= ODAObject.oneDimensionalArray[iterator];

  return division;
}
