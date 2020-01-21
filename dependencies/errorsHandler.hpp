class errorsHandler {
private:

public:
  errorsHandler () {}

  std::string openFileError = "Unable to open file\n";

  std::string readOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string readOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void readOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string readStaticFileOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";
  std::string readStaticFileOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void readStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";

  std::string readDynamicFileOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";
  std::string readDynamicFileOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void readDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";

  std::string outputOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string outputOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void outputOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string outputStaticFileOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";
  std::string outputStaticFileOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void outputStaticFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";

  std::string outputDynamicFileOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";
  std::string outputDynamicFileOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void outputDynamicFileOneDimensionalArray (char * fileName, oneDimensionalArrayType<Type> ODAObject);";

  std::string getMinimumValueOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> Type getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string getMinimumValueOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> Type getMinimumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string getMinimumValueOneDimensionalArrayDivideEtEmperaZeroError = "Unable to process with length as zero in template <class Type> Type getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);";
  std::string getMinimumValueOneDimensionalArrayDivideEtEmperaNegativeError = "Unable to process with negative length in template <class Type> Type getMinimumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);";

  std::string getMaximumValueOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> Type getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string getMaximumValueOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> Type getMaximumValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string getMaximumValueOneDimensionalArrayDivideEtEmperaZeroError = "Unable to process with length as zero in template <class Type> Type getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);";
  std::string getMaximumValueOneDimensionalArrayDivideEtEmperaNegativeError = "Unable to process with negative length in template <class Type> Type getMaximumValueOneDimensionalArrayDivideEtEmpera (limits<Type> interval, oneDimensionalArrayType<Type> ODAObject);";

  std::string getOneDimensionalArrayElementsSumZeroError = "Unable to process with length as zero in template <class Type> Type getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject);";
  std::string getOneDimensionalArrayElementsSumNegativeError = "Unable to process with negative length in template <class Type> Type getOneDimensionalArrayElementsSum (oneDimensionalArrayType<Type> ODAObject);";

  std::string getOneDimensionalArrayElementsProductZeroError = "Unable to process with length as zero in template <class Type> Type getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject);";
  std::string getOneDimensionalArrayElementsProductNegativeError = "Unable to process with negative length in template <class Type> Type getOneDimensionalArrayElementsProduct (oneDimensionalArrayType<Type> ODAObject);";

  std::string getOneDimensionalArrayElementsDifferenceZeroError = "Unable to process with length as zero in template <class Type> Type getOneDimensionalArrayElementsDifference (oneDimensionalArrayType<Type> ODAObject);";
  std::string getOneDimensionalArrayElementsDifferenceNegativeError = "Unable to process with negative length in template <class Type> Type getOneDimensionalArrayElementsDifference (oneDimensionalArrayType<Type> ODAObject);";

  std::string getOneDimensionalArrayElementsDivisionZeroError = "Unable to process with length as zero in template <class Type> Type getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject);";
  std::string getOneDimensionalArrayElementsDivisionNegativeError = "Unable to process with negative length in template <class Type> Type getOneDimensionalArrayElementsDivision (oneDimensionalArrayType<Type> ODAObject);";

  std::string oneDimensionalArrayInitializationZeroError = "Unable to process with length as zero in template <class Type> void oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator);";
  std::string oneDimensionalArrayInitializationNegativeError = "Unable to process with negative length in template <class Type> void oneDimensionalArrayInitialization (oneDimensionalArrayType<Type> ODAObject, Type initializator);";

  std::string checkIfSymetricOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> bool checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string checkIfSymetricOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> bool checkIfSymetricOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string addValueOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition);";
  std::string addValueOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void addValueOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, limits<Type> valueAndPosition);";

  std::string isValueInOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> bool isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value);";
  std::string isValueInOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> bool isValueInOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject, Type value);";

  std::string normalizeOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string normalizeOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void normalizeOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string getOneDimensionalArraysSumODAObjectOneZeroError = "Unable to process with length as zero for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysSumODAObjectTwoZeroError = "Unable to process with length as zero for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysSumODAObjectOneNegativeError = "Unable to process with negative length for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysSumODAObjectTwoNegativeError = "Unable to process with negative length for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysSumStartPointsError = "Unable to process with unequal start points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysSumEndPointsError = "Unable to process with unequal end points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysSum (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";

  std::string getOneDimensionalArraysProductODAObjectOneZeroError = "Unable to process with length as zero for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysProductODAObjectTwoZeroError = "Unable to process with length as zero for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysProductODAObjectOneNegativeError = "Unable to process with negative length for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysProductODAObjectTwoNegativeError = "Unable to process with negative length for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysProductStartPointsError = "Unable to process with unequal start points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysProductEndPointsError = "Unable to process with unequal end points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysProduct (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";

  std::string getOneDimensionalArraysDifferenceODAObjectOneZeroError = "Unable to process with length as zero for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDifferenceODAObjectTwoZeroError = "Unable to process with length as zero for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDifferenceODAObjectOneNegativeError = "Unable to process with negative length for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDifferenceODAObjectTwoNegativeError = "Unable to process with negative length for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDifferenceStartPointsError = "Unable to process with unequal start points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDifferenceEndPointsError = "Unable to process with unequal end points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDifference (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";

  std::string getOneDimensionalArraysDivisionODAObjectOneZeroError = "Unable to process with length as zero for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDivisionODAObjectTwoZeroError = "Unable to process with length as zero for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDivisionODAObjectOneNegativeError = "Unable to process with negative length for ODAObjectOne in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDivisionODAObjectTwoNegativeError = "Unable to process with negative length for ODAObjectTwo in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDivisionStartPointsError = "Unable to process with unequal start points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";
  std::string getOneDimensionalArraysDivisionEndPointsError = "Unable to process with unequal end points in template <class Type> oneDimensionalArrayType<Type> getOneDimensionalArraysDivision (oneDimensionalArrayType<Type> ODAObjectOne, oneDimensionalArrayType<Type> ODAObjectTwo);";

  std::string bubbleSortZeroError = "Unable to process with length as zero in template <class Type> void bubbleSort (oneDimensionalArrayType<Type> ODAObject);";
  std::string bubbleSortNegativeError = "Unable to process with negative length in template <class Type> void bubbleSort (oneDimensionalArrayType<Type> ODAObject);";

  std::string minimumValueSortZeroError = "Unable to process with length as zero in template <class Type> void minimumValueSort (oneDimensionalArrayType<Type> ODAObject);";
  std::string minimumValueSortNegativeError = "Unable to process with negative length in template <class Type> void minimumValueSort (oneDimensionalArrayType<Type> ODAObject);";

  std::string insertionSortZeroError = "Unable to process with length as zero in template <class Type> void insertionSort (oneDimensionalArrayType<Type> ODAObject);";
  std::string insertionSortNegativeError = "Unable to process with negative length in template <class Type> void insertionSort (oneDimensionalArrayType<Type> ODAObject);";

  std::string selectionSortZeroError = "Unable to process with length as zero in template <class Type> void selectionSort (oneDimensionalArrayType<Type> ODAObject);";
  std::string selectionSortNegativeError = "Unable to process with negative length in template <class Type> void selectionSort (oneDimensionalArrayType<Type> ODAObject);";

  std::string shellSortZeroError = "Unable to process with length as zero in template <class Type> void shellSort (oneDimensionalArrayType<Type> ODAObject);";
  std::string shellSortNegativeError = "Unable to process with negative length in template <class Type> void shellSort (oneDimensionalArrayType<Type> ODAObject);";

  std::string reverseOneDimensionalArrayZeroError = "Unable to process with length as zero in template <class Type> void reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";
  std::string reverseOneDimensionalArrayNegativeError = "Unable to process with negative length in template <class Type> void reverseOneDimensionalArray (oneDimensionalArrayType<Type> ODAObject);";

  std::string readMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";
  std::string readMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";

  std::string readStaticFileMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);";
  std::string readStaticFileMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);";

  std::string readDynamicFileMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";
  std::string readDynamicFileMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject);";

  std::string outputMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void outputMatrix (matrixType<Type> matrixObject);";
  std::string outputMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void outputMatrix (matrixType<Type> matrixObject);";

  std::string outputStaticFileMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);";
  std::string outputStaticFileMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);";

  std::string outputDynamicFileMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);";
  std::string outputDynamicFileMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);";

  std::string getMaximumValueFromMatrixZeroError = "Unable to handle line or column as zero in template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);";
  std::string getMaximumValueFromMatrixNegativeError = "Unable to handle negative line or column in template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);";

  std::string getMinimumValueFromMatrixZeroError = "Unable to handle line or column as zero in template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);";
  std::string getMinimumValueFromMatrixNegativeError = "Unable to handle negative line or column in template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);";

  std::string getMatrixElementsSumZeroError = "Unable to handle line or column as zero in template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);";
  std::string getMatrixElementsSumNegativeError = "Unable to handle negative line or column in template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);";

  std::string getMatrixElementsProductZeroError = "Unable to handle line or column as zero in template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);";
  std::string getMatrixElementsProductNegativeError = "Unable to handle negative line or column in template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);";

  std::string getMatrixElementsDifferenceZeroError = "Unable to handle line or column as zero in template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);";
  std::string getMatrixElementsDifferenceNegativeError = "Unable to handle negative line or column in template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);";

  std::string getMatrixElementsDivisionZeroError = "Unable to handle line or column as zero in template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);";
  std::string getMatrixElementsDivisionNegativeError = "Unable to handle negative line or column in template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);";

  std::string normalizeMatrixZeroError = "Unable to handle line or column as zero in template <class Type> void normalizeMatrix (matrixType<Type> matrixObject);";
  std::string normalizeMatrixNegativeError = "Unable to handle negative line or column in template <class Type> void normalizeMatrix (matrixType<Type> matrixObject);";

  virtual ~errorsHandler () {}
};
