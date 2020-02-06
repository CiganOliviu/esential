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

#include "dataStructures.hpp"
#include "errorHandler.hpp"

#ifndef ZERO
#define ZERO 0
#endif

using namespace dataStructures;

namespace easyPassDefinitions {

  // should be global for the count process of unit tests and console design
  static int passedCases = ZERO;
  static int failedCases = ZERO;
  static int cases = ZERO;

  HANDLE HANDLE_CONSOLE = GetStdHandle(STD_OUTPUT_HANDLE);

  class systemException : public std::exception {
  private:
    std::string processMessage;

  public:
    systemException (std::string errorMessage) : processMessage(errorMessage) {}

    const char * what () const throw ();

    virtual ~systemException () throw () {}
  };

  class validationRules {

  public:
    validationRules () {}

    template <class Type> bool isNegative (Type parameter);
    template <class Type> bool isZero (Type parameter);
    template <class Type> bool isNegativeOrZero (Type parameter);
    template <class Type> bool isNull (Type parameter);
    template <class Type> bool isNotZero (Type parameter);
    template <class Type> bool isNotNull (Type parameter);
    template <class Type> bool isEqual (limits<Type> limitsObject);
    template <class Type> Type returnTheMaximumParameter (limits<Type> limitsObject);
    template <class Type> Type returnTheMinimumParameter (limits<Type> limitsObject);
    template <class Type> void interchangeValues (Type & parameterOne, Type & parameterTwo);

    virtual ~validationRules () {}
  };

  class randomGenerator {

  private:
    errorHandler __error__;

  public:
    randomGenerator () {}

    template <class Type> Type numberGenerator (limits<Type> limitsObject);
    template <class Type> Type staticNumberGenerator (limits<Type> limitsObject);
    template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<Type> limitsObject);
    template <class Type> void matrixGenerator (matrixType<Type> & MTObject, limits<Type> limitsObject);

    virtual ~randomGenerator () {}
  };

  class checkAndSupport {
  private:
    errorHandler __error__;

  public:
    checkAndSupport () {}

    template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
    template <class Type> void readDynamicFileDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
    template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
    template <class Type> void putsFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

    template <class Type> void readMatrix (matrixType<Type> & MTObject);
    template <class Type> void readDynamicFileMatrix (char * fileName, matrixType<Type> & MTObject);
    template <class Type> void putsMatrix (matrixType<Type> & MTObject);
    template <class Type> void putsFileMatrix (char * fileName, matrixType<Type> & MTObject);

    template <class Type> void readTree (binaryTreeType<Type> *& root);
    template <class Type> void putsTree (binaryTreeType<Type> * root);

    virtual ~checkAndSupport () {}
  };

  class portData {
  private:
    errorHandler __error__;

  public:
    portData () {};

    template <class Type> void portOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
    template <class Type> void portMatrices (matrixType<Type> & matrixObjectOne, matrixType<Type> matrixObjectTwo);
    template <class Type> void portLimits (limits<Type> & limitsObjectOne, limits<Type> limitsObjectTwo);
    template <class Type> void portValues (limits<Type> & limitsObject);

    virtual ~portData () {}
  };

  class assertions {
  private:
    errorHandler __error__;
    validationRules __rules__;

  public:
    assertions () {}

    template <class Type> bool assertPrimitiveDataTypes (limits<Type> limitsObject);
    template <class Type> bool assertLimits (limits<Type> limitsObjectOne, limits<Type> limitsObjectTwo);
    template <class Type> bool assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
    template <class Type> bool assertMatrix (matrixType<Type> & MTObjectOne, matrixType<Type> & MTObjectTwo);

    void countTest (char * testCase, bool testCasePassed);
    void getConclusion ();

    virtual ~assertions () {}
  };
}
