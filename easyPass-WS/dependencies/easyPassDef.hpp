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

#include "coreDependencies.hpp"
#include "dataStructures/dataStructures.hpp"
#include "dataStructures/calculationStructures.hpp"
#include "dataStructures/geometryStructures.hpp"
#include "errorMessages.hpp"
#include "preprocessors.hpp"

using namespace dataStructures;
using namespace calculationStructures;

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
    template <class Type> bool isNotNegative (Type parameter);
    template <class Type> bool isNotZero (Type parameter);
    template <class Type> bool isNegativeOrZero (Type parameter);
    template <class Type> bool isNotNegativeOrZero (Type parameter);
    template <class Type> bool isBigger (Type parameterOne, Type parameterTwo);
    template <class Type> bool isLower (Type parameterOne, Type parameterTwo);

    template <class Type> bool isNull (Type parameter);
    template <class Type> bool isNotNull (Type parameter);

    template <class Type> bool isEqualObjectBased (limits<Type> limitsObject);
    template <class Type> bool isEqualParameterBased (Type parameterOne, Type parameterTwo);
    template <class Type> bool isNotEqualObjectBased (limits<Type> limitsObject);
    template <class Type> bool isNotEqualParameterBased (Type parameterOne, Type parameterTwo);

    virtual ~validationRules () {}
  };

  class errorsHandler {
  private:
    errorMessages __errorMessages__;
    validationRules __validations__;

  public:
    errorsHandler () {}

    template <class Type> void standardHandlerOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, const char coreFunction[]);
    template <class Type> void standardHandlerMatrix (matrixType<Type> MTObject, const char coreFunction[]);

    template <class Type> void startEndPointsHandlerOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo, const char coreFunction[]);
    template <class Type> void startEndPointsHandlerMatrices (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo, const char coreFunction[]);

    template <class Type> void equalityHandlerOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo, const char coreFunction[]);
    template <class Type> void equalityHandlerMatrices (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo, const char coreFunction[]);

    template <class Type> void checkLengthHandler (iteratorObject<Type> ItObject, int length, const char coreFunction[]);

    void standardFileHandler (std::ifstream & file, const char coreFunction[]);

    template <class Type> void zeroNumberHandler (Type parameter, const char coreFunction[]);
    template <class Type> void negativeNumberHandler (Type parameter, const char coreFunction[]);

    virtual ~errorsHandler () {}
  };

  class randomGenerator {
  private:
    errorsHandler __handler__;

  public:
    randomGenerator () {}

    template <class Type> Type numberGenerator (limits<Type> limitsObject);
    template <class Type> Type staticNumberGenerator (limits<Type> limitsObject);
    template <class Type> void oneDimensionalArrayGenerator (oneDimensionalArrayType<Type> ODAObject, limits<int> limitsObject);
    template <class Type> void matrixGenerator (matrixType<Type> & MTObject, limits<int> limitsObject);

    virtual ~randomGenerator () {}
  };

  class lowLevelSupport {
  private:
    errorsHandler __handler__;
    
  public:
    lowLevelSupport () {}

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

    virtual ~lowLevelSupport () {}
  };


  class checkAndSupport {
  private:
    errorsHandler __handler__;

  public:
    checkAndSupport () {}

    template <class Type> Type returnTheMaximumParameter (limits<Type> limitsObject);
    template <class Type> Type returnTheMinimumParameter (limits<Type> limitsObject);
    template <class Type> void interchangeValues (Type & parameterOne, Type & parameterTwo);

    virtual ~checkAndSupport () {}
  };

  class portData {
  private:
    errorsHandler __handler__;

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
    errorsHandler __handler__;

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
