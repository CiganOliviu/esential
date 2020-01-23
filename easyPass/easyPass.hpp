#include "dependencies/easyPassDef.hpp"

using namespace easyPassDefinitions;

const char * systemException::what () const throw () {

  return processMessage.c_str();
}

template <class Type> bool validationRules::isNegative (Type parameter) {

    if (parameter < 0) return true;

    return false;
}

template <class Type> bool validationRules::isZero (Type parameter) {

    if (parameter == 0) return true;

    return false;
}

template <class Type> bool validationRules::isNegativeOrZero (Type parameter) {

    if (parameter <= 0) return true;

    return false;
}

template <class Type> bool validationRules::isEqual (limits<Type> limitsObject) {

    if (limitsObject.minimLimit == limitsObject.maximLimit) return true;

    return false;
}

template <class Type> Type validationRules::returnTheMaximumParameter (limits<Type> limitsObject) {

  if (limitsObject.minimLimit >= limitsObject.maximLimit) return limitsObject.minimLimit;

  return limitsObject.maximLimit;
}

template <class Type> Type validationRules::returnTheMinimumParameter (limits<Type> limitsObject) {

  if (limitsObject.minimLimit <= limitsObject.maximLimit) return limitsObject.minimLimit;

  return limitsObject.maximLimit;
}

template <class Type> void validationRules::interchangeValues (Type & parameterOne, Type & parameterTwo) {

  parameterOne = parameterOne + parameterTwo;
  parameterTwo = parameterOne - parameterTwo;
  parameterOne = parameterOne - parameterTwo;
}

template <class Type> Type randomGenerator::numberGenerator (limits<Type> limitsObject) {

  srand(time(0));

  Type generatedNumber = (fmod(rand(), (limitsObject.maximLimit - limitsObject.minimLimit + 0.5))) + limitsObject.minimLimit;

  return generatedNumber;
}

template <class Type> Type randomGenerator::staticNumberGenerator (limits<Type> limitsObject) {

  std::random_device randomDevice;

  std::mt19937 gen(randomDevice());

  std::uniform_int_distribution<int> distribution(limitsObject.minimLimit, limitsObject.maximLimit);

  return distribution(gen);
}

template <class Type> void randomGenerator::oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject) {

  if (isZero(ODAObject.length)) throw systemException (__error__.oneDimensionalArrayGeneratorZeroError);
  if (isNegative(ODAObject.length)) throw systemException (__error__.oneDimensionalArrayGeneratorNegativeError);

  srand (time(NULL));

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = (rand() % (limitsObject.maximLimit - limitsObject.minimLimit + 1)) + limitsObject.minimLimit;
}

template <class Type> void randomGenerator::matrixGenerator (matrixType<Type> & MTObject, limits<Type> limitsObject) {

  if (isZero(MTObject.line) && isZero(MTObject.column)) throw systemException (__error__.matrixGeneratorZeroError);
  if (isNegative(MTObject.line) && isNegative(MTObject.column)) throw systemException (__error__.matrixGeneratorNegativeError);

  srand (time(NULL));

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++)
    for (size_t jiterator = MTObject.endColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
      MTObject.matrix[iterator][jiterator] = (rand() % (limitsObject.maximLimit - limitsObject.minimLimit + 1)) + limitsObject.minimLimit;
}

template <class Type> void checkAndSupport::readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  std::cin >> ODAObject.length;

  if (isZero(ODAObject.length)) throw systemException (__error__.readOneDimensionalArrayZeroError);
  if (isNegative(ODAObject.length)) throw systemException (__error__.readOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cin >> ODAObject.oneDimensionalArray[iterator];
}

template <class Type> void checkAndSupport::readDynamicFileDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

    std::ifstream dataStream(fileName, std::ios::in);
    Type data;

    if (dataStream.is_open()) {

      while (dataStream >> data) {

        ODAObject.oneDimensionalArray[ODAObject.length] = data;
        ODAObject.length += 1;
      }

      if (isZero(ODAObject.length)) throw systemException (__error__.readDynamicFileOneDimensionalArrayZeroError);
      if (isNegative(ODAObject.length)) throw systemException (__error__.readDynamicFileOneDimensionalArrayNegativeError);

      dataStream.close();
    }
    else
      throw systemException (__error__.filesError);
}

