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

template <class Type> bool validationRules::isNotNegative (Type parameter) {

  if (parameter < 0) return false;

  return true;
}

template <class Type> bool validationRules::isNotZero (Type parameter) {

  if (parameter == 0) return false;

  return true;
}

template <class Type> bool validationRules::isNegativeOrZero (Type parameter) {

  if (parameter <= 0) return true;

  return false;
}

template <class Type> bool validationRules::isNotNegativeOrZero (Type parameter) {

  if (parameter <= 0) return false;

  return true;
}

template <class Type> bool validationRules::isNull (Type parameter) {

  if (parameter == NULL) return true;

  return false;
}

template <class Type> bool validationRules::isNotNull (Type parameter) {

  if (parameter != NULL) return true;

  return false;
}

template <class Type> bool validationRules::isEqualObjectBased (limits<Type> limitsObject) {

    if (limitsObject.minimLimit == limitsObject.maximLimit) return true;

    return false;
}

template <class Type> bool validationRules::isEqualParameterBased (Type parameterOne, Type parameterTwo) {

    if (parameterOne == parameterTwo) return true;

    return false;
}

template <class Type> bool validationRules::isNotEqualObjectBased (limits<Type> limitsObject) {

    if (limitsObject.minimLimit == limitsObject.maximLimit) return false;

    return true;
}

template <class Type> bool validationRules::isNotEqualParameterBased (Type parameterOne, Type parameterTwo) {

    if (parameterOne == parameterTwo) return false;

    return true;
}

template <class Type> void errorsHandler::standardHandlerOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, const char coreFunction[]) {

  __errorMessages__.oneDimensionalArrayZeroLengthError += coreFunction;
  __errorMessages__.oneDimensionalArrayNegativeLengthError += coreFunction;

  if (__validations__.isZero(ODAObject.length)) throw systemException (__errorMessages__.oneDimensionalArrayZeroLengthError);
  if (__validations__.isNegative(ODAObject.length)) throw systemException (__errorMessages__.oneDimensionalArrayNegativeLengthError);
}

template <class Type> void errorsHandler::standardHandlerMatrix (matrixType<Type> MTObject, const char coreFunction[]) {

  __errorMessages__.matrixZeroLineError += coreFunction;
  __errorMessages__.matrixNegativeLineError += coreFunction;
  __errorMessages__.matrixZeroColumnError += coreFunction;
  __errorMessages__.matrixNegativeColumnError += coreFunction;

  if (__validations__.isZero<Type>(MTObject.lineRefference)) throw systemException (__errorMessages__.matrixZeroLineError);
  if (__validations__.isNegative<Type>(MTObject.lineRefference)) throw systemException (__errorMessages__.matrixNegativeLineError);

  if (__validations__.isZero<Type>(MTObject.columnRefference)) throw systemException (__errorMessages__.matrixZeroColumnError);
  if (__validations__.isNegative<Type>(MTObject.columnRefference)) throw systemException (__errorMessages__.matrixNegativeColumnError);
}

template <class Type> void errorsHandler::equalityHandlerOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo, const char coreFunction[]) {

  __errorMessages__.oneDimensionalArrayZeroLengthError += coreFunction;
  __errorMessages__.oneDimensionalArrayNegativeLengthError += coreFunction;
  __errorMessages__.unequalLengthError += coreFunction;
  __errorMessages__.unequalStartPointsError += coreFunction;
  __errorMessages__.unequalEndPointsError += coreFunction;

  if (__validations__.isZero<Type>(ODAObjectOne.length)) throw systemException (__errorMessages__.oneDimensionalArrayZeroLengthError);
  if (__validations__.isNegative<Type>(ODAObjectOne.length)) throw systemException (__errorMessages__.oneDimensionalArrayNegativeLengthError);

  if (__validations__.isZero<Type>(ODAObjectTwo.length)) throw systemException (__errorMessages__.oneDimensionalArrayZeroLengthError);
  if (__validations__.isNegative<Type>(ODAObjectTwo.length)) throw systemException (__errorMessages__.oneDimensionalArrayNegativeLengthError);

  if (__validations__.isNotEqualParameterBased<Type>(ODAObjectOne.length, ODAObjectTwo.length)) throw systemException (__errorMessages__.unequalLengthError);
  if (__validations__.isNotEqualParameterBased<Type>(ODAObjectOne.length, ODAObjectTwo.length)) throw systemException (__errorMessages__.unequalStartPointsError);
  if (__validations__.isNotEqualParameterBased<Type>(ODAObjectOne.length, ODAObjectTwo.length)) throw systemException (__errorMessages__.unequalEndPointsError);
}

