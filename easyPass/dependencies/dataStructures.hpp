#ifndef STD_LENGTH
#define STD_LENGTH 10000
#endif

#ifndef MATRIX_STD_LENGTH
#define MATRIX_STD_LENGTH 100
#endif

namespace dataStructures {

  template <class Type> class oneDimensionalArrayType {
  private:
    int standardSize = 0;

  public:
    oneDimensionalArrayType () {}

    int & length = standardSize;
    int startPoint = standardSize;
    int endPoint = standardSize;

    Type * oneDimensionalArray = new Type[STD_LENGTH];

    virtual ~oneDimensionalArrayType () {}
  };

  template <class Type> class matrixType {
  private:
    int standardSize = 0;

  public:
    matrixType () {}

    int line = standardSize;
    int & lineRefference = line;
    int column = standardSize;
    int & columnRefference = column;

    int startLinePoint = standardSize;
    int endLinePoint = standardSize;
    int startColumnPoint = standardSize;
    int endColumnPoint = standardSize;

    oneDimensionalArrayType<Type> mainDiagonal;
    oneDimensionalArrayType<Type> aboveMainDiagonal;
    oneDimensionalArrayType<Type> underMainDiagonal;
    oneDimensionalArrayType<Type> secondaryDiagonal;
    oneDimensionalArrayType<Type> aboveSecondaryDiagonal;
    oneDimensionalArrayType<Type> underSecondaryDiagonal;
    oneDimensionalArrayType<Type> northElements;
    oneDimensionalArrayType<Type> southElements;
    oneDimensionalArrayType<Type> eastElements;
    oneDimensionalArrayType<Type> westElements;

    Type matrix[MATRIX_STD_LENGTH][MATRIX_STD_LENGTH];

    virtual ~matrixType () {}
  };

  template <class Type> class binaryTreeType {

  public:
    binaryTreeType () {}

    Type value;
    binaryTreeType<Type> * leftLeaf;
    binaryTreeType<Type> * rightLeaf;

    virtual ~binaryTreeType () {}
  };

  template <class Type> class graphType {
  private:
    int standardSize = 0;

  public:
    graphType () {
      adjacencyMatrix.line = vertices;
      adjacencyMatrix.column = adjacencyMatrix.line;
      adjacencyMatrix.startLinePoint = adjacencyMatrix.startColumnPoint;
      adjacencyMatrix.endLinePoint = adjacencyMatrix.endColumnPoint;
    }

    int vertices = standardSize;
    int & verticesRefference = vertices;
    int edges = standardSize;
    int & edgesRefference = edges;

    matrixType<Type> adjacencyMatrix;
    oneDimensionalArrayType<Type> verticesValency;

    virtual ~graphType () {}
  };

  template <class Type> class limits {
  private:
    int standardLimitSize = 0;

  public:
    limits () {}

    Type minimLimit = standardLimitSize;
    Type maximLimit = standardLimitSize;

    virtual ~limits () {}
  };
}