template <class Type> void checkAndSupport::putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  if (isZero(ODAObject.length)) throw systemException (__error__.putsOneDimensionalArrayZeroError);
  if (isNegative(ODAObject.length)) throw systemException (__error__.putsOneDimensionalArrayNegativeError);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cout << ODAObject.oneDimensionalArray[iterator] << " ";
}

template <class Type> void checkAndSupport::putsFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  if (isZero(ODAObject.length)) throw systemException (__error__.putsFileOneDimensionalArrayZeroError);
  if (isNegative(ODAObject.length)) throw systemException (__error__.putsFileOneDimensionalArrayNegativeError);

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
      dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

    dataStream.close();
  }
  else
    throw systemException (__error__.filesError);
}

template <class Type> void checkAndSupport::readMatrix (matrixType<Type> & MTObject) {

  if (isZero(MTObject.line) && isZero(MTObject.column)) throw systemException (__error__.readMatrixZeroError);
  if (isNegative(MTObject.line) && isNegative(MTObject.column)) throw systemException (__error__.readMatrixNegativeError);

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++)
      for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
        std::cin >> MTObject.matrix[iterator][jiterator];
}

template <class Type> void checkAndSupport::readDynamicFileMatrix (char * fileName, matrixType<Type> & MTObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  Type data;
  char endOfLine;
  int auxColumnLength = MTObject.columnRefference;

  if (dataStream.is_open()) {

    while (dataStream >> data) {

      MTObject.matrix[MTObject.lineRefference][auxColumnLength] = data;

      auxColumnLength += 1;

      dataStream.get (endOfLine);

      if (endOfLine == '\n') {
        MTObject.lineRefference += 1;
        MTObject.columnRefference = auxColumnLength;
        auxColumnLength = 0;
      }
    }

    if (isZero(MTObject.lineRefference) || isZero(MTObject.columnRefference)) throw systemException (__error__.readDynamicFileMatrixZeroError);
    if (isNegative(MTObject.lineRefference) || isNegative(MTObject.columnRefference)) throw systemException (__error__.readDynamicFileMatrixNegativeError);

    dataStream.close();
  }
  else throw systemException(__error__.filesError);
}

template <class Type> void checkAndSupport::putsMatrix (matrixType<Type> & MTObject) {

  if (isZero(MTObject.line) && isZero(MTObject.column)) throw systemException (__error__.putsMatrixZeroError);
  if (isNegative(MTObject.line) && isNegative(MTObject.column)) throw systemException (__error__.putsMatrixNegativeError);

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++) {
      for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
        std::cout << MTObject.matrix[iterator][jiterator] << " ";
      std::cout <<'\n';
  }
}

template <class Type> void checkAndSupport::putsFileMatrix (char * fileName, matrixType<Type> & MTObject) {

  if (isZero(MTObject.line) && isZero(MTObject.column)) throw systemException (__error__.putsFileMatrixZeroError);
  if (isNegative(MTObject.line) && isNegative(MTObject.column)) throw systemException (__error__.putsFileMatrixNegativeError);

  std::ofstream dataStream(fileName, std::ios::out);

  if (dataStream.is_open()) {

    for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++) {
        for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
          dataStream << MTObject.matrix[iterator][jiterator] << " ";
        dataStream <<'\n';
    }
    dataStream.close();
  }
  else throw systemException (__error__.filesError);
}

template <class Type> void checkAndSupport::readTree (binaryTreeType<Type> *& root) {

  Type value;

  std::cin >> value;

  if (value != 0) {

    root = new binaryTreeType<int>;
    root->value = value;

    createTree(root->leftLeaf);
    createTree(root->rightLeaf);

  } else root = NULL;
}

template <class Type> void checkAndSupport::putsTree (binaryTreeType<Type> * root) {

  if (root != NULL) {

    std::cout << root->value << " ";
    RootLeftRight(root->leftLeaf);
    RootLeftRight(root->rightLeaf);
  }
}

template <class Type> void portData::portOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  if (isZero(ODAObjectTwo.length)) throw systemException (__error__.portOneDimensionalArraysZeroError);
  if (isNegative(ODAObjectTwo.length)) throw systemException (__error__.portOneDimensionalArraysNegativeError);

  ODAObjectOne.length = ODAObjectTwo.length;
  ODAObjectOne.startPoint = ODAObjectTwo.startPoint;
  ODAObjectOne.endPoint = ODAObjectTwo.endPoint;

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] = ODAObjectTwo.oneDimensionalArray[iterator];
}

