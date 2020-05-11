#include "../../esential.hpp"

class smallestPrimeDivisorProcessor {
private:
  errorsHandler __handler__;
  checkersWorkFlow __checks__;

public:
  smallestPrimeDivisorProcessor () {}

  int getTheSmallestPrimeDivisor (int number);

  virtual ~smallestPrimeDivisorProcessor () {}
};

int smallestPrimeDivisorProcessor::getTheSmallestPrimeDivisor (int number) {

  __handler__.negativeNumberHandler (number, __PRETTY_FUNCTION__);

  for (size_t iterator = 2; iterator <= number; iterator++)
    if (number % iterator == 0 && __checks__.isPrime(iterator))
      return iterator;

  return 0;
}

int main(int argc, char const *argv[]) {

  smallestPrimeDivisorProcessor __smallestPrime__;
  int number;

  std::cin >> number;

  std::cout << __smallestPrime__.getTheSmallestPrimeDivisor (number);

  return 0;
}
