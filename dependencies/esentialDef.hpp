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

#include "../easyPass/easyPass.hpp"
#include "errorsHandler.hpp"

class oneDimensionalArraysWorkFlow {
private:
  errorsHandler __errors__;
  validationRules __validations__;

  template <class Type> Type sortAndNormalizeNumber (Type parameter);

public:
  oneDimensionalArraysWorkFlow () {}

  template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> void outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> Type getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> Type getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDifference (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject);

  template <class Type> void oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator);
  template <class Type> bool checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition);
  template <class Type> bool isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value);
  template <class Type> void normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);

  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);

  template <class Type> void bubbleSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void minimumValueSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void insertionSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void selectionSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void shellSort (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);

  virtual ~oneDimensionalArraysWorkFlow () {}
};

class matricesWorkFlow {
private:
  errorsHandler __errors__;
  validationRules __validations__;

  template <class Type> Type sortAndNormalizeNumber (Type parameter);

public:
  matricesWorkFlow () {}

  template <class Type> void readMatrix (matrixType<Type> & matrixObject);
  template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);
  template <class Type> void readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject);

  template <class Type> void outputMatrix (matrixType<Type> matrixObject);
  template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);
  template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);

  template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);
  template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);

  template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);
  template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);

  template <class Type> void normalizeMatrix (matrixType<Type> & matrixObject);

  virtual ~matricesWorkFlow () {}
};
