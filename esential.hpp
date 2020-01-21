#include "dependencies/esentialDef.hpp"

template <class Type> Type oneDimensionalArraysWorkFlow::sortAndNormalizeNumber (Type parameter) {

  Type parameterRefference, returnResult = 0;
  bool validationRunTime = true;

  parameterRefference = parameter;

  for (Type iterator = 0; iterator <= 9; iterator++) {

    while (parameterRefference != 0 && validationRunTime) {

      if (parameterRefference % 10 == iterator) {

        returnResult = returnResult * 10 + iterator;
        validationRunTime = false;
      }

      parameterRefference /= 10;
    }

    validationRunTime = true;
    parameterRefference = parameter;
  }

  return returnResult;
}


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

template <class Type> Type oneDimensionalArraysWorkFlow::getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getMinimumValueOneDimensionalArrayDivideEtEmperaZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getMinimumValueOneDimensionalArrayDivideEtEmperaNegativeError);

  int middle, positionLeft = static_cast<int> (interval.minimLimit), positionRight;
  limits<Type> leftRightLimits;
  limits<Type> returningIntervalCaseOne;
  limits<Type> leftWing;
  limits<Type> rightWing;

  if (interval.minimLimit == interval.maximLimit) return ODAObject.oneDimensionalArray[positionLeft];
  else if (std::abs(interval.maximLimit - interval.minimLimit) == 1) {

    positionLeft = static_cast<int> (interval.minimLimit);
    positionRight = static_cast<int> (interval.minimLimit);

    returningIntervalCaseOne.minimLimit = ODAObject.oneDimensionalArray[positionLeft];
    returningIntervalCaseOne.maximLimit = ODAObject.oneDimensionalArray[positionRight];

    return __validations__.returnTheMinimumParameter<Type> (returningIntervalCaseOne);
  } else {

    middle = (interval.minimLimit + interval.maximLimit) / 2;

    leftWing.minimLimit = interval.minimLimit;
    leftWing.maximLimit = middle;

    rightWing.minimLimit = middle + 1;
    rightWing.maximLimit = interval.maximLimit;

    leftRightLimits.minimLimit = getMinimumValueOneDimensionalArrayDivideEtEmpera<Type> (leftWing, ODAObject);
    leftRightLimits.maximLimit = getMinimumValueOneDimensionalArrayDivideEtEmpera<Type> (rightWing, ODAObject);

    return __validations__.returnTheMinimumParameter<Type> (leftRightLimits);
  }
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

template <class Type> Type oneDimensionalArraysWorkFlow::getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.getMaximumValueOneDimensionalArrayDivideEtEmperaZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.getMaximumValueOneDimensionalArrayDivideEtEmperaNegativeError);

  int middle, positionLeft = static_cast<int> (interval.minimLimit), positionRight;
  limits<Type> leftRightLimits;
  limits<Type> returningIntervalCaseOne;
  limits<Type> leftWing;
  limits<Type> rightWing;

  if (interval.minimLimit == interval.maximLimit) return ODAObject.oneDimensionalArray[positionLeft];
  else if (std::abs(interval.maximLimit - interval.minimLimit) == 1) {

    positionLeft = static_cast<int> (interval.minimLimit);
    positionRight = static_cast<int> (interval.minimLimit);

    returningIntervalCaseOne.minimLimit = ODAObject.oneDimensionalArray[positionLeft];
    returningIntervalCaseOne.maximLimit = ODAObject.oneDimensionalArray[positionRight];

    return __validations__.returnTheMaximumParameter<Type> (returningIntervalCaseOne);
  } else {

    middle = (interval.minimLimit + interval.maximLimit) / 2;

    leftWing.minimLimit = interval.minimLimit;
    leftWing.maximLimit = middle;

    rightWing.minimLimit = middle + 1;
    rightWing.maximLimit = interval.maximLimit;

    leftRightLimits.minimLimit = getMaximumValueOneDimensionalArrayDivideEtEmpera<Type> (leftWing, ODAObject);
    leftRightLimits.maximLimit = getMaximumValueOneDimensionalArrayDivideEtEmpera<Type> (rightWing, ODAObject);

    return __validations__.returnTheMaximumParameter<Type> (leftRightLimits);
  }
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

template <class Type> void oneDimensionalArraysWorkFlow::oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.oneDimensionalArrayInitializationZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.oneDimensionalArrayInitializationNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = initializator;
}

