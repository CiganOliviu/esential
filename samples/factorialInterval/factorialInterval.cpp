#include "../../esential.hpp"

using namespace calculationStructures;

class FactorialWorkFlow {
public:
  limits<int> ReturnFactorialInverval (int Number, fundamentalAlgorithmsWorkFlow Algos);
  int ReturnFactorialDifference (limits<int> interval);
};

  limits<int> FactorialWorkFlow::ReturnFactorialInverval (int Number, fundamentalAlgorithmsWorkFlow Algos) {
  limits<int> interval;

  interval.minimLimit = Algos.getThe_N_FactorialNumber (Number - 1);
  interval.minimLimit += 1;

  interval.maximLimit = Algos.getThe_N_FactorialNumber (Number + 1);
  interval.maximLimit -= 1;

  return interval; 
}

int FactorialWorkFlow::ReturnFactorialDifference (limits<int> interval) {

  int result;

  result = interval.maximLimit - interval.minimLimit;

  return result;
}

int main (int argc, char const * argv[]) {

  FactorialWorkFlow FactWorkflow;
  fundamentalAlgorithmsWorkFlow Algos;
  portData Porter;

  limits<int> interval;
  int Number = 6;
  int Result = 0;

  Porter.portLimits(interval, FactWorkflow.ReturnFactorialInverval (Number, Algos));
  Result = FactWorkflow.ReturnFactorialDifference(interval);

  std::cout << Result;

  return 0;
}