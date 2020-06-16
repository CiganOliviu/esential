#include "../../esential.hpp"

class generator {

public:
  generator () {}

  template <class Type> void GenerateMatrix (matrixType<Type> & matrixObject, errorsHandler __handler__);

  virtual ~generator () {};
};

template <class Type> void generator::GenerateMatrix (matrixType<Type> & matrixObject, errorsHandler __handler__) {

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference; jiterator++) {
      if (iterator == 0)
        matrixObject.matrix[iterator][jiterator] = jiterator;
      else if (jiterator == 0)
        matrixObject.matrix[iterator][jiterator] = 2 * jiterator;
      else
        matrixObject.matrix[iterator][jiterator] = 2 * jiterator + iterator;
    }
}

int main (int argc, const char * argv[]) {

  matrixType<int> matrixObject;
  errorsHandler __handler__;
  IOSystemMatrices IOSys;
  generator __init__generator__;

  std::cin >> matrixObject.lineRefference;

  matrixObject.columnRefference = matrixObject.lineRefference;

  __init__generator__.GenerateMatrix (matrixObject, __handler__);

  IOSys.outputMatrix (matrixObject);

  return 0;
}
