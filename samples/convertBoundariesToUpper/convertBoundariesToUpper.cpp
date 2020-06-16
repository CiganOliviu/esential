#include "../../esential.hpp"

class StringProcessor {
private:

  bool IsSpace (char character);

public:
  StringProcessor () {}

  void ConvertBoundariesToUpper (char sequence[101], errorsHandler __handler__, charArrayWorkFlow workflow);

  virtual ~StringProcessor () {}
};

bool StringProcessor::IsSpace (char character) {

  if (character == ' ')
    return true;

  return false;
}

void StringProcessor::ConvertBoundariesToUpper (char sequence[101], errorsHandler __handler__, charArrayWorkFlow workflow) {

  __handler__.zeroNumberHandler (sequence, __PRETTY_FUNCTION__);

  workflow.convertToUpperCase (sequence[0]);

  for (int iterator = 1; iterator < workflow.getCharArrayLength(sequence) - 1; iterator++)
    if (IsSpace (sequence[iterator]))
      workflow.convertToUpperCase (sequence[iterator + 1]);
}

int main (int argc, char const * argv[]) {

  char sequence[101];
  errorsHandler __handler__;
  charArrayWorkFlow workflow;
  StringProcessor processor;

  std::cin.getline (sequence, 100);

  processor.ConvertBoundariesToUpper (sequence, __handler__, workflow);

  std::cout << sequence;

  return 0;
}