template <class Type> void portData::portMatrices (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  if (isZero(matrixObjectTwo.line) && isZero(matrixObjectTwo.column)) throw systemException (__error__.putsMatrixZeroError);
  if (isNegative(matrixObjectTwo.line) && isNegative(matrixObjectTwo.column)) throw systemException (__error__.putsMatrixNegativeError);

  matrixObjectOne.line = matrixObjectTwo.line;
  matrixObjectOne.column = matrixObjectTwo.column;
  matrixObjectOne.startPoint = matrixObjectTwo.startPoint;
  matrixObjectOne.endPoint = matrixObjectOne.endPoint;

  for (size_t iterator = matrixObjectOne.startLinePoint; iterator < matrixObjectOne.line + matrixObjectOne.endLinePoint; iterator++)
      for (size_t jiterator = matrixObjectOne.startColumnPoint; jiterator < matrixObjectOne.column + matrixObjectOne.endColumnPoint; jiterator++)
        matrixObjectOne.matrix[iterator][jiterator] = matrixObjectTwo.matrix[iterator][jiterator];
}

template <class Type> void portData::portLimits (limits<Type> & limitsObjectOne, limits<Type> limitsObjectTwo) {

  limitsObjectOne.minimLimit = limitsObjectTwo.minimLimit;
  limitsObjectOne.maximLimit = limitsObjectTwo.maximLimit;
}

template <class Type> void portData::portValues (limits<Type> & limitsObject) {

    limitsObject.minimLimit = limitsObject.minimLimit + limitsObject.maximLimit;
    limitsObject.maximLimit = limitsObject.minimLimit - limitsObject.maximLimit;
    limitsObject.minimLimit = limitsObject.minimLimit - limitsObject.maximLimit;
}

template <class Type> bool assertions::assertPrimitiveDataTypes (limits<Type> limitsObject) {

  if (limitsObject.minimLimit == limitsObject.maximLimit) return true;

  std::cerr << "Get " << limitsObject.maximLimit << ", Expected " << limitsObject.minimLimit << '\n';

  return false;
}

template <class Type> bool assertions::assertLimits (limits<Type> limitsObjectOne, limits<Type> limitsObjectTwo) {

  if (limitsObjectOne.minimLimit == limitsObjectTwo.minimLimit && limitsObjectOne.maximLimit == limitsObjectTwo.maximLimit) return true;

  std::cerr << "Get " << limitsObjectOne.minimLimit << ", Expected " << limitsObjectTwo.minimLimit << '\n';

  std::cerr << "Get " << limitsObjectOne.maximLimit << ", Expected " << limitsObjectTwo.maximLimit << '\n';

  return false;
}

template <class Type> bool assertions::assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  limits<Type> lengths;
  lengths.minimLimit = ODAObjectOne.length;
  lengths.maximLimit = ODAObjectTwo.length;

  limits<Type> startPoints;
  startPoints.minimLimit = ODAObjectOne.startPoint;
  startPoints.maximLimit = ODAObjectTwo.startPoint;

  limits<Type> endPoints;
  endPoints.minimLimit = ODAObjectOne.endPoint;
  endPoints.maximLimit = ODAObjectTwo.endPoint;

  if (__rules__.isZero(ODAObjectOne.length)) throw systemException (__error__.assertOneDimensionalArraysZeroError);
  if (__rules__.isNegative(ODAObjectOne.length)) throw systemException (__error__.assertOneDimensionalArraysZeroError);
  if (__rules__.isZero(ODAObjectTwo.length)) throw systemException (__error__.assertOneDimensionalArraysZeroError);
  if (__rules__.isNegative(ODAObjectTwo.length)) throw systemException (__error__.assertOneDimensionalArraysZeroError);
  if (!__rules__.isEqual(lengths)) throw systemException (__error__.assertOneDimensionalArraysUnequalLengths);
  if (!__rules__.isEqual(startPoints)) throw systemException (__error__.assertOneDimensionalArraysUnequalStartPoints);
  if (!__rules__.isEqual(endPoints)) throw systemException (__error__.assertOneDimensionalArraysUnequalEndPoints);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    if (ODAObjectOne.oneDimensionalArray[iterator] != ODAObjectTwo.oneDimensionalArray[iterator]) return false;

  return true;
}

