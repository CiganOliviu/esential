/*
  tasks:
    * generate a matrix with:
      -> the elements from the principal diagonal are 0
      -> above the main diagonal the elements are the value of iterator
      -> under elements will be the n (iterator) number prime
*/

#include "../../esential.hpp"

class matrixGenerator {
private:
  checkersWorkFlow __checks__;
  errorsHandler __handler__;

  int the_N_palindromeNumber (int number);

public:
  matrixGenerator () {}

  void generateMatrix (matrixType<int> & matrixObject);

  virtual ~matrixGenerator () {}
};

int matrixGenerator::the_N_palindromeNumber (int number) {

  int index = 0;
  int contor = 11;
  int thePrimeNumber = 0;

  while (index < number) {

    if (__checks__.isPalindrome(contor)) {
      thePrimeNumber = contor;
      index += 1;
    }
    contor += 1;
  }

  return thePrimeNumber;
}
void matrixGenerator::generateMatrix (matrixType<int> & matrixObject) {

  matrixObject.columnRefference = matrixObject.lineRefference;

  __handler__.standardHandlerMatrix (matrixObject, __PRETTY_FUNCTION__);

  matrixObject.startLinePoint += 1;
  matrixObject.endLinePoint += 1;
  matrixObject.startColumnPoint += 1;
  matrixObject.endColumnPoint += 1;

  for (int iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (int jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (iterator == jiterator) matrixObject.matrix[iterator][jiterator] = 0;
      else if (iterator < jiterator) matrixObject.matrix[iterator][jiterator] = iterator;
      else if (iterator > jiterator) matrixObject.matrix[iterator][jiterator] = the_N_palindromeNumber(iterator);
}

int main(int argc, char const *argv[]) {

  matrixType<int> matrixRefference;
  matricesWorkFlow MWorkFlow;
  IOSystemMatrices ioM;
  matrixGenerator __matrixGenerator_init__;

  std::cin >> matrixRefference.lineRefference;

  __matrixGenerator_init__.generateMatrix (matrixRefference);

  ioM.outputMatrix(matrixRefference);

  return 0;
}
