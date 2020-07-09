#include "dependencies/esentialDef.hpp"

template <class Type> void IOSystemOneDimensionalArray::readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  std::cin >> ODAObject.length;

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cin >> ODAObject.oneDimensionalArray[iterator];
}

template <class Type> void IOSystemOneDimensionalArray::readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  dataStream >> ODAObject.length;

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    dataStream >> ODAObject.oneDimensionalArray[iterator];

  dataStream.close();
}

template <class Type> void IOSystemOneDimensionalArray::readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ifstream dataStream(fileName, std::ios::in);
  Type data;
  int iterator = ODAObject.startPoint;

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  while (dataStream >> data) {

      ODAObject.oneDimensionalArray[iterator] = data;
      iterator += 1;
  }

  ODAObject.length = iterator;

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  dataStream.close();
}

template <class Type> void IOSystemOneDimensionalArray::outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    std::cout << ODAObject.oneDimensionalArray[iterator] << " ";

  std::cout << '\n';
}

template <class Type> void IOSystemOneDimensionalArray::outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  dataStream << ODAObject.length << " ";

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

  dataStream << '\n';

  dataStream.close();
}

template <class Type> void IOSystemOneDimensionalArray::outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject) {

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    dataStream << ODAObject.oneDimensionalArray[iterator] << " ";

  dataStream << '\n';

  dataStream.close();
}

template <class Type> void IOSystemMatrices::readMatrix (matrixType<Type> & matrixObject) {

  std::cin >> matrixObject.lineRefference >> matrixObject.columnRefference;

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      std::cin >> matrixObject.matrix[iterator][jiterator];
}

template <class Type> void IOSystemMatrices::readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  dataStream >> matrixObject.lineRefference >> matrixObject.columnRefference;

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      dataStream >> matrixObject.matrix[iterator][jiterator];

  dataStream.close();
}

template <class Type> void IOSystemMatrices::readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  Type data;
  char endOfLine;
  int auxColumnLength = matrixObject.columnRefference;

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

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

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  dataStream.close();
}

template <class Type> void IOSystemMatrices::outputMatrix (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      std::cout << matrixObject.matrix[iterator][jiterator] << " ";

    std::cout << '\n';
  }
}

template <class Type> void IOSystemMatrices::outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

    dataStream << matrixObject.line << " " << matrixObject.column << '\n';

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
        dataStream << matrixObject.matrix[iterator][jiterator] << " ";
      dataStream << " ";
    }

  dataStream.close();
}

template <class Type> void IOSystemMatrices::outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  std::ofstream dataStream(fileName, std::ios::out);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      dataStream << matrixObject.matrix[iterator][jiterator] << " ";
    dataStream << " ";
  }

  dataStream.close();
}

template <class Type> void IOSystemTrees::createTree (binaryTreeType<Type> * & treeObject) {

  Type value;

  std::cin >> value;

  if (__validations__.isNotZero(value)) {

    treeObject = new binaryTreeType<Type>;
    treeObject->value = value;

    createTree (treeObject->leftLeaf);
    createTree (treeObject->rightLeaf);

  } else treeObject = NULL;
}

template <class Type> void IOSystemTrees::deleteTree (binaryTreeType<Type> * & treeObject) {

  if (__validations__.isNotNull(treeObject)) {

    deleteTree (treeObject->leftLeaf);
    deleteTree (treeObject->rightLeaf);
    delete treeObject;
  }
}

template <class Type> void IOSystemTrees::RootLeftRightPreOrder (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL) {

    std::cout << treeObject->value << " ";

    RootLeftRightPreOrder (treeObject->leftLeaf);
    RootLeftRightPreOrder (treeObject->rightLeaf);
  }
}

template <class Type> void IOSystemTrees::LeftRootRightPostOrder (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL) {

    LeftRootRightPostOrder (treeObject->leftLeaf);
    LeftRootRightPostOrder (treeObject->rightLeaf);

    std::cout << treeObject->value << " ";
  }
}

template <class Type> void IOSystemTrees::LeftRootRightInOrder (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL) {

    LeftRootRightInOrder (treeObject->leftLeaf);

    std::cout << treeObject->value << " ";

    LeftRootRightInOrder (treeObject->rightLeaf);
  }
}

template <class Type> void IOSystemTrees::reachTreeOnLevels (binaryTreeType<Type> * treeObject, int level) {

  if (treeObject != NULL) {

    std::cout << treeObject->value << " - " << level << '\n';
    reachTreeOnLevels (treeObject->leftLeaf, level + 1);
    reachTreeOnLevels (treeObject->rightLeaf, level + 1);
  }
}

template <class Type> void IOSystemGraphs::readAdjacencyMatrix (graphType<Type> & graphObject) {

  __handler__.standardHandlerMatrix (graphObject.adjacencyMatrix, __PRETTY_FUNCTION__);

  for (size_t iterator = graphObject.adjacencyMatrix.startLinePoint; iterator < graphObject.adjacencyMatrix.line + graphObject.adjacencyMatrix.endLinePoint; iterator++)
    for (size_t jiterator = graphObject.adjacencyMatrix.startColumnPoint; jiterator < graphObject.adjacencyMatrix.column + graphObject.adjacencyMatrix.endColumnPoint; jiterator++)
      std::cin >> graphObject.adjacencyMatrix.matrix[iterator][jiterator];
}

template <class Type> void IOSystemGraphs::readFileAdjacencyMatrix (char * fileName, graphType<Type> & graphObject) {

  std::ifstream dataStream(fileName, std::ios::in);
  Type data;

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  dataStream >> graphObject.adjacencyMatrix.line >> graphObject.adjacencyMatrix.column;

  __handler__.standardHandlerOneDimensionalArray (graphObject.adjacencyMatrix);

  for (size_t iterator = graphObject.adjacencyMatrix.startLinePoint; iterator < graphObject.adjacencyMatrix.line + graphObject.adjacencyMatrix.endLinePoint; iterator++)
    for (size_t jiterator = graphObject.adjacencyMatrix.startColumnPoint; jiterator < graphObject.adjacencyMatrix.column + graphObject.adjacencyMatrix.endColumnPoint; jiterator++)
      dataStream >> graphObject.adjacencyMatrix.matrix[iterator][jiterator];

  dataStream.close();
}

template <class Type> void IOSystemGraphs::readGraphByEdgesList (graphType<Type> & graphObject) {

  Type nodeValueOne, nodeValueTwo;

  std::cin >> graphObject.vertices >> graphObject.edges;

  __handler__.zeroNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  __handler__.negativeNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  for (size_t iterator = 0; iterator < graphObject.edges; iterator++) {

    do {

      std::cin >> nodeValueOne >> nodeValueTwo;

    } while(nodeValueOne < 1 || nodeValueOne > graphObject.vertices || nodeValueTwo < 1 || nodeValueTwo > graphObject.vertices);

    graphObject.adjacencyMatrix.matrix[nodeValueOne][nodeValueTwo] = graphObject.adjacencyMatrix.matrix[nodeValueTwo][nodeValueOne] = 1;
  }
}

template <class Type> void IOSystemGraphs::readFileGraphByEdgesList (char * fileName, graphType<Type> & graphObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  Type nodeValueOne, nodeValueTwo;

  dataStream >> graphObject.vertices >> graphObject.edges;

  __handler__.zeroNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  __handler__.negativeNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  for (size_t iterator = 0; iterator < graphObject.edges; iterator++) {

    do {

      dataStream >> nodeValueOne >> nodeValueTwo;

    } while(nodeValueOne < 1 || nodeValueOne > graphObject.vertices || nodeValueTwo < 1 || nodeValueTwo > graphObject.vertices);

    graphObject.adjacencyMatrix.matrix[nodeValueOne][nodeValueTwo] = graphObject.adjacencyMatrix.matrix[nodeValueTwo][nodeValueOne] = 1;
  }

  dataStream.close();
}

