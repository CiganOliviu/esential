#include "../../esential.hpp"

class polarisedEngine {

public:
  polarisedEngine () {}

  void OutputPolarizedNumbers (matrixType<int> matrixObject);

  virtual ~polarisedEngine () {}
};

void polarisedEngine::OutputPolarizedNumbers (matrixType<int> matrixObject) {

  for (size_t iterator = matrixObject.startLinePoint; iterator < matrixObject.lineRefference + matrixObject.endLinePoint; iterator++)
    for (size_t jiterator = matrixObject.startColumnPoint; jiterator < matrixObject.columnRefference + matrixObject.endColumnPoint; jiterator++)
      if (matrixObject.matrix[iterator][0] == matrixObject.matrix[jiterator][matrixObject.columnRefference - 1])
        std::cout << matrixObject.matrix[iterator][0] << " ";

  std::cout << '\n';
}

int main (int argc, char const * argv[]) {

  matrixType<int> matrix;
  IOSystemMatrices IOSystem;
  matricesWorkFlow flow;
  polarisedEngine engine;

  IOSystem.readDynamicFileMatrix ((char*)"matrix.data", matrix);

  engine.OutputPolarizedNumbers (matrix);

  std::cout << '\n';

  IOSystem.outputMatrix (matrix);

  return 0;
}