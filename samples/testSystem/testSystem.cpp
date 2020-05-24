#include "../../esentialVT.hpp"

int main(int argc, char const *argv[]) {

  RunSystemTests systemTesting;
  assertions __assert__;

  systemTesting.run();

  __assert__.getConclusion();
  
  return 0;
}