template <class Type> void IOSystemGraphs::readDirectedGraphByEdgesList (graphType<Type> & graphObject) {

  Type nodeValueOne, nodeValueTwo;

  std::cin >> graphObject.vertices >> graphObject.edges;

  __handler__.zeroNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  __handler__.negativeNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  for (size_t iterator = 0; iterator < graphObject.edges; iterator++) {

    do {

      std::cin >> nodeValueOne >> nodeValueTwo;

    } while(nodeValueOne < 1 || nodeValueOne > graphObject.vertices || nodeValueTwo < 1 || nodeValueTwo > graphObject.vertices);

    graphObject.adjacencyMatrix.matrix[nodeValueOne][nodeValueTwo] = 1;
  }
}

template <class Type> void IOSystemGraphs::readFileDirectedGraphByEdgesList (char * fileName, graphType<Type> & graphObject) {

  std::ifstream dataStream(fileName, std::ios::in);

  __handler__.standardFileHandler (dataStream, __PRETTY_FUNCTION__);

  Type nodeValueOne, nodeValueTwo;

  dataStream >> graphObject.vertices >> graphObject.edges;

  __handler__.zeroNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  __handler__.negativeNumberHandler (graphObject.vertices, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (graphObject.edges, __PRETTY_FUNCTION__);

  for (size_t iterator = 0; iterator < graphObject.edges; iterator++) {

    do {

      dataStream >> nodeValueOne >> nodeValueTwo;

    } while(nodeValueOne < 1 || nodeValueOne > graphObject.vertices || nodeValueTwo < 1 || nodeValueTwo > graphObject.vertices);

    graphObject.adjacencyMatrix.matrix[nodeValueOne][nodeValueTwo] = 1;
  }

  dataStream.close();
}

void IOSystemComplexNumbers::readComplexData (complexNumber * number) {

  for (size_t iterator = 0; iterator < number->complexNumberLength; iterator++) {
    scanf("%f", &number[iterator].realPart);
    scanf("%f", &number[iterator].imaginaryPart);
  }
}

void IOSystemComplexNumbers::outputComplexData (complexNumber *number) {

    std::cout << number->realPart << " " << number->imaginaryPart << '\n';
}

void IOSystemCharArray::readCharArray (char charArray[], int size) {

  std::cin.getline(charArray, size);
}

void IOSystemCharArray::outputCharArray (char charArray[]) {

  for (int iterator = 0; iterator < strlen(charArray); iterator++)
    std::cout << charArray[iterator] << " ";
}

template <class Type> Type IOSystemDirectFlow::readDirectFlowData () {

  Type result;

  std::cin >> result;

  return result;
}

template <class Type> oneDimensionalArrayType<Type> IOSystemDirectFlow::readDirectFlowOneDimensionalArray () {

  oneDimensionalArrayType<Type> ODAObject;

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length; iterator++)
    std::cin >> ODAObject.oneDimensionalArray[iterator];

  return ODAObject;
}

template <class Type> matrixType<Type> IOSystemDirectFlow::readDirectFlowMatrix () {

  matrixType<Type> matrixObject;

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      std::cin >> matrixObject.matrix[iterator][jiterator];

  return matrixObject;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type minimumValue = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (minimumValue >= ODAObject.oneDimensionalArray[iterator])
      minimumValue = ODAObject.oneDimensionalArray[iterator];

  return minimumValue;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

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

    return __support__.returnTheMinimumParameterWithObject<Type> (returningIntervalCaseOne);
  } else {

    middle = (interval.minimLimit + interval.maximLimit) / 2;

    leftWing.minimLimit = interval.minimLimit;
    leftWing.maximLimit = middle;

    rightWing.minimLimit = middle + 1;
    rightWing.maximLimit = interval.maximLimit;

    leftRightLimits.minimLimit = getMinimumValueOneDimensionalArrayDivideEtEmpera<Type> (leftWing, ODAObject);
    leftRightLimits.maximLimit = getMinimumValueOneDimensionalArrayDivideEtEmpera<Type> (rightWing, ODAObject);

    return __support__.returnTheMinimumParameterWithObject<Type> (leftRightLimits);
  }
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type maximumValue = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (maximumValue <= ODAObject.oneDimensionalArray[iterator])
      maximumValue = ODAObject.oneDimensionalArray[iterator];

  return maximumValue;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

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

    return __support__.returnTheMaximumParameterWithObject<Type> (returningIntervalCaseOne);
  } else {

    middle = (interval.minimLimit + interval.maximLimit) / 2;

    leftWing.minimLimit = interval.minimLimit;
    leftWing.maximLimit = middle;

    rightWing.minimLimit = middle + 1;
    rightWing.maximLimit = interval.maximLimit;

    leftRightLimits.minimLimit = getMaximumValueOneDimensionalArrayDivideEtEmpera<Type> (leftWing, ODAObject);
    leftRightLimits.maximLimit = getMaximumValueOneDimensionalArrayDivideEtEmpera<Type> (rightWing, ODAObject);

    return __support__.returnTheMaximumParameterWithObject<Type> (leftRightLimits);
  }
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type sum = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    sum += ODAObject.oneDimensionalArray[iterator];

  return sum;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type product = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    product *= ODAObject.oneDimensionalArray[iterator];

  return product;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsDifference(oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type difference = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    difference -= ODAObject.oneDimensionalArray[iterator];

  return difference;
}

template <class Type> Type oneDimensionalArraysWorkFlow::getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type division = ODAObject.oneDimensionalArray[0];

  for (size_t iterator = ODAObject.startPoint + 1; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    division /= ODAObject.oneDimensionalArray[iterator];

  return division;
}

template <class Type> float oneDimensionalArraysWorkFlow::getOneDimensionalArrayMean (oneDimensionalArrayType<Type> ODAObject) {

  Type sumODAObject = getOneDimensionalArrayElementsSum<Type> (ODAObject);

  return float (sumODAObject / ODAObject.length);
}

template <class Type> void oneDimensionalArraysWorkFlow::oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = initializator;
}

template <class Type> bool oneDimensionalArraysWorkFlow::checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

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

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.length + ODAObject.endPoint; iterator > valueAndPosition.maximLimit + ODAObject.startPoint; iterator--)
    ODAObject.oneDimensionalArray[iterator + 1] = ODAObject.oneDimensionalArray[iterator];

  int position = static_cast<int> (valueAndPosition.maximLimit);

  ODAObject.oneDimensionalArray[position + ODAObject.startPoint] = valueAndPosition.minimLimit;
}

template <class Type> bool oneDimensionalArraysWorkFlow::isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    if (value == ODAObject.oneDimensionalArray[iterator]) return true;

  return false;
}

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

template <class Type> void oneDimensionalArraysWorkFlow::normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] = sortAndNormalizeNumber<int> (ODAObject.oneDimensionalArray[iterator]);
}

