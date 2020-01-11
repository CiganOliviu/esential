#include "../easyPass/easyPass.hpp"
#include "errorsHandler.hpp"

#include <fstream>

class oneDimensionalArraysWorkFlow {
private:
  errorsHandler __errors__;
  validationRules __validations__;

public:
  oneDimensionalArraysWorkFlow () {}

  template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> void outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);

  template <class Type> Type getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDifference (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> Type getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator);
  template <class Type> bool checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);
  template <class Type> void addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition);
  template <class Type> bool isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value);
  
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);
  template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);

  virtual ~oneDimensionalArraysWorkFlow () {}
};