template <class Type> void errorsHandler::equalityHandlerMatrices (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo, const char coreFunction[]) {

  __errorMessages__.matrixZeroLineError += coreFunction;
  __errorMessages__.matrixNegativeLineError += coreFunction;
  __errorMessages__.matrixZeroColumnError += coreFunction;
  __errorMessages__.matrixNegativeColumnError += coreFunction;

  __errorMessages__.unequalLinesError += coreFunction;
  __errorMessages__.unequalColumnsError += coreFunction;
  __errorMessages__.unequalStartLinePointsError += coreFunction;
  __errorMessages__.unequalEndLinePointsError += coreFunction;
  __errorMessages__.unequalStartColumnPointsError += coreFunction;
  __errorMessages__.unequalEndColumnPointsError += coreFunction;

  if (__validations__.isZero<Type>(MTObjectOne.lineRefference)) throw systemException (__errorMessages__.matrixZeroLineError);
  if (__validations__.isNegative<Type>(MTObjectOne.lineRefference)) throw systemException (__errorMessages__.matrixNegativeLineError);
  if (__validations__.isZero<Type>(MTObjectOne.columnRefference)) throw systemException (__errorMessages__.matrixZeroColumnError);
  if (__validations__.isNegative<Type>(MTObjectOne.columnRefference)) throw systemException (__errorMessages__.matrixNegativeColumnError);

  if (__validations__.isZero<Type>(MTObjectTwo.lineRefference)) throw systemException (__errorMessages__.matrixZeroLineError);
  if (__validations__.isNegative<Type>(MTObjectTwo.lineRefference)) throw systemException (__errorMessages__.matrixNegativeLineError);
  if (__validations__.isZero<Type>(MTObjectTwo.columnRefference)) throw systemException (__errorMessages__.matrixZeroColumnError);
  if (__validations__.isNegative<Type>(MTObjectTwo.columnRefference)) throw systemException (__errorMessages__.matrixNegativeColumnError);

  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.lineRefference, MTObjectTwo.lineRefference)) throw systemException (__errorMessages__.unequalLinesError);
  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.columnRefference, MTObjectTwo.columnRefference)) throw systemException (__errorMessages__.unequalColumnsError);
  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.startLinePoint, MTObjectTwo.startLinePoint)) throw systemException (__errorMessages__.unequalStartLinePointsError);
  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.endLinePoint, MTObjectTwo.endLinePoint)) throw systemException (__errorMessages__.unequalEndLinePointsError);
  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.startColumnPoint, MTObjectTwo.startColumnPoint)) throw systemException (__errorMessages__.unequalStartColumnPointsError);
  if (__validations__.isNotEqualParameterBased<Type>(MTObjectOne.endColumnPoint, MTObjectTwo.endColumnPoint)) throw systemException (__errorMessages__.unequalEndColumnPointsError);
}

void errorsHandler::standardFileHandler (std::ifstream & file, const char coreFunction[]) {

  __errorMessages__.filesError += coreFunction;

  if (!file.is_open())
    throw systemException(__errorMessages__.filesError);
}

template <class Type> void errorsHandler::zeroNumberHandler (Type parameter, const char coreFunction[]) {

  __errorMessages__.zeroNumberError += coreFunction;

  if (__validations__.isZero<Type>(parameter)) throw systemException(__errorMessages__.zeroNumberError);
}

template <class Type> void errorsHandler::negativeNumberHandler (Type parameter, const char coreFunction[]) {

  __errorMessages__.negativeNumberError += coreFunction;

  if (__validations__.isNegative<Type>(parameter)) throw systemException(__errorMessages__.negativeNumberError);
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

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  srand (time(NULL));

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = (rand() % (limitsObject.maximLimit - limitsObject.minimLimit + 1)) + limitsObject.minimLimit;
}

template <class Type> void randomGenerator::matrixGenerator (matrixType<Type> & MTObject, limits<Type> limitsObject) {

  __handler__.standardHandlerMatrix (MTObject, __PRETTY_FUNCTION__);

  srand (time(NULL));

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++)
    for (size_t jiterator = MTObject.endColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
      MTObject.matrix[iterator][jiterator] = (rand() % (limitsObject.maximLimit - limitsObject.minimLimit + 1)) + limitsObject.minimLimit;
}

template <class Type> void checkAndSupport::readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  std::cin >> ODAObject.length;

  __handler__.standardHandlerOneDimensionalArray(ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cin >> ODAObject.oneDimensionalArray[iterator];
}