int oneDimensionalArraysWorkFlow::getNumberLength (int number) {

  __handler__.zeroNumberHandler(number, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler(number, __PRETTY_FUNCTION__);

  int length = 0;

  while (number != 0) {

    length += 1;
    number /= 10;
  }

  return length;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::convertNumberToOneDimensionalArray (int number) {

  __handler__.zeroNumberHandler(number, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler(number, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<Type> numberElementsOneDimensionalArray;

  numberElementsOneDimensionalArray.length = getNumberLength(number);

  for (size_t iterator = numberElementsOneDimensionalArray.startPoint; iterator < numberElementsOneDimensionalArray.length + numberElementsOneDimensionalArray.endPoint; iterator++) {
    numberElementsOneDimensionalArray.oneDimensionalArray[iterator] = number % 10;
    number /= 10;
  }

  return numberElementsOneDimensionalArray;
}

template <class Type> void oneDimensionalArraysWorkFlow::boostUpOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type factor) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] *= factor;
}

template <class Type> void oneDimensionalArraysWorkFlow::boostDownOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type factor) {

   __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    ODAObject.oneDimensionalArray[iterator] /= factor;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  __handler__.startEndPointsHandlerOneDimensionalArrays (ODAObjectOne, ODAObjectTwo, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] += ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  __handler__.startEndPointsHandlerOneDimensionalArrays (ODAObjectOne, ODAObjectTwo, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] *= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  __handler__.startEndPointsHandlerOneDimensionalArrays (ODAObjectOne, ODAObjectTwo, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] -= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> oneDimensionalArraysWorkFlow::getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo) {

  __handler__.startEndPointsHandlerOneDimensionalArrays (ODAObjectOne, ODAObjectTwo, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObjectOne.startPoint; iterator < ODAObjectOne.length + ODAObjectOne.endPoint; iterator++)
    ODAObjectOne.oneDimensionalArray[iterator] /= ODAObjectTwo.oneDimensionalArray[iterator];

  return ODAObjectOne;
}

template <class Type> bool oneDimensionalArraysWorkFlow::checkIfEqualOneDimensionalArrays (oneDimensionalArrayType<Type> firstODA, oneDimensionalArrayType<Type> secondODA) {

  __handler__.equalityHandlerOneDimensionalArrays (firstODA, secondODA);

  for (size_t iterator = firstODA.startPoint; iterator < firstODA.length + firstODA.endPoint; iterator++)
    if (firstODA.oneDimensionalArray[iterator] != secondODA.oneDimensionalArray[iterator])
      return false;

  return true;
}

template <class Type> void sortAlgorithmsOneDimensionalArray::bubbleSort (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = ODAObject.startPoint; jiterator < ODAObject.length + ODAObject.endPoint - iterator - 1; jiterator++)
      if (ODAObject.oneDimensionalArray[jiterator] > ODAObject.oneDimensionalArray[jiterator + 1])
      __support__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + 1]);
}

template <class Type> void sortAlgorithmsOneDimensionalArray::minimumValueSort (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = iterator + 1; jiterator < ODAObject.length + ODAObject.endPoint; jiterator++)
      if (ODAObject.oneDimensionalArray[iterator] > ODAObject.oneDimensionalArray[jiterator])
        __support__.interchangeValues (ODAObject.oneDimensionalArray[iterator], ODAObject.oneDimensionalArray[jiterator]);
}

template <class Type> void sortAlgorithmsOneDimensionalArray::insertionSort (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

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

template <class Type> void sortAlgorithmsOneDimensionalArray::selectionSort (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
    for (size_t jiterator = iterator + 1; jiterator < ODAObject.length + ODAObject.endPoint; jiterator++)
      if (ODAObject.oneDimensionalArray[iterator] > ODAObject.oneDimensionalArray[jiterator])
        __support__.interchangeValues (ODAObject.oneDimensionalArray[iterator], ODAObject.oneDimensionalArray[jiterator]);
}

template <class Type> void sortAlgorithmsOneDimensionalArray::shellSort (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  Type jiterator, step;

  step = ODAObject.length / 2;

  while (step > 0) {

    for (size_t iterator = step; iterator < ODAObject.length; iterator++) {
      jiterator = iterator - step;
      while (jiterator >= 0)
        if (ODAObject.oneDimensionalArray[jiterator] > ODAObject.oneDimensionalArray[jiterator + step]) {
        __support__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + step]);
        jiterator -= step;
      } else jiterator -= 1;
    }
    step /= 2;
  }
}

template <class Type> void sortAlgorithmsOneDimensionalArray::reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (size_t iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint - 1; iterator++)
    for (size_t jiterator = ODAObject.startPoint; jiterator < ODAObject.length + ODAObject.endPoint - iterator - 1; jiterator++)
      if (ODAObject.oneDimensionalArray[jiterator] < ODAObject.oneDimensionalArray[jiterator + 1])
      __support__.interchangeValues (ODAObject.oneDimensionalArray[jiterator], ODAObject.oneDimensionalArray[jiterator + 1]);
}

template <class Type> Type matricesWorkFlow::getMaximumValueFromMatrix (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type maximumValue = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (maximumValue < matrixObject.matrix[iterator][jiterator]) maximumValue = matrixObject.matrix[iterator][jiterator];

  return maximumValue;
}

