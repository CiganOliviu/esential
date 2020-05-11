/*
  tasks:
    * generate a fibonacci number as in the example
    0   1   1   2
    13  8   5   3
    21  34  55  89
    610 377 233 144
    * output the matrix
*/

#include "../../esential.hpp"

class matrixGenerator {
private:
  errorsHandler __handler__;
  fundamentalAlgorithmsWorkFlow __fundamental_algo__;
  checkersWorkFlow __checks__;

public:
  matrixGenerator () {}

  void generateFibonacciMatrix (matrixType<int> & fiboMatrix);

  virtual ~matrixGenerator () {}
};

void matrixGenerator::generateFibonacciMatrix (matrixType<int> & fiboMatrix) {

  fiboMatrix.columnRefference = fiboMatrix.lineRefference;

  __handler__.standardHandlerMatrix (fiboMatrix, __PRETTY_FUNCTION__);

  int fiboIndexOdd = 1;
  int fiboIndexEven = 0;

  for (size_t iterator = fiboMatrix.startLinePoint; iterator < fiboMatrix.lineRefference + fiboMatrix.endLinePoint; iterator++) {
      if (__checks__.isOdd(iterator + 1)) {
        fiboIndexOdd += fiboIndexEven;
        for (size_t jiterator = fiboMatrix.startColumnPoint; jiterator < fiboMatrix.columnRefference + fiboMatrix.endColumnPoint; jiterator++) {
          fiboMatrix.matrix[iterator][jiterator] = __fundamental_algo__.getThe_N_fibonacciNumber(fiboIndexOdd);
          fiboIndexOdd += 1;
        }
      } else if (__checks__.isEven(iterator + 1)) {
          fiboIndexEven = fiboIndexOdd + fiboMatrix.lineRefference;
          for (size_t jiterator = fiboMatrix.startColumnPoint; jiterator < fiboMatrix.columnRefference + fiboMatrix.endColumnPoint; jiterator++) {
            fiboMatrix.matrix[iterator][jiterator] = __fundamental_algo__.getThe_N_fibonacciNumber(fiboIndexEven);
            fiboIndexEven -= 1;
          }
        }
    }
}

int main(int argc, char const *argv[]) {

  matricesWorkFlow MWorkFlow;
  IOSystemMatrices ioM;
  matrixType <int> matrixRefference;
  matrixGenerator __generator_init__;

  std::cin >> matrixRefference.lineRefference;

  __generator_init__.generateFibonacciMatrix(matrixRefference);

  ioM.outputMatrix(matrixRefference);

  return 0;
}