template <class Type> bool assertions::assertMatrix (matrixType<Type> & MTObjectOne, matrixType<Type> & MTObjectTwo) {

  limits<Type> lines;
  lines.minimLimit = MTObjectOne.line;
  lines.maximLimit = MTObjectTwo.line;

  limits<Type> columns;
  columns.minimLimit = MTObjectOne.column;
  columns.maximLimit = MTObjectTwo.column;

  limits<Type> startLinePoints;
  startLinePoints.minimLimit = MTObjectOne.startLinePoint;
  startLinePoints.maximLimit = MTObjectTwo.startLinePoint;

  limits<Type> endLinePoints;
  endLinePoints.minimLimit = MTObjectOne.endLinePoint;
  endLinePoints.maximLimit = MTObjectTwo.endLinePoint;

  limits<Type> startColumnPoints;
  startColumnPoints.minimLimit = MTObjectOne.startColumnPoint;
  startColumnPoints.maximLimit = MTObjectTwo.startColumnPoint;

  limits<Type> endColumnPoints;
  endColumnPoints.minimLimit = MTObjectOne.endLinePoint;
  endColumnPoints.maximLimit = MTObjectTwo.endLinePoint;

  if (__rules__.isZero(MTObjectOne.line) && __rules__.isZero(MTObjectOne.column)) throw systemException (__error__.assertMatrixZeroError);
  if (__rules__.isNegative(MTObjectOne.line) && __rules__.isNegative(MTObjectOne.column)) throw systemException (__error__.assertMatrixNegativeError);
  if (__rules__.isZero(MTObjectTwo.line) && __rules__.isZero(MTObjectTwo.column)) throw systemException (__error__.readMatrixZeroError);
  if (__rules__.isNegative(MTObjectTwo.line) && __rules__.isNegative(MTObjectTwo.column)) throw systemException (__error__.readMatrixNegativeError);
  if (!__rules__.isEqual(lines)) throw systemException (__error__.assertMatrixUnequalLines);
  if (!__rules__.isEqual(columns)) throw systemException (__error__.assertMatrixUnequalColumns);
  if (!__rules__.isEqual(startLinePoints)) throw systemException (__error__.assertMatrixUnequalStartLinePoints);
  if (!__rules__.isEqual(endLinePoints)) throw systemException (__error__.assertMatrixUnequalEndLinePoints);
  if (!__rules__.isEqual(startColumnPoints)) throw systemException (__error__.assertMatrixUnequalStartColumnPoints);
  if (!__rules__.isEqual(endColumnPoints)) throw systemException (__error__.assertMatrixUnequalEndColumnPoints);

  for (size_t iterator = MTObjectOne.startLinePoint; iterator < MTObjectOne.line + MTObjectOne.endLinePoint; iterator++)
    for (size_t jiterator = MTObjectOne.startColumnPoint; jiterator < MTObjectOne.column + MTObjectOne.endColumnPoint; jiterator++)
      if (MTObjectOne.matrix[iterator][jiterator] != MTObjectTwo.matrix[iterator][jiterator]) return false;

  return true;
}

void assertions::countTest (char * testCase, bool testCasePassed) {

  if (testCasePassed) {

    passedCases++;

    std::cout << "Test case " << testCase;
    SetConsoleTextAttribute(HANDLE_CONSOLE, 2);
    std::cout << " passed" << '\n';
    SetConsoleTextAttribute(HANDLE_CONSOLE, 7);

  } else {

    failedCases++;

    std::cout << "Test case " << testCase;
    SetConsoleTextAttribute(HANDLE_CONSOLE, 4);
    std::cout << " failed" << '\n';
    SetConsoleTextAttribute(HANDLE_CONSOLE, 7);
  }
}

void assertions::getConclusion () {

  SetConsoleTextAttribute(HANDLE_CONSOLE, 2);

  std::cout << "\n==========================================================\n\n";
  std::cout << "Number of test cases passed " << passedCases << '\n';

  if (failedCases > 0) SetConsoleTextAttribute(HANDLE_CONSOLE, 4);

  std::cout << "Number of test cases failed " << failedCases << '\n';

  SetConsoleTextAttribute(HANDLE_CONSOLE, 2);

  std::cout << "Number of test cases " << passedCases + failedCases << '\n';
  std::cout << '\n';

  SetConsoleTextAttribute(HANDLE_CONSOLE, 7);
}
