#include "../../esential.hpp"

class combineMatrices {
private:
  checkAndSupport __checker__;
  errorsHandler __handler__;

public:
    combineMatrices () {}

    template <class Type> matrixType<Type> GenerateMatrix (matrixType<Type> matrixOne, matrixType<Type> matrixTwo);

    virtual ~combineMatrices () {}
};

template <class Type> matrixType<Type> combineMatrices::GenerateMatrix (matrixType<Type> matrixOne, matrixType<Type> matrixTwo) {

  __handler__.equalityHandlerMatrices (matrixOne, matrixTwo, __PRETTY_FUNCTION__);

  matrixType<Type> result;

  result.lineRefference = matrixOne.lineRefference;
  result.columnRefference = matrixOne.columnRefference;

  for (size_t iterator = matrixOne.startLinePoint; iterator < matrixOne.lineRefference; iterator++)
    for (size_t jiterator = matrixOne.startColumnPoint; jiterator < matrixOne.columnRefference; jiterator++) {
        if (iterator < jiterator) result.matrix[iterator][jiterator] = matrixOne.matrix[iterator][jiterator];
        if (iterator == jiterator) result.matrix[iterator][jiterator] = __checker__.returnTheMinimumParameterWithoutObject (matrixOne.matrix[iterator][jiterator], matrixTwo.matrix[iterator][jiterator]);
        if (iterator > jiterator) result.matrix[iterator][jiterator] = matrixTwo.matrix[iterator][jiterator];
    }

  return result;
}

int main (int argc, char const * argv[]) {

  matrixType<int> matrixOne;
  matrixType<int> matrixTwo;
  matrixType<int> resultMatrix;
  portData dataPorter;
  IOSystemMatrices IOSys;
  combineMatrices combiner;

  IOSys.readDynamicFileMatrix ((char*)"matrixOne.txt", matrixOne);
  IOSys.readDynamicFileMatrix ((char*)"matrixTwo.txt", matrixTwo);

  dataPorter.portMatrices (resultMatrix, combiner.GenerateMatrix (matrixOne, matrixTwo));

  IOSys.outputMatrix (resultMatrix);

  return 0;
}
