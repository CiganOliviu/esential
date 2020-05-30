/*
MIT License

Copyright (c) 2020 Cigan Oliviu David

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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

  class linearEquation {

  public:
    linearEquation () {};

    float slope;
    float y_intercept;
    float root;

    virtual ~linearEquation () {}
  };

  class quadraticEquation {

  public:
    quadraticEquation () {}

    float coefficient_a;
    float coefficient_b;
    float coefficient_c;
    limits<float> roots;

    virtual ~quadraticEquation () {}
  };

  class complexNumber {
  private:
    float standardComplexNumber = 1;

  public:
    complexNumber () {}

    unsigned int complexNumberLength = standardComplexNumber;
    float realPart = standardComplexNumber;
    float imaginaryPart = standardComplexNumber;

    virtual ~complexNumber () {}
  };

  template <class Type> class linkedCentrum {

  public:
    linkedCentrum () {}

    Type data;
    linkedCentrum<Type> * nextLinkedValue;

    virtual ~linkedCentrum () {}
  };

  template <class Type> class doubleLinkedCentrum {

  public:
    doubleLinkedCentrum () {}

    Type data;
    doubleLinkedCentrum<Type> * nextDoubleLinkedValue;
    doubleLinkedCentrum<Type> * previoustDoubleLinkedValue;

    virtual ~doubleLinkedCentrum () {}
  };

  template <class Type> class iteratorObject {
    private:
     int standardLength = 0;

    public:
      iteratorObject (int inputLength) { standardLength = inputLength; }
      
      #define constantLength standardLength
      
      Type * iteratorArray = new Type[constantLength];

      virtual ~iteratorObject () {}
  };
}
