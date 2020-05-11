/*
  Tasks:
    * return the product of all prime divisors of a numbers
*/

#include "../../esential.hpp"

class DataProcessor {
private:
	validationRules __validations__;
	checkersWorkFlow __checks__;

public:
	DataProcessor() {}

	int GetDivisorsProduct (int Number);

	virtual ~DataProcessor() {}
	
};

int DataProcessor::GetDivisorsProduct (int Number) {

	if (__validations__.isNegative(Number)) throw systemException ("Unable to process with negative values");
	if (__validations__.isZero(Number)) throw systemException ("Unable to process with zero as value");

	int Result = 1;

	for (int iterator = 2; iterator <= Number / 2; iterator++)
		if (Number % iterator == 0)
			if (__checks__.isPrime(iterator))
				Result *= iterator;

	return Result;
}

int main (int argc, char const * argv[]) {

	DataProcessor processor;
	int Number;
	int Result;

	std::cin >> Number;

	Result = processor.GetDivisorsProduct (Number);

	std::cout << Result;

	return 0;
}