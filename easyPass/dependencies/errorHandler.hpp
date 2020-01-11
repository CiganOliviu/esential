#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <windows.h>

class errorHandler {
private:

public:
  errorHandler () {}

  std::string oneDimensionalArrayGeneratorZeroError = "Unable to handle length as zero in template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject);";
  std::string oneDimensionalArrayGeneratorNegativeError = "Unable to handle negative length in template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject);";

  std::string matrixGeneratorZeroError = "Unable to handle line or column as zero in template <class Type> void matrixGenerator (matrixType<Type> MTObject, limits<Type> limitsObject);";
  std::string matrixGeneratorNegativeError = "Unable to handle negative line or column in template <class Type> void matrixGenerator (matrixType<Type> MTObject, limits<Type> limitsObject);";

  std::string readOneDimensionalArrayZeroError = "Unable to handle length as zero in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string readOneDimensionalArrayNegativeError = "Unable to handle negative length in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string putsOneDimensionalArrayZeroError = "Unable to handle length as zero template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string putsOneDimensionalArrayNegativeError = "Unable to handle negative length template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string readMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void readMatrix (matrixType<Type> MTObject);";
  std::string readMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void readMatrix (matrixType<Type> MTObject);";

  std::string putsMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void putsMatrix (matrixType<Type> MTObject);";
  std::string putsMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void putsMatrix (matrixType<Type> MTObject);";

  std::string assertOneDimensionalArraysUnequalLengths = "Unable to process with unequal lengths in template <class Type> bool assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string assertOneDimensionalArraysUnequalStartPoints = "Unable to process with unequal start points in template <class Type> bool assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string assertOneDimensionalArraysUnequalEndPoints = "Unable to process with unequal end points in template <class Type> bool assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";

  std::string assertMatrixUnequalLines = "Unable to process with unequal lines in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";
  std::string assertMatrixUnequalColumns = "Unable to process with unequal columns in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";
  std::string assertMatrixUnequalStartLinePoints = "Unable to process with unequal start line points in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";
  std::string assertMatrixUnequalEndLinePoints = "Unable to process with unequal end line points in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";
  std::string assertMatrixUnequalStartColumnPoints = "Unable to process with unequal start column points in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";
  std::string assertMatrixUnequalEndColumnPoints = "Unable to process with unequal end column points in template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);";

  virtual ~errorHandler () {}
};