template <class Type> void checkAndSupport::readDynamicFileDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ifstream dataStream(fileName, std::ios::in);
  Type data;

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  while (dataStream >> data) {

    ODAObject.oneDimensionalArray[ODAObject.length] = data;
    ODAObject.length += 1;
  }

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  dataStream.close();
}

template <class Type> void checkAndSupport::putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray(ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cout << ODAObject.oneDimensionalArray[iterator] << " ";
}

template <class Type> void checkAndSupport::putsFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray(ODAObject, __PRETTY_FUNCTION__);

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

  dataStream.close();
}

template <class Type> void checkAndSupport::readMatrix (matrixType<Type> & MTObject) {

  std::cin >> MTObject.lineRefference >> MTObject.columnRefference;

  __handler__.standardHandlerMatrix (MTObject, __PRETTY_FUNCTION__);

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++)
      for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
        std::cin >> MTObject.matrix[iterator][jiterator];
}

template <class Type> void checkAndSupport::readDynamicFileMatrix (char * fileName, matrixType<Type> & MTObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  Type data;
  char endOfLine;
  int auxColumnLength = MTObject.columnRefference;

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

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

  __handler__.standardHandlerMatrix (MTObject, __PRETTY_FUNCTION__);

  dataStream.close();
}

template <class Type> void checkAndSupport::putsMatrix (matrixType<Type> & MTObject) {

  __handler__.standardHandlerMatrix (MTObject, __PRETTY_FUNCTION__);

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++) {
      for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
        std::cout << MTObject.matrix[iterator][jiterator] << " ";
      std::cout <<'\n';
  }
}

template <class Type> void checkAndSupport::putsFileMatrix (char * fileName, matrixType<Type> & MTObject) {

  __handler__.standardHandlerMatrix (MTObject, __PRETTY_FUNCTION__);

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  for (size_t iterator = MTObject.startLinePoint; iterator < MTObject.line + MTObject.endLinePoint; iterator++) {
      for (size_t jiterator = MTObject.startColumnPoint; jiterator < MTObject.column + MTObject.endColumnPoint; jiterator++)
        dataStream << MTObject.matrix[iterator][jiterator] << " ";
      dataStream <<'\n';
  }

  dataStream.close();
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

template <class Type> Type checkAndSupport::returnTheMaximumParameter (limits<Type> limitsObject) {

  if (limitsObject.minimLimit >= limitsObject.maximLimit) return limitsObject.minimLimit;

  return limitsObject.maximLimit;
}

template <class Type> Type checkAndSupport::returnTheMinimumParameter (limits<Type> limitsObject) {

  if (limitsObject.minimLimit <= limitsObject.maximLimit) return limitsObject.minimLimit;

  return limitsObject.maximLimit;
}

template <class Type> void checkAndSupport::interchangeValues (Type & parameterOne, Type & parameterTwo) {

  parameterOne = parameterOne + parameterTwo;
  parameterTwo = parameterOne - parameterTwo;
  parameterOne = parameterOne - parameterTwo;
}

template <class Type> void portData::portOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  __handler__.standardHandlerOneDimensionalArray (ODAObjectTwo, __PRETTY_FUNCTION__);

  ODAObjectOne.length = ODAObjectTwo.length;
  ODAObjectOne.startPoint = ODAObjectTwo.startPoint;
  ODAObjectOne.endPoint = ODAObjectTwo.endPoint;

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] = ODAObjectTwo.oneDimensionalArray[iterator];
}

template <class Type> void portData::portMatrices (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  __handler__.standardHandlerMatrix (matrixObjectTwo, __PRETTY_FUNCTION__);

  matrixObjectOne.line = matrixObjectTwo.line;
  matrixObjectOne.column = matrixObjectTwo.column;
  matrixObjectOne.startLinePoint = matrixObjectTwo.startLinePoint;
  matrixObjectOne.endLinePoint = matrixObjectOne.endLinePoint;
  matrixObjectOne.startColumnPoint = matrixObjectTwo.startColumnPoint;
  matrixObjectOne.endColumnPoint = matrixObjectOne.endColumnPoint;

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

  __handler__.equalityHandlerOneDimensionalArrays (ODAObjectOne, ODAObjectTwo, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    if (ODAObjectOne.oneDimensionalArray[iterator] != ODAObjectTwo.oneDimensionalArray[iterator]) return false;

  return true;
}

template <class Type> bool assertions::assertMatrix (matrixType<Type> & MTObjectOne, matrixType<Type> & MTObjectTwo) {

  __handler__.equalityHandlerMatrices (MTObjectOne, MTObjectTwo, __PRETTY_FUNCTION__);

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