template <class Type> bool oneDimensionalArraysWorkFlow::checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.checkIfSymetricOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.checkIfSymetricOneDimensionalArrayNegativeError);

  int iterator = ODAObject.startPoint, jiterator = ODAObject.length - 1 + ODAObject.endPoint;
  bool checker = false;

  while (iterator < jiterator) {

    if (ODAObject.oneDimensionalArray[iterator] == ODAObject.oneDimensionalArray[jiterator])
      checker = true;
    else
      checker = false;

    iterator += 1;
    jiterator -= 1;
  }

  return checker;
}

template <class Type> void oneDimensionalArraysWorkFlow::addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.addValueOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.addValueOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.length + ODAObject.endPoint; iterator > valueAndPosition.maximLimit + ODAObject.startPoint; iterator--)
    ODAObject.oneDimensionalArray[iterator + 1] = ODAObject.oneDimensionalArray[iterator];

  int position = static_cast<int> (valueAndPosition.maximLimit);

  ODAObject.oneDimensionalArray[position + ODAObject.startPoint] = valueAndPosition.minimLimit;
}

template <class Type> bool oneDimensionalArraysWorkFlow::isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.isValueInOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.isValueInOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (value == ODAObject.oneDimensionalArray[iterator]) return true;

  return false;
}

