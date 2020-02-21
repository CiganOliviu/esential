/*
  Tasks:
    * read a matrix
    * print the matrix
    * turn the middle area of the matrix in null
    * re-print the matrix
*/

#include "../../esential.hpp"

class makeAreasNull {

private:
  validationRules __validations__;

  std::string turnColumnsAreaToNullZeroError = "Unable to process line or column as zero in template <class Type> void turnColumnsToAreaNull (matrixType<Type> & matrixObject) ";
  std::string turnColumnsAreaToNullNegativeError = "Unable to process negative line or column in template <class Type> void turnColumnsToAreaNull (matrixType<Type> & matrixObject) ";

  std::string turnLinesAreaToNullZeroError = "Unable to process line or column as zero in template <class Type> void turnLinesAreaToNull (matrixType<Type> & matrixObject);";
  std::string turnLinesAreaToNullNegativeError = "Unable to process negative line or column in template <class Type> void turnLinesAreaToNull (matrixType<Type> & matrixObject);";

public:
  makeAreasNull () {}

  template <class Type> void turnEvenColumnsAreaToNull (matrixType<Type> & matrixObject);
  template <class Type> void turnEvenLinesAreaToNull (matrixType<Type> & matrixObject);

  template <class Type> void turnOddColumnsAreaToNull (matrixType<Type> & matrixObject);
  template <class Type> void turnOddLinesAreaToNull (matrixType<Type> & matrixObject);

  virtual ~makeAreasNull () {}
};

template <class Type> void makeAreasNull::turnEvenColumnsAreaToNull (matrixType<Type> & matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (turnColumnsAreaToNullZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (turnColumnsAreaToNullNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (jiterator == matrixObject.lineRefference / 2 || jiterator == matrixObject.lineRefference / 2 - 1)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnEvenLinesAreaToNull (matrixType<Type> & matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (turnLinesAreaToNullZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (turnLinesAreaToNullNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (iterator == matrixObject.lineRefference / 2 || iterator == matrixObject.lineRefference / 2 - 1)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnOddColumnsAreaToNull (matrixType<Type> & matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (turnColumnsAreaToNullZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (turnColumnsAreaToNullNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (jiterator == matrixObject.lineRefference / 2)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnOddLinesAreaToNull (matrixType<Type> & matrixObject) {

  if (__validations__.isZero(matrixObject.lineRefference) || __validations__.isZero(matrixObject.columnRefference)) throw systemException (turnLinesAreaToNullZeroError);
  if (__validations__.isNegative(matrixObject.lineRefference) || __validations__.isNegative(matrixObject.columnRefference)) throw systemException (turnLinesAreaToNullNegativeError);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (iterator == matrixObject.lineRefference / 2)
        matrixObject.matrix[iterator][jiterator] = 0;
}

int main(int argc, char const *argv[]) {

  matrixType <int> matrix;
  matricesWorkFlow matricesWF;
  fundamentalAlgorithmsWorkFlow fundamentalWF;
  makeAreasNull turnInNull;

  matricesWF.readDynamicFileMatrix ((char*)"makeAreasNull.data", matrix);
  matricesWF.outputMatrix (matrix);

  if (fundamentalWF.checkIfOdd(matrix.lineRefference)) {
    turnInNull.turnOddColumnsAreaToNull (matrix);
    turnInNull.turnOddLinesAreaToNull (matrix);
  }

  if (fundamentalWF.checkIfEven(matrix.lineRefference)) {
    turnInNull.turnEvenColumnsAreaToNull (matrix);
    turnInNull.turnEvenLinesAreaToNull (matrix);
  }

  std::cout << '\n' << '\n';
  matricesWF.outputMatrix(matrix);

  return 0;
}
