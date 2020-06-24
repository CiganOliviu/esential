#include "../../esential.hpp"

void DuplicateVowelsInSequence (char sequence[101], char newSequence[101], charArrayWorkFlow charWorkFlow) {

  int jiterator = 0;

  for (int iterator = 0; iterator < strlen(sequence); iterator++) {

    newSequence[jiterator] = sequence[iterator];
    jiterator += 1;

    if (charWorkFlow.searchCharInCharArray((char*)"aeiou", sequence[iterator])) {
      newSequence[jiterator] = sequence[iterator];
      jiterator += 1;
    }
  }
}

void ConvertToUpperAfterAndBeforeSpacesInSequence (char sequence[101], charArrayWorkFlow charWorkFlow) {

  charWorkFlow.convertToUpperCase (sequence[0]);
  charWorkFlow.convertToUpperCase (sequence[charWorkFlow.getCharArrayLength(sequence) - 1]);

  for (int iterator = 1; iterator < strlen(sequence) - 1; iterator++)
    if (sequence[iterator] == ' ') {
      charWorkFlow.convertToUpperCase (sequence[iterator - 1]);
      charWorkFlow.convertToUpperCase (sequence[iterator + 1]);
    }
}

int main(int argc, char const *argv[]) {

  char sequence[101];
  char newSequence[101];
  charArrayWorkFlow charWorkFlow;

  std::cin.getline (sequence, 100);

  DuplicateVowelsInSequence (sequence, newSequence, charWorkFlow);

  ConvertToUpperAfterAndBeforeSpacesInSequence (newSequence, charWorkFlow);

  std::cout << newSequence;

  return 0;
}