template <class Type> void oneDimensionalArraysWorkFlow::normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.normalizeOneDimensionalArrayZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.normalizeOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = sortAndNormalizeNumber<int> (ODAObject.oneDimensionalArray[iterator]);
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  if (__validations__.isZero(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysSumODAObjectOneZeroError);
  if (__validations__.isNegative(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysSumODAObjectOneNegativeError);

  if (__validations__.isZero(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysSumODAObjectTwoZeroError);
  if (__validations__.isNegative(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysSumODAObjectTwoNegativeError);

  limits<int> startPointsValueChecker;
  startPointsValueChecker.minimLimit = ODAObjectOne.startPoint;
  startPointsValueChecker.maximLimit = ODAObjectTwo.startPoint;

  limits<int> endPointsValueChecker;
  endPointsValueChecker.minimLimit = ODAObjectOne.endPoint;
  endPointsValueChecker.maximLimit = ODAObjectTwo.endPoint;

  if (!__validations__.isEqual(startPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysSumStartPointsError);
  if (!__validations__.isEqual(endPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysSumEndPointsError);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] += ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  if (__validations__.isZero(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysProductODAObjectOneZeroError);
  if (__validations__.isNegative(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysProductODAObjectOneNegativeError);

  if (__validations__.isZero(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysProductODAObjectTwoZeroError);
  if (__validations__.isNegative(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysProductODAObjectTwoNegativeError);

  limits<int> startPointsValueChecker;
  startPointsValueChecker.minimLimit = ODAObjectOne.startPoint;
  startPointsValueChecker.maximLimit = ODAObjectTwo.startPoint;

  limits<int> endPointsValueChecker;
  endPointsValueChecker.minimLimit = ODAObjectOne.endPoint;
  endPointsValueChecker.maximLimit = ODAObjectTwo.endPoint;

  if (!__validations__.isEqual(startPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysProductStartPointsError);
  if (!__validations__.isEqual(endPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysProductEndPointsError);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] *= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  if (__validations__.isZero(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysDifferenceODAObjectOneZeroError);
  if (__validations__.isNegative(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysDifferenceODAObjectOneNegativeError);

  if (__validations__.isZero(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysDifferenceODAObjectTwoZeroError);
  if (__validations__.isNegative(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysDifferenceODAObjectTwoNegativeError);

  limits<int> startPointsValueChecker;
  startPointsValueChecker.minimLimit = ODAObjectOne.startPoint;
  startPointsValueChecker.maximLimit = ODAObjectTwo.startPoint;

  limits<int> endPointsValueChecker;
  endPointsValueChecker.minimLimit = ODAObjectOne.endPoint;
  endPointsValueChecker.maximLimit = ODAObjectTwo.endPoint;

  if (!__validations__.isEqual(startPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysDifferenceStartPointsError);
  if (!__validations__.isEqual(endPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysDifferenceEndPointsError);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] -= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  if (__validations__.isZero(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysDivisionODAObjectOneZeroError);
  if (__validations__.isNegative(ODAObjectOne.length)) throw systemException (__errors__.getOneDimensionalArraysDivisionODAObjectOneNegativeError);

  if (__validations__.isZero(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysDivisionODAObjectTwoZeroError);
  if (__validations__.isNegative(ODAObjectTwo.length)) throw systemException (__errors__.getOneDimensionalArraysDivisionODAObjectTwoNegativeError);

  limits<int> startPointsValueChecker;
  startPointsValueChecker.minimLimit = ODAObjectOne.startPoint;
  startPointsValueChecker.maximLimit = ODAObjectTwo.startPoint;

  limits<int> endPointsValueChecker;
  endPointsValueChecker.minimLimit = ODAObjectOne.endPoint;
  endPointsValueChecker.maximLimit = ODAObjectTwo.endPoint;

  if (!__validations__.isEqual(startPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysDivisionStartPointsError);
  if (!__validations__.isEqual(endPointsValueChecker)) throw systemException (__errors__.getOneDimensionalArraysDivisionEndPointsError);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] /= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> void oneDimensionalArraysWorkFlow::bubbleSort (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.bubbleSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.bubbleSortNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = ODAObject.startPoint; jiterator < ODAObject.length + ODAObject.endPoint - iterator - 1; jiterator++)
      if (ODAObject.oneDimensionalArray[jiterator] > ODAObject.oneDimensionalArray[jiterator + 1])
      __validations__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + 1]);
}

template <class Type> void oneDimensionalArraysWorkFlow::minimumValueSort (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.minimumValueSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.minimumValueSortNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = iterator + 1; jiterator < ODAObject.length + ODAObject.endPoint; jiterator++)
      if (ODAObject.oneDimensionalArray[iterator] > ODAObject.oneDimensionalArray[jiterator])
        __validations__.interchangeValues (ODAObject.oneDimensionalArray[iterator], ODAObject.oneDimensionalArray[jiterator]);
}

template <class Type> void oneDimensionalArraysWorkFlow::insertionSort (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.insertionSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.insertionSortNegativeError);

  Type temporarParameter;
  int jiterator;

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++) {
      temporarParameter = ODAObject.oneDimensionalArray[iterator];
      jiterator = iterator - 1;

      while (jiterator >= 0 && ODAObject.oneDimensionalArray[jiterator] > temporarParameter) {
        ODAObject.oneDimensionalArray[jiterator + 1] = ODAObject.oneDimensionalArray[jiterator];
        jiterator -= 1;
      }
      ODAObject.oneDimensionalArray[jiterator + 1] = temporarParameter;
  }
}

template <class Type> void oneDimensionalArraysWorkFlow::selectionSort (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.insertionSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.insertionSortNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    for (size_t jiterator = iterator + 1; jiterator < ODAObject.length + ODAObject.endPoint; jiterator++)
      if (ODAObject.oneDimensionalArray[iterator] > ODAObject.oneDimensionalArray[jiterator])
        __validations__.interchangeValues (ODAObject.oneDimensionalArray[iterator], ODAObject.oneDimensionalArray[jiterator]);
}

template <class Type> void oneDimensionalArraysWorkFlow::shellSort (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.shellSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.shellSortNegativeError);

  Type jiterator, step;

  step = ODAObject.length / 2;

  while (step > 0) {

    for (size_t iterator = step; iterator < ODAObject.length; iterator++) {
      jiterator = iterator - step;
      while (jiterator >= 0)
        if (ODAObject.oneDimensionalArray[jiterator] > ODAObject.oneDimensionalArray[jiterator + step]) {
        __validations__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + step]);
        jiterator -= step;
      } else jiterator -= 1;
    }
    step /= 2;
  }
}

template <class Type> void oneDimensionalArraysWorkFlow::reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errors__.bubbleSortZeroError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errors__.bubbleSortNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = ODAObject.startPoint; jiterator < ODAObject.length + ODAObject.endPoint - iterator - 1; jiterator++)
      if (ODAObject.oneDimensionalArray[jiterator] < ODAObject.oneDimensionalArray[jiterator + 1])
      __validations__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + 1]);
}

template <class Type> Type matricesWorkFlow::sortAndNormalizeNumber (Type parameter) {

  Type parameterRefference, returnResult = 0;
  bool validationRunTime = true;

  parameterRefference = parameter;

  for (Type iterator = 0; iterator <= 9; iterator++) {

    while (parameterRefference != 0 && validationRunTime) {

      if (parameterRefference % 10 == iterator) {

        returnResult = returnResult * 10 + iterator;
        validationRunTime = false;
      }

      parameterRefference /= 10;
    }

    validationRunTime = true;
    parameterRefference = parameter;
  }

  return returnResult;
}

template <class Type> void matricesWorkFlow::readMatrix (matrixType<Type> & matrixObject) {

  std::cin >> matrixObject.lineRefference >> matrixObject.columnRefference;

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.readMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.readMatrixNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      std::cin >> matrixObject.matrix[iterator][jiterator];
}

template <class Type> void matricesWorkFlow::readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  if (dataStream.is_open()) {

    dataStream >> matrixObject.lineRefference >> matrixObject.columnRefference;

    if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.readStaticFileMatrixZeroError);
    if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.readStaticFileMatrixNegativeError);

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
        dataStream >> matrixObject.matrix[iterator][jiterator];

    dataStream.close();
  }
  else throw systemException (__errors__.openFileError);
}

template <class Type> void matricesWorkFlow::readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  Type data;
  char endOfLine;
  int auxColumnLength = matrixObject.columnRefference;

  if (dataStream.is_open()) {

    while (dataStream >> data) {

      matrixObject.matrix[matrixObject.lineRefference][auxColumnLength] = data;

      auxColumnLength += 1;

      dataStream.get (endOfLine);

      if (endOfLine == '\n') {
        matrixObject.lineRefference += 1;
        matrixObject.columnRefference = auxColumnLength;
        auxColumnLength = 0;
      }
    }

    if (isZero(matrixObject.lineRefference) || isZero(matrixObject.columnRefference)) throw systemException (__errors__.readDynamicFileMatrixZeroError);
    if (isNegative(matrixObject.lineRefference) || isNegative(matrixObject.columnRefference)) throw systemException (__errors__.readDynamicFileMatrixNegativeError);

    dataStream.close();
  }
  else throw systemException(__errors__.openFileError);
}

