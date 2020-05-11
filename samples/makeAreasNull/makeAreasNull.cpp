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
  errorsHandler __handler__;

public:
  makeAreasNull () {}

  template <class Type> void turnEvenColumnsAreaToNull (matrixType<Type> & matrixObject);
  template <class Type> void turnEvenLinesAreaToNull (matrixType<Type> & matrixObject);

  template <class Type> void turnOddColumnsAreaToNull (matrixType<Type> & matrixObject);
  template <class Type> void turnOddLinesAreaToNull (matrixType<Type> & matrixObject);

  virtual ~makeAreasNull () {}
};

template <class Type> void makeAreasNull::turnEvenColumnsAreaToNull (matrixType<Type> & matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (jiterator == matrixObject.lineRefference / 2 || jiterator == matrixObject.lineRefference / 2 - 1)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnEvenLinesAreaToNull (matrixType<Type> & matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (iterator == matrixObject.lineRefference / 2 || iterator == matrixObject.lineRefference / 2 - 1)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnOddColumnsAreaToNull (matrixType<Type> & matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (jiterator == matrixObject.lineRefference / 2)
        matrixObject.matrix[iterator][jiterator] = 0;
}

template <class Type> void makeAreasNull::turnOddLinesAreaToNull (matrixType<Type> & matrixObject) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++)
      if (iterator == matrixObject.lineRefference / 2)
        matrixObject.matrix[iterator][jiterator] = 0;
}

int main(int argc, char const *argv[]) {

  matrixType <int> matrix;
  matricesWorkFlow matricesWF;
  IOSystemMatrices ioM;
  checkersWorkFlow __checks__;
  makeAreasNull turnInNull;

  ioM.readDynamicFileMatrix ((char*)"makeAreasNull.data", matrix);
  ioM.outputMatrix (matrix);

  if (__checks__.isOdd(matrix.lineRefference)) {
    turnInNull.turnOddColumnsAreaToNull (matrix);
    turnInNull.turnOddLinesAreaToNull (matrix);
  }

  if (__checks__.isEven(matrix.lineRefference)) {
    turnInNull.turnEvenColumnsAreaToNull (matrix);
    turnInNull.turnEvenLinesAreaToNull (matrix);
  }

  std::cout << '\n' << '\n';
  ioM.outputMatrix(matrix);

  return 0;
}
