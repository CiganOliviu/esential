/*
MIT License

Copyright (c) 2020 Cigan Oliviu David

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "../easyPass-WS/easyPass.hpp"

class oneDimensionalArraysWorkFlow {
private:
  errorsHandler __handler__;
  checkAndSupport __support__;

  template <class Type> Type sortAndNormalizeNumber (Type parameter);

public:
  oneDimensionalArraysWorkFlow () {}

  template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> void outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> Type getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> Type getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDifference (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> float getOneDimensionalArrayMean (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator);
  template <class Type> bool checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition);
  template <class Type> bool isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value);
  template <class Type> void normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);

  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);

  template <class Type> void bubbleSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void minimumValueSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void insertionSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void selectionSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void shellSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);

  virtual ~oneDimensionalArraysWorkFlow () {}
};

class matricesWorkFlow {
private:
  errorsHandler __handler__;
  checkAndSupport __support__;

  template <class Type> Type sortAndNormalizeNumber (Type parameter);

public:
  matricesWorkFlow () {}

  template <class Type> void readMatrix (matrixType<Type> & matrixObject);
  template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);
  template <class Type> void readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject);

  template <class Type> void outputMatrix (matrixType<Type> matrixObject);
  template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);
  template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);

  template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);
  template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);

  template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);

  template <class Type> void matrixInitialization (matrixType<Type> & matrixObject, Type value);
  template <class Type> void normalizeMatrix (matrixType<Type> & matrixObject);

  template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo);
  template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo);
  template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo);
  template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo);

  template <class Type> oneDimensionalArrayType<Type> getMatrixMainDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixAboveMainDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixUnderMainDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixSecondaryDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixAboveSecondaryDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixUnderSecondaryDiagonal (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixNorthElements (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixSouthElements (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixEastElements (matrixType<Type> matrixObject);
  template <class Type> oneDimensionalArrayType<Type> getMatrixWestElements (matrixType<Type> matrixObject);

  template <class Type> oneDimensionalArrayType<Type> getMatrixOrderMainDiagonal (matrixType<Type> matrixObject, int order);
  template <class Type> oneDimensionalArrayType<Type> getMatrixOrderSecondaryDiagonal (matrixType<Type> matrixObject, int order);

  virtual ~matricesWorkFlow () {}
};

class fundamentalAlgorithmsWorkFlow {
private:
  errorsHandler __handler__;
  validationRules __validations__;


  void processQuadraticEquationWithoutCoefficient_a (limits<float> & roots, quadraticEquation __QEquation__);
  void processQuadraticEquationWithoutCoefficient_b (limits<float> & roots, quadraticEquation __QEquation__);
  void processQuadraticEquationWithoutCoefficient_c (limits<float> & roots, quadraticEquation __QEquation__);
  void processQuadraticEquationWithoutCoefficient_b_andCoefficient_c (limits<float> & roots, quadraticEquation __QEquation__);
  void processingQuadraticEquation (limits<float> & roots, quadraticEquation __QEquation__);

public:
  fundamentalAlgorithmsWorkFlow () {}

  float getRootLinearEquation (linearEquation __LEquation__);
  float getValueLinearEquation (linearEquation __LEquation__);
  limits<float> getRootsQuadraticEquation (quadraticEquation __QEquation__);
  float getValueQuadraticEquation (quadraticEquation __QEquation__, float root);

  template <class Type> Type getGaussSum (Type limit);
  unsigned int getTheLargestCommonDivisor (limits<int> interval);
  unsigned int getTheLargestCommonDivisorRecursive (limits<int> interval);
  unsigned int getLeastCommonMultiple (limits<int> interval);
  unsigned int getPrimevalue (int parameter);

  bool checkIfPrime (int parameter);
  bool checkIfOdd (int parameter);
  bool checkIfEven (int parameter);
  bool isConstantNumber (int parameter);

  unsigned int reverseNumber (int parameter);
  unsigned int getPalindromValue (int parameter);
  bool checkIfPalindrome (int parameter);
  float getMeanOfTwoNumbers (float parameterOne, float parameterTwo);

  unsigned int getThe_N_FactorialNumber (int parameter);
  unsigned int getThe_N_FactorialNumberRecursive (int parameter);
  unsigned int getThe_N_mannaPnueliNumber (int parameter);
  unsigned int getThe_N_ackermanNumber (int minimLimit, int maximLimit);
  unsigned int getThe_N_stirlingNumber (int minimLimit, int maximLimit);
  unsigned int getThe_N_eulerianNumber (int minimLimit, int maximLimit);
  unsigned int getThe_N_catalanNumber (int parameter);
  unsigned int getThe_N_fibonacciNumber (int parameter);
  unsigned int getThe_N_fibonacciNumberRecursive (int parameter);
  unsigned int getThe_N_masterTheoremNumber (int parameter);

  void removeCharFromString (char * string, char value);

  void readComplexData (complexNumber * number);
  complexNumber complexNumbersProduct (complexNumber * numberOne, complexNumber * numberTwo);
  complexNumber complexNumberSum (complexNumber * numberOne, complexNumber * numberTwo);
  complexNumber complexNumberDifference (complexNumber * numberOne, complexNumber * numberTwo);

  virtual ~fundamentalAlgorithmsWorkFlow () {}
};

class treesWorkFlow {
private:
  errorsHandler __handler__;
  validationRules __validations__;


public:
  treesWorkFlow () {}

  template <class Type> void createTree (binaryTreeType<Type> * & treeObject);
  template <class Type> void deleteTree (binaryTreeType<Type> * & treeObject);

  template <class Type> void RootLeftRightPreOrder (binaryTreeType<Type> * treeObject);
  template <class Type> void LeftRootRightPostOrder (binaryTreeType<Type> * treeObject);
  template <class Type> void LeftRootRightInOrder (binaryTreeType<Type> * treeObject);
  template <class Type> void reachTreeOnLevels (binaryTreeType<Type> * treeObject, int level);

  template <class Type> Type getTreeNumberOfNegativeValues (binaryTreeType<Type> * treeObject);
  template <class Type> Type getTreeSumValues (binaryTreeType<Type> * treeObject);
  template <class Type> Type getTreeProductValues (binaryTreeType<Type> * treeObject);
  template <class Type> Type getTreeDifferenceValues (binaryTreeType<Type> * treeObject);
  template <class Type> Type getTreeDivisionValues (binaryTreeType<Type> * treeObject);
  template <class Type> bool checkSimilarityOfTrees (binaryTreeType<Type> * treeObjectOne, binaryTreeType<Type> * treeObjectTwo);
  template <class Type> bool convertToMirror (binaryTreeType<Type> * treeObject);

  virtual ~treesWorkFlow () {}
};

class graphsWorkFlow {
private:
  errorsHandler __handler__;
  validationRules __validations__;

  template <class Type> bool evenValency (graphType<Type> graphObject);

public:
  graphsWorkFlow () {}

  template <class Type> void readAdjacencyMatrix (graphType<Type> & graphObject);
  template <class Type> void readFileAdjacencyMatrix (char * fileName, graphType<Type> & graphObject);
  template <class Type> void readGraphByEdgesList (graphType<Type> & graphObject);
  template <class Type> void readFileGraphByEdgesList (char * fileName, graphType<Type> & graphObject);
  template <class Type> void royWarshallAlgo (graphType<Type> & graphObject);
  template <class Type> bool isConex (graphType<Type> graphObject);
  template <class Type> bool isEulerian (graphType<Type> graphObject);

  template <class Type> void readDirectedGraphByEdgesList (graphType<Type> & graphObject);
  template <class Type> void readFileDirectedGraphByEdgesList (char * fileName, graphType<Type> & graphObject);

  template <class Type> unsigned int valencyOfAVertex (graphType<Type> graphObject, unsigned int vertex);
  template <class Type> void correspondecesOfVertices (graphType<Type> graphObject);
  template <class Type> unsigned int numberOfEdges (graphType<Type> graphObject);
  template <class Type> unsigned int maximumValency (graphType<Type> graphObject);
  template <class Type> void valencyOfVertices (graphType<Type> graphObject);

  virtual ~graphsWorkFlow () {}
};
