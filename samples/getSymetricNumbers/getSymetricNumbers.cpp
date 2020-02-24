/*
  Tasks:
    * print all symetric numbers between a specific interval
*/

#include "../../esential.hpp"

class symetricNumbersProcessor {
private:
  validationRules __validations__;
  errorsHandler __handler__;

  bool isSymetric (int number);

public:
  symetricNumbersProcessor () {}

  void getSymetricNumbersFromInterval (limits<int> interval);

  virtual ~symetricNumbersProcessor () {}
};

bool symetricNumbersProcessor::isSymetric (int number) {

  if (__validations__.isNegativeOrZero(number)) return false;

  int digit;

  while (number > 9) {

    digit = number % 10;

    if (digit != ((number % 100) / 10))
      return false;

    number /= 10;
  }
  return true;
}

void symetricNumbersProcessor::getSymetricNumbersFromInterval (limits<int> interval) {

  __handler__.negativeNumberHandler (interval.minimLimit, __PRETTY_FUNCTION__);
  __handler__.negativeNumberHandler (interval.maximLimit, __PRETTY_FUNCTION__);

  while (interval.minimLimit <= interval.maximLimit) {

    if (isSymetric(interval.minimLimit)) std::cout << interval.minimLimit << " ";

    interval.minimLimit += 1;
  }
}

int main(int argc, char const *argv[]) {

  limits<int> interval;
  symetricNumbersProcessor symetricNumbersProcessorWorkFlow;

  std::cin >> interval.minimLimit >> interval.maximLimit;

  symetricNumbersProcessorWorkFlow.getSymetricNumbersFromInterval(interval);

  return 0;
}
