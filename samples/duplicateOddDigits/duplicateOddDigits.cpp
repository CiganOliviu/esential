/*
  Tasks:
    * duplicate the odd digits from a number with the half part of it
*/
#include "../../esential.hpp"

class duplicationsProcessor {
private:
  errorsHandler __handler__;
  numbersPropertiesWorkFlow __properties__;
  checkersWorkFlow __checks__;

public:
  duplicationsProcessor () {}

  int realiseNumberDuplication (int  number);

  virtual ~duplicationsProcessor () {}
};

int duplicationsProcessor::realiseNumberDuplication (int number) {

  __handler__.negativeNumberHandler (number, __PRETTY_FUNCTION__);

  number = __properties__.reverseNumber(number);

  int  duplicatedNumber = 0;

  while (number > 0) {

    duplicatedNumber = duplicatedNumber * 10 + number % 10;

    if (__checks__.isOdd(number % 10))
      duplicatedNumber = duplicatedNumber * 10 + (number % 10) / 2;

    number /= 10;
  }

  return duplicatedNumber;
}

int main(int argc, char const *argv[]) {

  duplicationsProcessor __duplications_init__;
  int  number;

  std::cin >> number;

  std::cout << __duplications_init__.realiseNumberDuplication (number);

  return 0;
}
