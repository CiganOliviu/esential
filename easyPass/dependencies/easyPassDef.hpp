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
    template <class Type> bool isEqual (limits<Type> limitsObject);

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
    template <class Type> void matrixGenerator (matrixType<Type> MTObject, limits<Type> limitsObject);

    virtual ~randomGenerator () {}
  };

  class checkAndSupport {
  private:
    errorHandler __error__;

  public:
    checkAndSupport () {}

    template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
    template <class Type> void putsOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);

    template <class Type> void readMatrix (matrixType<Type> MTObject);
    template <class Type> void putsMatrix (matrixType<Type> MTObject);

    template <class Type> void readTree (binaryTreeType<Type> *& root);
    template <class Type> void putsTree (binaryTreeType<Type> * root);

    virtual ~checkAndSupport () {}
  };

  class assertions {
  private:
    errorHandler __error__;

  public:
    assertions () {}

    template <class Type> bool assertPrimitiveDataTypes (limits<Type> limitsObject);
    template <class Type> bool assertOneDimensionalArrays (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
    template <class Type> bool assertMatrix (matrixType<Type> MTObjectOne, matrixType<Type> MTObjectTwo);

    void countTest (char * testCase, bool testCasePassed);
    void getConclusion ();

    virtual ~assertions () {}
  };
}