template <class Type> Type matricesWorkFlow::getMinimumValueFromMatrix (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type minimumValue = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (minimumValue > matrixObject.matrix[iterator][jiterator]) minimumValue = matrixObject.matrix[iterator][jiterator];

  return minimumValue;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsSum (matrixType<Type> matrixObject)  {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type sum = 0;

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      sum += matrixObject.matrix[iterator][jiterator];

  return sum;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsProduct (matrixType<Type> matrixObject)  {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type product = 1;

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      product *= matrixObject.matrix[iterator][jiterator];

  return product;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsDifference (matrixType<Type> matrixObject)  {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type difference = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++) {
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      difference -= matrixObject.matrix[iterator][jiterator];
  }

  return difference;
}

template <class Type> Type matricesWorkFlow::getMatrixElementsDivision (matrixType<Type> matrixObject)  {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  Type division = matrixObject.matrix[0][0];

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      division /= matrixObject.matrix[iterator][jiterator];

  return division;
}

template <class Type> void matricesWorkFlow::matrixInitialization (matrixType<Type> & matrixObject, Type value) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      matrixObject.matrix[iterator][jiterator] = value;
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

template <class Type> void matricesWorkFlow::normalizeMatrix (matrixType<Type> & matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      matrixObject.matrix[iterator][jiterator] = sortAndNormalizeNumber (matrixObject.matrix[iterator][jiterator]);
}

template <class Type> void matricesWorkFlow::boostUpMatrix (matrixType<Type> & matrixObject, Type factor) {

    __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
        matrixObject.matrix[iterator][jiterator] *= factor;
}

template <class Type> void matricesWorkFlow::boostDownMatrix (matrixType<Type> & matrixObject, Type factor) {

    __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

    for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
      for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
        matrixObject.matrix[iterator][jiterator] /= factor;
}

template <class Type> matrixType<Type> matricesWorkFlow::getMatricesSum (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  __handler__.equalityHandlerMatrices (matrixObjectOne, matrixObjectTwo);

  for (size_t iterator = matrixObjectOne.startLinePoint; iterator < matrixObjectOne.lineRefference + matrixObjectOne.endLinePoint; iterator++)
    for (size_t jiterator = matrixObjectOne.startColumnPoint; jiterator < matrixObjectOne.columnRefference + matrixObjectOne.endColumnPoint; jiterator++)
      matrixObjectOne.matrix[iterator][jiterator] += matrixObjectTwo.matrix[iterator][jiterator];

  return matrixObjectOne;
}

template <class Type> matrixType<Type> matricesWorkFlow::getMatricesProduct (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  __handler__.equalityHandlerMatrices (matrixObjectOne, matrixObjectTwo);

  for (size_t iterator = matrixObjectOne.startLinePoint; iterator < matrixObjectOne.lineRefference + matrixObjectOne.endLinePoint; iterator++)
    for (size_t jiterator = matrixObjectOne.startColumnPoint; jiterator < matrixObjectOne.columnRefference + matrixObjectOne.endColumnPoint; jiterator++)
      matrixObjectOne.matrix[iterator][jiterator] *= matrixObjectTwo.matrix[iterator][jiterator];

  return matrixObjectOne;
}

template <class Type> matrixType<Type> matricesWorkFlow::getMatricesDifference (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  __handler__.equalityHandlerMatrices (matrixObjectOne, matrixObjectTwo);

  for (size_t iterator = matrixObjectOne.startLinePoint; iterator < matrixObjectOne.lineRefference + matrixObjectOne.endLinePoint; iterator++)
    for (size_t jiterator = matrixObjectOne.startColumnPoint; jiterator < matrixObjectOne.columnRefference + matrixObjectOne.endColumnPoint; jiterator++)
      matrixObjectOne.matrix[iterator][jiterator] -= matrixObjectTwo.matrix[iterator][jiterator];

  return matrixObjectOne;
}

template <class Type> matrixType<Type> matricesWorkFlow::getMatricesDivision (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo) {

  __handler__.equalityHandlerMatrices (matrixObjectOne, matrixObjectTwo);

  for (size_t iterator = matrixObjectOne.startLinePoint; iterator < matrixObjectOne.lineRefference + matrixObjectOne.endLinePoint; iterator++)
    for (size_t jiterator = matrixObjectOne.startColumnPoint; jiterator < matrixObjectOne.columnRefference + matrixObjectOne.endColumnPoint; jiterator++)
      matrixObjectOne.matrix[iterator][jiterator] /= matrixObjectTwo.matrix[iterator][jiterator];

  return matrixObjectOne;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixMainDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator == jiterator) {
        matrixObject.mainDiagonal.oneDimensionalArray[matrixObject.mainDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.mainDiagonal.length += 1;
      }

  return matrixObject.mainDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixAboveMainDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator < jiterator) {
        matrixObject.aboveMainDiagonal.oneDimensionalArray[matrixObject.aboveMainDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.aboveMainDiagonal.length += 1;
      }

  return matrixObject.aboveMainDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixUnderMainDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator > jiterator) {
        matrixObject.underMainDiagonal.oneDimensionalArray[matrixObject.underMainDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.underMainDiagonal.length += 1;
      }

  return matrixObject.underMainDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixSecondaryDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator + jiterator == matrixObject.line - 1) {
        matrixObject.secondaryDiagonal.oneDimensionalArray[matrixObject.secondaryDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.secondaryDiagonal.length += 1;
      }

  return matrixObject.secondaryDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixAboveSecondaryDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator + jiterator < matrixObject.line - 1) {
        matrixObject.aboveSecondaryDiagonal.oneDimensionalArray[matrixObject.aboveSecondaryDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.aboveSecondaryDiagonal.length += 1;
      }

  return matrixObject.aboveSecondaryDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixUnderSecondaryDiagonal (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator + jiterator > matrixObject.line - 1) {
        matrixObject.underSecondaryDiagonal.oneDimensionalArray[matrixObject.underSecondaryDiagonal.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.underSecondaryDiagonal.length += 1;
      }

  return matrixObject.underSecondaryDiagonal;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixNorthElements (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator < jiterator && iterator + jiterator < matrixObject.line - 1) {
        matrixObject.northElements.oneDimensionalArray[matrixObject.northElements.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.northElements.length += 1;
      }

  return matrixObject.northElements;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixSouthElements (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator > jiterator && iterator + jiterator > matrixObject.line - 1) {
        matrixObject.southElements.oneDimensionalArray[matrixObject.southElements.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.southElements.length += 1;
      }

  return matrixObject.southElements;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixEastElements (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator > jiterator && iterator + jiterator < matrixObject.line - 1) {
        matrixObject.eastElements.oneDimensionalArray[matrixObject.eastElements.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.eastElements.length += 1;
      }

  return matrixObject.eastElements;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixWestElements (matrixType<Type> matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator < jiterator && iterator + jiterator > matrixObject.line - 1) {
        matrixObject.westElements.oneDimensionalArray[matrixObject.westElements.length] = matrixObject.matrix[iterator][jiterator];
        matrixObject.westElements.length += 1;
      }

  return matrixObject.westElements;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixOrderMainDiagonal (matrixType<Type> matrixObject, int order) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<Type> oneDimensionalArrayValuesFromOrder;

  for (int iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (int jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (abs(iterator + jiterator) == order) {
        oneDimensionalArrayValuesFromOrder.oneDimensionalArray[oneDimensionalArrayValuesFromOrder.length] = matrixObject.matrix[iterator][jiterator];
        oneDimensionalArrayValuesFromOrder.length += 1;
      }

  return oneDimensionalArrayValuesFromOrder;
}

template <class Type> oneDimensionalArrayType<Type> matricesWorkFlow::getMatrixOrderSecondaryDiagonal (matrixType<Type> matrixObject, int order) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  oneDimensionalArrayType<Type> oneDimensionalArrayValuesFromOrder;

  for (int iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (int jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (abs(iterator + jiterator - matrixObject.line - 1) == order) {
        oneDimensionalArrayValuesFromOrder.oneDimensionalArray[oneDimensionalArrayValuesFromOrder.length] = matrixObject.matrix[iterator][jiterator];
        oneDimensionalArrayValuesFromOrder.length += 1;
      }

  return oneDimensionalArrayValuesFromOrder;
}

template <class Type> bool matricesWorkFlow::checkIfEqualMatrices (matrixType<Type> matrixOne, matrixType<Type> matrixTwo) {

  __handler__.equalityHandlerMatrices (matrixOne, matrixTwo);

  for (int iterator = matrixOne.startLinePoint; iterator < matrixOne.lineRefference + matrixOne.endPoint; iterator++)
    for (int jiterator = matrixOne.startColumnPoint; jiterator < matrixOne.columnRefference; jiterator++)
      if (matrixOne.matrix[iterator][jiterator] != matrixTwo.matrix[iterator][jiterator])
        return false;

  return true;
}

template <class Type> bool searchEnginesWorkFlow::findValueByBinarySearch (oneDimensionalArrayType<Type> ODAObject, Type valueToSearch) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  int leftIndex = ODAObject.startPoint;
  int rightIndex = ODAObject.length - 1;

  while (leftIndex <= rightIndex) {

    int middleIndex = (leftIndex + rightIndex) / 2;

    if (valueToSearch == ODAObject.oneDimensionalArray[middleIndex]) return true;
    if (valueToSearch < ODAObject.oneDimensionalArray[middleIndex]) rightIndex = middleIndex - 1;
    if (valueToSearch > ODAObject.oneDimensionalArray[middleIndex]) leftIndex = middleIndex + 1;
  }

  return false;
}

template <class Type> bool searchEnginesWorkFlow::findValueByLinearSearchOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type valueToSearch) {

  __handler__.standardHandlerOneDimensionalArray (ODAObject, __PRETTY_FUNCTION__);

  for (int iterator = ODAObject.startPoint; iterator < ODAObject.length + ODAObject.endPoint; iterator++)
      if (valueToSearch == ODAObject.oneDimensionalArray[iterator])
        return true;

  return false;
}

template <class Type> bool searchEnginesWorkFlow::findValueByLinearSearchMatrix (matrixType<Type> MObject, Type valueToSearch) {

  __handler__.standardHandlerMatrix (MObject, __PRETTY_FUNCTION__);

  for (size_t iterator = MObject.startLinePoint; iterator < MObject.lineRefference + MObject.endLinePoint; iterator++)
    for (size_t jiterator = MObject.startColumnPoint; jiterator < MObject.columnRefference + MObject.endColumnPoint; jiterator++)
      if (MObject.matrix[iterator][jiterator] == valueToSearch)
        return true;

  return false;

}

template <class Type> Type fundamentalAlgorithmsWorkFlow::getGaussSum (Type limit) {

  return (limit * (limit + 1) / 2);
}

int fundamentalAlgorithmsWorkFlow::getThe_N_FactorialNumber (int parameter) {

  __handler__.negativeNumberHandler(parameter, __PRETTY_FUNCTION__);

  int factorialNumber = 1;

  for (size_t iterator = 1; iterator <= parameter; iterator++)
    factorialNumber *= iterator;

  return factorialNumber;
}

int fundamentalAlgorithmsWorkFlow::getThe_N_FactorialNumberRecursive (int parameter) {

  __handler__.negativeNumberHandler(parameter, __PRETTY_FUNCTION__);

  if (parameter == 0 || parameter == 1) return 1;

  return parameter * getThe_N_FactorialNumberRecursive (parameter - 1);
}

int fundamentalAlgorithmsWorkFlow::getThe_N_mannaPnueliNumber (int parameter) {

  __handler__.negativeNumberHandler(parameter, __PRETTY_FUNCTION__);

  if (parameter >= 12) return parameter - 1;

  return getThe_N_mannaPnueliNumber(getThe_N_mannaPnueliNumber(parameter + 2));
}

int fundamentalAlgorithmsWorkFlow::getThe_N_ackermanNumber (int minimLimit, int maximLimit) {

  __handler__.negativeNumberHandler(minimLimit, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler(maximLimit, __PRETTY_FUNCTION__);

  if (__validations__.isZero(minimLimit)) return maximLimit + 1;

  if (__validations__.isZero(maximLimit)) return getThe_N_ackermanNumber(minimLimit - 1, 1);

  return getThe_N_ackermanNumber(minimLimit - 1, getThe_N_ackermanNumber(minimLimit, maximLimit - 1));
}

int fundamentalAlgorithmsWorkFlow::getThe_N_eulerianNumber (int minimLimit, int maximLimit) {

  __handler__.negativeNumberHandler(minimLimit, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler(maximLimit, __PRETTY_FUNCTION__);

  if (__validations__.isZero(maximLimit) || maximLimit == minimLimit - 1) return 1;

    return (minimLimit - maximLimit) * getThe_N_eulerianNumber(minimLimit - 1, maximLimit - 1) + (maximLimit + 1) * getThe_N_eulerianNumber(minimLimit - 1, maximLimit);
}

int fundamentalAlgorithmsWorkFlow::getThe_N_catalanNumber (int parameter) {

  if (parameter <= 1) return 1;

  int res = 0;

  for (size_t iterator = 0; iterator < parameter; iterator++)
    res += getThe_N_catalanNumber(iterator) * getThe_N_catalanNumber(parameter - iterator - 1);

  return res;
}

int fundamentalAlgorithmsWorkFlow::getThe_N_fibonacciNumber (int parameter) {

  __handler__.negativeNumberHandler(parameter, __PRETTY_FUNCTION__);

  int auxiliarVarOne = 0, auxiliarVarTwo = 1, auxiliarVarThree;

  if (parameter == 0) return auxiliarVarOne;

  for (size_t iterator = 2; iterator <= parameter; iterator++) {

    auxiliarVarThree = auxiliarVarOne + auxiliarVarTwo;
    auxiliarVarOne = auxiliarVarTwo;
    auxiliarVarTwo = auxiliarVarThree;
  }

  return auxiliarVarTwo;
}

int fundamentalAlgorithmsWorkFlow::getThe_N_fibonacciNumberRecursive (int parameter) {

  __handler__.negativeNumberHandler(parameter, __PRETTY_FUNCTION__);

  if (parameter == 1 || parameter == 2) return 1;

  return getThe_N_fibonacciNumberRecursive(parameter - 1) + getThe_N_fibonacciNumberRecursive(parameter - 2);
}

  int fundamentalAlgorithmsWorkFlow::getThe_N_masterTheoremNumber (int parameter) {

  if (parameter == 1) return 1;

  return 2 * getThe_N_masterTheoremNumber (parameter / 2) + parameter;
}

complexNumber complexNumbersWorkFlow::complexNumbersProduct (complexNumber * numberOne, complexNumber * numberTwo) {

  complexNumber resultedComplexNumber;
  float realPartProduct, imaginaryPartProduct;

  realPartProduct = numberOne->realPart * numberTwo->realPart;
  imaginaryPartProduct = numberOne->imaginaryPart * numberTwo->imaginaryPart;

  resultedComplexNumber.realPart = realPartProduct - imaginaryPartProduct;
  resultedComplexNumber.imaginaryPart = (numberOne->realPart + numberOne->imaginaryPart) * (numberTwo->realPart + numberTwo->imaginaryPart) - realPartProduct - imaginaryPartProduct;

  return resultedComplexNumber;
}

complexNumber complexNumbersWorkFlow::complexNumberSum (complexNumber * numberOne, complexNumber * numberTwo) {

  complexNumber resultedComplexNumber;
  float realPartSum, imaginaryPartSum;

  realPartSum = numberOne->realPart + numberTwo->realPart;
  imaginaryPartSum = numberOne->imaginaryPart + numberTwo->imaginaryPart;

  resultedComplexNumber.realPart = realPartSum;
  resultedComplexNumber.imaginaryPart = imaginaryPartSum;

  return resultedComplexNumber;
}

complexNumber complexNumbersWorkFlow::complexNumberDifference (complexNumber * numberOne, complexNumber * numberTwo) {

  complexNumber resultedComplexNumber;
  float realPartSum, imaginaryPartSum;

  realPartSum = numberOne->realPart - numberTwo->realPart;
  imaginaryPartSum = numberOne->imaginaryPart - numberTwo->imaginaryPart;

  resultedComplexNumber.realPart = realPartSum;
  resultedComplexNumber.imaginaryPart = imaginaryPartSum;

  return resultedComplexNumber;
}

int numbersPropertiesWorkFlow::getTheLargestCommonDivisor (limits<int> interval) {

  __handler__.negativeNumberHandler (interval.minimLimit, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (interval.maximLimit, __PRETTY_FUNCTION__);

  int copyMinimLimit, copyMaximLimit, rest;

  copyMinimLimit = interval.minimLimit;
  copyMaximLimit = interval.maximLimit;

  if (__validations__.isZero(copyMaximLimit)) copyMinimLimit = copyMaximLimit;
  else {

    rest = copyMinimLimit % copyMaximLimit;

    while (rest != 0) {
      copyMinimLimit = copyMaximLimit;
      copyMaximLimit = rest;
      rest = copyMinimLimit % copyMaximLimit;

    }
  }

  return copyMaximLimit;
}

int numbersPropertiesWorkFlow::getTheLargestCommonDivisorRecursive (limits<int> interval) {

  __handler__.negativeNumberHandler (interval.minimLimit, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (interval.maximLimit, __PRETTY_FUNCTION__);

  if (__validations__.isZero(interval.maximLimit)) return interval.minimLimit;
  else if (__validations__.isEqualObjectBased(interval)) return interval.maximLimit;
  else if (interval.maximLimit > interval.minimLimit) {

    interval.maximLimit = interval.maximLimit % interval.minimLimit;

    return getTheLargestCommonDivisorRecursive (interval);
  }
  else {

    interval.minimLimit = interval.maximLimit;
    interval.maximLimit = interval.minimLimit % interval.maximLimit;

    return getTheLargestCommonDivisorRecursive (interval);
  }
}

int numbersPropertiesWorkFlow::getTheLargestCommonDivisorOfTwoNumbers (int numberOne, int numberTwo) {

  __handler__.negativeNumberHandler (numberOne, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (numberTwo, __PRETTY_FUNCTION__);

  while (numberOne != numberTwo) {
    if (numberOne > numberTwo)
      numberOne -= numberTwo;
    else
      numberTwo -= numberOne;
  }

  return numberOne;
}

int numbersPropertiesWorkFlow::getLeastCommonMultiple (limits<int> interval) {

  return (interval.minimLimit * interval.maximLimit) / getTheLargestCommonDivisor(interval);
}

int numbersPropertiesWorkFlow::getLeastCommonMultipleOfTwoNumbers (int numberOne, int numberTwo) {

  return (numberOne * numberTwo) / getTheLargestCommonDivisorOfTwoNumbers (numberOne, numberTwo);
}

int numbersPropertiesWorkFlow::getPrimevalue (int parameter) {

  if (__validations__.isNegativeOrZero(parameter)) return 0;
  if (parameter == 2) return 2;

  for (size_t iterator = 2; iterator <= parameter / 2; iterator++)
    if (parameter % iterator == 0) return 0;

  return parameter;
}

int numbersPropertiesWorkFlow::reverseNumber (int parameter) {

    int reversedValue = 0;

    while (parameter != 0) {

      reversedValue = (reversedValue * 10) + parameter % 10;
      parameter /= 10;
    }

    return reversedValue;
}

int numbersPropertiesWorkFlow::getPalindromValue (int parameter) {

  if (__validations__.isNegativeOrZero(parameter)) return 0;

  if (reverseNumber(parameter) == parameter) return parameter;

  return 0;
}

float numbersPropertiesWorkFlow::getMeanOfTwoNumbers (float parameterOne, float parameterTwo) {

  if (__validations__.isZero(parameterOne)) return parameterTwo / 2;
  if (__validations__.isZero(parameterTwo)) return parameterOne / 2;

  return (float)(parameterOne + parameterTwo) / 2;
}

void numbersPropertiesWorkFlow::interchangeValuesViaPointers (int * parameterOne, int * parameterTwo) {

  * parameterOne = * parameterOne + * parameterTwo;
  * parameterTwo = * parameterOne - * parameterTwo;
  * parameterOne = * parameterOne - * parameterTwo;
}

void numbersPropertiesWorkFlow::interchangeValuesViaDisclosiveDisjunction (int & parameterOne, int & parameterTwo) {

  parameterOne = parameterOne + parameterTwo;
  parameterTwo = parameterOne - parameterTwo;
  parameterOne = parameterOne - parameterTwo;
}

int numbersPropertiesWorkFlow::getDigitsSumForNumber (int number) {

  __handler__.zeroNumberHandler (number, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (number, __PRETTY_FUNCTION__);

  int result = 0;
  int digit = 0;
  
  while (number > 0) {

    digit = number % 10;
    result += digit;

    number /= 10;
  }

  return result;
}

int numbersPropertiesWorkFlow::getDigitsProductForNumber (int number) {

  __handler__.zeroNumberHandler (number, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (number, __PRETTY_FUNCTION__);

  int result = 1;
  int digit = 0;

  while (number > 0) {

    digit = number % 10;
    result *= digit;

    number /= 10;
  }

  return result;
}

float equationsWorkFlow::getRootLinearEquation (linearEquation __LEquation__) {

  if (__validations__.isZero(__LEquation__.slope))
    if (__validations__.isZero(__LEquation__.y_intercept)) throw systemException ("Undetermined compatible equation in float fundamentalAlgorithmsWorkFlow::getRootLinearEquation (linearEquation __LEquation__);");
    else throw systemException ("Imcompatible equation in float fundamentalAlgorithmsWorkFlow::getRootLinearEquation (linearEquation __LEquation__);");

  float result = float(-__LEquation__.y_intercept / __LEquation__.slope);

  return result;
}

float equationsWorkFlow::getValueLinearEquation (linearEquation __LEquation__) {

  if (__validations__.isZero(__LEquation__.slope))
    if (__validations__.isZero(__LEquation__.y_intercept)) throw systemException ("");
    else throw systemException ("Imcompatible equation in float fundamentalAlgorithmsWorkFlow::getValueLinearEquation (linearEquation __LEquation__);");

  float result = (( __LEquation__.slope * __LEquation__.root) + __LEquation__.y_intercept );

  return result;
}

void equationsWorkFlow::processQuadraticEquationWithoutCoefficient_a (limits<float> & roots, quadraticEquation __QEquation__) {

  roots.minimLimit = -__QEquation__.coefficient_c / __QEquation__.coefficient_b;
  roots.maximLimit = roots.minimLimit;
}

void equationsWorkFlow::processQuadraticEquationWithoutCoefficient_b (limits<float> & roots, quadraticEquation __QEquation__) {

  roots.minimLimit = sqrt(-__QEquation__.coefficient_c / __QEquation__.coefficient_b);
  roots.maximLimit = - sqrt(-__QEquation__.coefficient_c / __QEquation__.coefficient_b);
}

void equationsWorkFlow::processQuadraticEquationWithoutCoefficient_c (limits<float> & roots, quadraticEquation __QEquation__) {

  roots.minimLimit = 0;
  roots.maximLimit = (-__QEquation__.coefficient_b / __QEquation__.coefficient_a);
}

void equationsWorkFlow::processQuadraticEquationWithoutCoefficient_b_andCoefficient_c (limits<float> & roots, quadraticEquation __QEquation__) {

    roots.minimLimit = sqrt(__QEquation__.coefficient_a);
    roots.maximLimit = roots.minimLimit;
}

void equationsWorkFlow::processingQuadraticEquation (limits<float> & roots, quadraticEquation __QEquation__) {

  float delta;

  delta = pow (__QEquation__.coefficient_b, 2) - 4 * __QEquation__.coefficient_a * __QEquation__.coefficient_c;

  __handler__.negativeNumberHandler<float> (delta, __PRETTY_FUNCTION__);

  roots.minimLimit = ( (-__QEquation__.coefficient_b + sqrt (delta)) / (2*__QEquation__.coefficient_a ));
  roots.maximLimit = ( (-__QEquation__.coefficient_b - sqrt (delta)) / (2*__QEquation__.coefficient_a ));
}

limits<float> equationsWorkFlow::getRootsQuadraticEquation (quadraticEquation __QEquation__) {

  limits<float> roots;

  if (__validations__.isZero(__QEquation__.coefficient_a)) {

    processQuadraticEquationWithoutCoefficient_a (roots, __QEquation__);

    return roots;
  }

  if (__validations__.isZero(__QEquation__.coefficient_b)) {

    processQuadraticEquationWithoutCoefficient_b (roots, __QEquation__);

    return roots;
  }

  __handler__.zeroNumberHandler (__QEquation__.coefficient_a, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (__QEquation__.coefficient_b, __PRETTY_FUNCTION__);

  if (__validations__.isZero(__QEquation__.coefficient_b) && __validations__.isZero(__QEquation__.coefficient_c)) {

    processQuadraticEquationWithoutCoefficient_b_andCoefficient_c (roots, __QEquation__);

    return roots;
  }

  processingQuadraticEquation (roots, __QEquation__);

  return roots;
}

float equationsWorkFlow::getValueQuadraticEquation (quadraticEquation __QEquation__, float root) {

  __handler__.zeroNumberHandler (__QEquation__.coefficient_a, __PRETTY_FUNCTION__);
  __handler__.zeroNumberHandler (__QEquation__.coefficient_b, __PRETTY_FUNCTION__);

  float result = ( __QEquation__.coefficient_a * pow (root, 2) + (__QEquation__.coefficient_b * root) + __QEquation__.coefficient_c);

  return result;
}

bool checkersWorkFlow::isPrime (int parameter) {

  if (__validations__.isNegativeOrZero(parameter)) return false;
  if (parameter == 2) return true;

  for (size_t iterator = 2; iterator <= parameter / 2; iterator++)
    if (parameter % iterator == 0) return false;

  return true;
}

bool checkersWorkFlow::isOdd (int parameter) {

  if (parameter % 2 == 1) return true;

  return false;
}

bool checkersWorkFlow::isEven (int parameter) {

  if (parameter % 2 == 0) return true;

  return false;
}

bool checkersWorkFlow::isConstantNumber (int parameter) {

  int digit = parameter % 10;
  parameter /= 10;

  while (parameter != 0) {

    if (digit != parameter % 10) return false;

    digit = parameter % 10;
    parameter /= 10;
  }

  return true;
}

bool checkersWorkFlow::isPalindrome (int parameter) {

  if (__validations__.isNegativeOrZero(parameter)) return false;

  if (__numberProperties__.reverseNumber(parameter) == parameter) return true;

  return false;
}

bool checkersWorkFlow::isPerfectSquare (int parameter) {

  if (__validations__.isNegative(parameter)) throw systemException ("Unable to process negative values");
  if (__validations__.isZero(parameter)) throw systemException ("Unable to process value as zero");

  if ((int)sqrt(parameter) == sqrt(parameter)) return true;

  return false;
}

bool checkersWorkFlow::isFibonacci (int parameter) {

  if (__validations__.isNegative(parameter)) throw systemException ("Unable to process negative values");
  if (__validations__.isZero(parameter)) throw systemException ("Unable to process value as zero");

  for (int iterator = 1; iterator <= parameter; iterator++)
    if (__fundamental__.getThe_N_fibonacciNumber (iterator) == parameter)
      return true;

  return false;
}

template <class Type> Type treesWorkFlow::getTreeNumberOfNegativeValues (binaryTreeType<Type> * treeObject) {

  if (treeObject == NULL) return 0;
  else if (__validations__.isNegative(treeObject->value))
    return 1 + getTreeNegativeValues (treeObject->leftLeaf) + getTreeNegativeValues (treeObject->rightLeaf);

  return getTreeNegativeValues (treeObject->leftLeaf) + getTreeNegativeValues (treeObject->rightLeaf);
}

template <class Type> Type treesWorkFlow::getTreeSumValues (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL)
    return treeObject->value + getTreeSumValues(treeObject->leftLeaf) + getTreeSumValues(treeObject->rightLeaf);

  return 0;
}

template <class Type> Type getTreeProductValues (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL)
    return treeObject->value * getTreeSumValues(treeObject->leftLeaf) * getTreeSumValues(treeObject->rightLeaf);

  return 0;
}

template <class Type> Type getTreeDifferenceValues (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL)
    return treeObject->value - getTreeSumValues(treeObject->leftLeaf) - getTreeSumValues(treeObject->rightLeaf);

  return 0;
}

template <class Type> Type getTreeDivisionValues (binaryTreeType<Type> * treeObject) {

  if (treeObject != NULL)
    return treeObject->value / getTreeSumValues(treeObject->leftLeaf) / getTreeSumValues(treeObject->rightLeaf);

  return 0;
}

template <class Type> bool treesWorkFlow::checkSimilarityOfTrees (binaryTreeType<Type> * treeObjectOne, binaryTreeType<Type> * treeObjectTwo) {

  if (treeObjectOne == NULL && treeObjectTwo == NULL) return true;

  else if (((treeObjectOne->leftLeaf != NULL) ^ (treeObjectTwo->leftLeaf != NULL)) || ((treeObjectOne->right != NULL) ^ (treeObjectTwo->rightLeaf != NULL)))
    return false;

  else return checkSimilarityOfTrees (treeObjectOne->leftLeaf, treeObjectTwo->leftLeaf) && checkSimilarityOfTrees (treeObjectOne->rightLeaf, treeObjectTwo->rightLeaf);
}

template <class Type> bool treesWorkFlow::convertToMirror (binaryTreeType<Type> * treeObject) {

  if (treeObject == NULL) return false;

  convertToMirror (treeObject->leftLeaf);
  convertToMirror (treeObject->rightLeaf);

  std::swap (treeObject->leftLeaf, treeObject->rightLeaf);

  return true;
}

template <class Type> void graphsWorkFlow::royWarshallAlgo (graphType<Type> & graphObject) {

  for (size_t iterator = 1; iterator < graphObject.vertices; iterator++)
    for (size_t jiterator = 1; jiterator < graphObject.vertices; jiterator++)
      for (size_t secondIterator = 1; secondIterator < graphObject.vertices; secondIterator++)
        if (secondIterator != iterator && jiterator != iterator)
          if (__validations__.isZero(graphObject.adjacencyMatrix.matrix[jiterator][secondIterator]))
            graphObject.adjacencyMatrix.matrix[jiterator][secondIterator] = graphObject.adjacencyMatrix.matrix[jiterator][iterator] * graphObject.adjacencyMatrix.matrix[iterator][secondIterator];
}

template <class Type> bool graphsWorkFlow::isConex (graphType<Type> graphObject) {

  bool check = false;

  for (size_t iterator = graphObject.verticesValency.startPoint; iterator < graphObject.vertices; iterator++)
    for (size_t jiterator = graphObject.verticesValency.startPoint; jiterator < graphObject.vertices; jiterator++)
      if (iterator != jiterator && __validations__.isNotZero(graphObject.verticesValency.oneDimensionalArray[iterator]) && __validations__.isNotZero(graphObject.verticesValency.oneDimensionalArray[jiterator]))
        check = true;

  return check;
}

template <class Type> bool graphsWorkFlow::evenValency (graphType<Type> graphObject) {

  bool check = true;

  for (size_t iterator = graphObject.verticesValency.startPoint; iterator < graphObject.vertices; iterator++)
    if (graphObject.verticesValency.oneDimensionalArray[iterator] % 2 == 0) check = false;

  return false;
}

template <class Type> bool graphsWorkFlow::isEulerian (graphType<Type> graphObject) {

  royWarshallAlgo (graphObject);

  if (isConex(graphObject) && evenValency(graphObject)) return true;

  return false;
}

template <class Type> unsigned int graphsWorkFlow::valencyOfAVertex (graphType<Type> graphObject, unsigned int vertex) {

  unsigned int valency = 0;

  for (size_t iterator = 0; iterator < graphObject.vertices; iterator++)
    valency += graphObject.adjacencyMatrix.matrix[graphObject.vertex][iterator];

  return valency;
}

template <class Type> void graphsWorkFlow::correspondecesOfVertices (graphType<Type> graphObject) {

  for (size_t iterator = 0; iterator < graphObject.vertices; iterator++)
    for (size_t jiterator = 0; jiterator < graphObject.vertices; jiterator++)
      if (iterator > jiterator)
        if (graphObject.adjacencyMatrix.matrix[iterator][jiterator] == 1)
          std::cout << jiterator + 1 << "->" << iterator + 1 << '\n';
}

template <class Type> unsigned int graphsWorkFlow::numberOfEdges (graphType<Type> graphObject) {

  unsigned int contor = 0;

  for (size_t iterator = 0; iterator < graphObject.vertices; iterator++)
   for (size_t jiterator = 0; jiterator < graphObject.vertices; jiterator++)
     if (iterator > jiterator)
       if (graphObject.adjacencyMatrix.matrix[iterator][jiterator] == 1) contor++;

  return contor;
}

template <class Type> unsigned int graphsWorkFlow::maximumValency (graphType<Type> graphObject) {

  unsigned int valency = 0;

  unsigned int maximum = 0;

  for (size_t iterator = 0; iterator < graphObject.vertices; iterator++) {
    for (size_t jiterator = 0; jiterator < graphObject.vertices; jiterator++)
      if (graphObject.adjacencyMatrix.matrix[iterator][jiterator] == 1) ++valency;

    if (maximum < valency) maximum = valency;
    valency = 0;
  }

  return maximum;
}

template <class Type> void graphsWorkFlow::valencyOfVertices (graphType<Type> graphObject) {

  unsigned int valency = 0;

  for (size_t iterator= 0; iterator < graphObject.vertices; iterator++) {
    for (size_t jiterator = 0; jiterator < graphObject.vertices; jiterator++)
      if (graphObject.adjacencyMatrix.matrix[iterator][jiterator] == 1)
        ++valency;

      std::cout << iterator + 1 << "->" << valency << '\n';
      graphObject.verticesValency.oneDimensionalArray[iterator] = valency;
      valency = 0;
  }
}

unsigned int charArrayWorkFlow::getCharArrayLength (char charArray[]) {

  unsigned int size;

  for (size = 0; charArray[size]; size++);

  return size;
}

void charArrayWorkFlow::concatCharArrays (char charArrayOne[], char charArrayTwo[]) {

  if (__validations__.isNegative(getCharArrayLength(charArrayOne))) throw systemException ("Unable to process negative length in void charArrayWorkFlow::concatCharArrays (char charArrayOne[], char charArrayTwo[]);");
  if (__validations__.isNegative(getCharArrayLength(charArrayTwo))) throw systemException ("Unable to process negative length in void charArrayWorkFlow::concatCharArrays (char charArrayOne[], char charArrayTwo[]);");

  unsigned int charArrayOneSize;

  for (charArrayOneSize = 0; charArrayOne[charArrayOneSize]; charArrayOneSize++);

  unsigned int charArrayTwoSize;

  for (charArrayTwoSize = 0; charArrayTwo[charArrayTwoSize]; charArrayTwoSize++) {
    charArrayOne[charArrayOneSize] = charArrayTwo[charArrayTwoSize];
    charArrayOneSize += 1;
  }
}

void charArrayWorkFlow::copyCharArray (char charArrayOne[], char charArrayTwo[]) {

  if (__validations__.isNegative(getCharArrayLength(charArrayOne))) throw systemException ("Unable to process negative length in void charArrayWorkFlow::copyCharArray (char charArrayOne[], char charArrayTwo[]);");
  if (__validations__.isNegative(getCharArrayLength(charArrayTwo))) throw systemException ("Unable to process negative length in void charArrayWorkFlow::copyCharArray (char charArrayOne[], char charArrayTwo[]);");

  unsigned int size;

  for (size = 0; charArrayTwo[size]; size++)
    charArrayOne[size] = charArrayTwo[size];

  charArrayOne[size] = '\0';
}

int charArrayWorkFlow::compareCharArrays (char charArrayOne[], char charArrayTwo[]) {

  if (__validations__.isNegative(getCharArrayLength(charArrayOne))) throw systemException ("Unable to process negative length in int charArrayWorkFlow::compareCharArrays (char charArrayOne[], char charArrayTwo[]);");
  if (__validations__.isNegative(getCharArrayLength(charArrayTwo))) throw systemException ("Unable to process negative length in int charArrayWorkFlow::compareCharArrays (char charArrayOne[], char charArrayTwo[]);");

  unsigned int size;

  for (size = 0; charArrayOne[size] && charArrayTwo[size] && charArrayOne[size] != charArrayTwo[size]; size++);

  if (charArrayOne[size] && charArrayTwo[size]) return 0;

  return charArrayOne[size] - charArrayTwo[size];
}

bool charArrayWorkFlow::searchCharInCharArray (char charArray[], char characterToSearch) {

  if (__validations__.isNegative(getCharArrayLength(charArray))) throw systemException ("Unable to process negative length in bool charArrayWorkFlow::searchCharInCharArray (char charArray[], char characterToSearch);");

  for (unsigned int size = 0; charArray[size]; size++)
    if (charArray[size] == characterToSearch)
      return true;

  return false;
}

int charArrayWorkFlow::getNumberOfVowelsInCharArray (char charArray[]) {

  if (__validations__.isNegative(getCharArrayLength(charArray))) throw systemException ("Unable to process negative length in int charArrayWorkFlow::getNumberOfVowelsInCharArray (char charArray[]);");

  int result = 0;

  for (unsigned int iterator = 0; iterator < getCharArrayLength(charArray); iterator++)
    if (charArray[iterator] == 'a' || charArray[iterator] == 'e' || charArray[iterator] == 'i' || charArray[iterator] == 'o' || charArray[iterator] == 'u')
      result += 1;

  return result;
}

int charArrayWorkFlow::getNumberOfConsonantsInCharArray (char charArray[]) {

  if (__validations__.isNegative(getCharArrayLength(charArray))) throw systemException ("Unable to process negative length in int charArrayWorkFlow::getNumberOfConsonantsInCharArray (char charArray[]);");

  int result = 0;

  for (unsigned int iterator = 0; iterator < getCharArrayLength(charArray); iterator++)
    if (charArray[iterator] == 'a' || charArray[iterator] == 'e' || charArray[iterator] == 'i' || charArray[iterator] == 'o' || charArray[iterator] == 'u')
        continue;
    else
      result += 1;

  return result;
}

void charArrayWorkFlow::removeCharFromString (char * string, char value) {

  if (NULL == string) return;

  char *stringDest = string;

  while (*string) {

    if (*string != value) *stringDest++ = *string;

    string++;
  }

  *stringDest = '\0';
}

void charArrayWorkFlow::deleteCharFromCharArray (char charArray[], int position) {

    if (__validations__.isNegative(getCharArrayLength(charArray))) throw systemException ("Unable to process negative length in void charArrayWorkFlow::deleteCharFromCharArray (char charArray[], int position);");

    for (int iterator = position; iterator < strlen(charArray); iterator++)
      charArray[iterator] = charArray[iterator + 1];
}

void charArrayWorkFlow::convertToLowerCase (char & character) {

  if (character <= 97 && character != ' ')
    character += 32;
}

void charArrayWorkFlow::convertToUpperCase (char & character) {

  if (character >= 97)
    character -= 32;
}