template <class Type> void matricesWorkFlow::outputMatrix (matrixType<Type> matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.outputMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.outputMatrixNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      std::cout << matrixObject.matrix[iterator][jiterator] << " ";

    std::cout << '\n';
  }
}

template <class Type> void matricesWorkFlow::outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.readMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.readMatrixNegativeError);

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    dataStream << matrixObject.line << " " << matrixObject.column << '\n';

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
        dataStream << matrixObject.matrix[iterator][jiterator] << " ";

    dataStream.close();
    }
  }
}

template <class Type> void matricesWorkFlow::outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.outputDynamicFileMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.outputDynamicFileMatrixNegativeError);

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
        dataStream << matrixObject.matrix[iterator][jiterator] << " ";

    dataStream.close();
    }
  }
}

template <class Type> Type matricesWorkFlow::getMaximumValueFromMatrix (matrixType<Type> matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMaximumValueFromMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMaximumValueFromMatrixNegativeError);

  Type maximumValue = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (maximumValue < matrixObject.matrix[iterator][jiterator]) maximumValue = matrixObject.matrix[iterator][jiterator];

  return maximumValue;
}

template <class Type> Type matricesWorkFlow::getMinimumValueFromMatrix (matrixType<Type> matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMinimumValueFromMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMinimumValueFromMatrixNegativeError);

  Type minimumValue = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (minimumValue > matrixObject.matrix[iterator][jiterator]) minimumValue = matrixObject.matrix[iterator][jiterator];

  return minimumValue;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsSum (matrixType<Type> matrixObject)  {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsSumZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsSumNegativeError);

  Type sum = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      sum += matrixObject.matrix[iterator][jiterator];

  return sum;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsProduct (matrixType<Type> matrixObject)  {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsProductZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsProductNegativeError);

  Type product = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      product *= matrixObject.matrix[iterator][jiterator];

  return product;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsDifference (matrixType<Type> matrixObject)  {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsDifferenceZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsDifferenceNegativeError);

  Type difference = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      difference -= matrixObject.matrix[iterator][jiterator];
  }

  return difference;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsDivision (matrixType<Type> matrixObject)  {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsDivisionZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.getMatrixElementsDivisionNegativeError);

  Type division = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      division /= matrixObject.matrix[iterator][jiterator];

  return division;
}

template <class Type> void matricesWorkFlow::normalizeMatrix (matrixType<Type> & matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (__errors__.normalizeMatrixZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (__errors__.normalizeMatrixNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      matrixObject.matrix[iterator][jiterator] = sortAndNormalizeNumber (matrixObject.matrix[iterator][jiterator]);
}
