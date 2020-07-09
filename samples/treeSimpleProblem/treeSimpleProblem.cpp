#include "../../esential.hpp"

#ifndef NEWLINE
#define NEWLINE() std::cout << '\n'
#endif

int main (int argc, char const * argv[]) {

  binaryTreeType<int> * tree;
  IOSystemTrees io;
  treesWorkFlow workflow;

  int sumOfNodes = 0;

  io.createTree <int> (tree);
  io.RootLeftRightPreOrder<int> (tree);

  sumOfNodes = workflow.getTreeSumValues<int> (tree);

  workflow.convertToMirror<int> (tree);
  
  NEWLINE();

  io.RootLeftRightPreOrder<int> (tree);
  
  NEWLINE();

  std::cout << sumOfNodes;

  NEWLINE();
  
  return 0;
}