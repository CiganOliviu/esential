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

  std::string readMatrixZeroError = "Unable to process line or column as zero in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";
  std::string readMatrixNegativeError = "Unable to process negative line or column in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";

  std::string readStaticFileMatrixZeroError = "Unable to process line or column as zero in template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);";
  std::string readStaticFileMatrixNegativeError = "Unable to process negative line or column in template <class Type> void readStaticFileMatrix (char * fileName, matrixType<Type> & matrixObject);";

  std::string readDynamicFileMatrixZeroError = "Unable to process line or column as zero in template <class Type> void readMatrix (matrixType<Type> & matrixObject);";
  std::string readDynamicFileMatrixNegativeError = "Unable to process negative line or column in template <class Type> void readDynamicFileMatrix (char * fileName, matrixType<Type> & matrixObject);";

  std::string outputMatrixZeroError = "Unable to process line or column as zero in template <class Type> void outputMatrix (matrixType<Type> matrixObject);";
  std::string outputMatrixNegativeError = "Unable to process negative line or column in template <class Type> void outputMatrix (matrixType<Type> matrixObject);";

  std::string outputStaticFileMatrixZeroError = "Unable to process line or column as zero in template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);";
  std::string outputStaticFileMatrixNegativeError = "Unable to process negative line or column in template <class Type> void outputStaticFileMatrix (char * fileName, matrixType<Type> matrixObject);";

  std::string outputDynamicFileMatrixZeroError = "Unable to process line or column as zero in template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);";
  std::string outputDynamicFileMatrixNegativeError = "Unable to process negative line or column in template <class Type> void outputDynamicFileMatrix (char * fileName, matrixType<Type> matrixObject);";

  std::string getMaximumValueFromMatrixZeroError = "Unable to process line or column as zero in template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);";
  std::string getMaximumValueFromMatrixNegativeError = "Unable to process negative line or column in template <class Type> Type getMaximumValueFromMatrix (matrixType<Type> matrixObject);";

  std::string getMinimumValueFromMatrixZeroError = "Unable to process line or column as zero in template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);";
  std::string getMinimumValueFromMatrixNegativeError = "Unable to process negative line or column in template <class Type> Type getMinimumValueFromMatrix (matrixType<Type> matrixObject);";

  std::string getMatrixElementsSumZeroError = "Unable to process line or column as zero in template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);";
  std::string getMatrixElementsSumNegativeError = "Unable to process negative line or column in template <class Type> Type getMatrixElementsSum (matrixType<Type> matrixObject);";

  std::string getMatrixElementsProductZeroError = "Unable to process line or column as zero in template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);";
  std::string getMatrixElementsProductNegativeError = "Unable to process negative line or column in template <class Type> Type getMatrixElementsProduct (matrixType<Type> matrixObject);";

  std::string getMatrixElementsDifferenceZeroError = "Unable to process line or column as zero in template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);";
  std::string getMatrixElementsDifferenceNegativeError = "Unable to process negative line or column in template <class Type> Type getMatrixElementsDifference (matrixType<Type> matrixObject);";

  std::string getMatrixElementsDivisionZeroError = "Unable to process line or column as zero in template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);";
  std::string getMatrixElementsDivisionNegativeError = "Unable to process negative line or column in template <class Type> Type getMatrixElementsDivision (matrixType<Type> matrixObject);";

  std::string matrixInitializationZeroError = "Unable to process line or column as zero in template <class Type> void matrixInitialization (matrixType<Type> & matrixObject, Type value);";
  std::string matrixInitializationNegativeError = "Unable to process negative line or column in template <class Type> void matrixInitialization (matrixType<Type> & matrixObject, Type value);";

  std::string normalizeMatrixZeroError = "Unable to process line or column as zero in template <class Type> void normalizeMatrix (matrixType<Type> matrixObject);";
  std::string normalizeMatrixNegativeError = "Unable to process negative line or column in template <class Type> void normalizeMatrix (matrixType<Type> matrixObject);";

  std::string getMatricesSumMatrixObjectOneZeroError = "Unable to process line or column as zero for matrixObjectOne in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumMatrixObjectOneNegativeError = "Unable to process negative line or column for matrixObjectOne in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumMatrixObjectTwoZeroError = "Unable to process line or column as zero for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumMatrixObjectTwoNegativeError = "Unable to process negative line or column for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumStartLinesPointsError = "Unable to process with unequal start line points in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumEndLinesPointsError = "Unable to process with unequal end line points in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumStartColumnPointsError = "Unable to process with unequal start column points in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesSumEndColumnPointsError = "Unable to process with unequal end column points in template <class Type> matrixType<Type> getMatricesSum (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";

  std::string getMatricesProductMatrixObjectOneZeroError = "Unable to process line or column as zero for matrixObjectOne in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductMatrixObjectOneNegativeError = "Unable to process negative line or column for matrixObjectOne in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductMatrixObjectTwoZeroError = "Unable to process line or column as zero for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductMatrixObjectTwoNegativeError = "Unable to process negative line or column for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductStartLinesPointsError = "Unable to process with unequal start line points in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductEndLinesPointsError = "Unable to process with unequal end line points in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductStartColumnPointsError = "Unable to process with unequal start column points in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesProductEndColumnPointsError = "Unable to process with unequal end column points in template <class Type> matrixType<Type> getMatricesProduct (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";

  std::string getMatricesDifferenceMatrixObjectOneZeroError = "Unable to process line or column as zero for matrixObjectOne in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceMatrixObjectOneNegativeError = "Unable to process negative line or column for matrixObjectOne in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceMatrixObjectTwoZeroError = "Unable to process line or column as zero for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceMatrixObjectTwoNegativeError = "Unable to process negative line or column for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceStartLinesPointsError = "Unable to process with unequal start line points in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceEndLinesPointsError = "Unable to process with unequal end line points in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceStartColumnPointsError = "Unable to process with unequal start column points in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDifferenceEndColumnPointsError = "Unable to process with unequal end column points in template <class Type> matrixType<Type> getMatricesDifference (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";

  std::string getMatricesDivisionMatrixObjectOneZeroError = "Unable to process line or column as zero for matrixObjectOne in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionMatrixObjectOneNegativeError = "Unable to process negative line or column for matrixObjectOne in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionMatrixObjectTwoZeroError = "Unable to process line or column as zero for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionMatrixObjectTwoNegativeError = "Unable to process negative line or column for matrixObjectTwo in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionStartLinesPointsError = "Unable to process with unequal start line points in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionEndLinesPointsError = "Unable to process with unequal end line points in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionStartColumnPointsError = "Unable to process with unequal start column points in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";
  std::string getMatricesDivisionEndColumnPointsError = "Unable to process with unequal end column points in template <class Type> matrixType<Type> getMatricesDivision (matrixType<Type> matrixObjectOne, matrixType<Type> matrixObjectTwo);";

  std::string getMatrixMainDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixMainDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixMainDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixMainDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixAboveMainDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixAboveMainDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixAboveMainDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixAboveMainDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixUnderMainDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixUnderMainDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixUnderMainDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixUnderMainDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixSecondaryDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixSecondaryDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixSecondaryDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixSecondaryDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixAboveSecondaryDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixAboveSecondaryDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixAboveSecondaryDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixAboveSecondaryDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixUnderSecondaryDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixUnderSecondaryDiagonal (matrixType<Type> matrixObject);";
  std::string getMatrixUnderSecondaryDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixUnderSecondaryDiagonal (matrixType<Type> matrixObject);";

  std::string getMatrixNorthElementsZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixNorthElements (matrixType<Type> matrixObject);";
  std::string getMatrixNorthElementsNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixNorthElements (matrixType<Type> matrixObject);";

  std::string getMatrixSouthElementsZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixSouthElements (matrixType<Type> matrixObject);";
  std::string getMatrixSouthElementsNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixSouthElements (matrixType<Type> matrixObject);";

  std::string getMatrixEastElementsZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixEastElements (matrixType<Type> matrixObject);";
  std::string getMatrixEastElementsNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixEastElements (matrixType<Type> matrixObject);";

  std::string getMatrixWestElementsZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixWestElements (matrixType<Type> matrixObject);";
  std::string getMatrixWestElementsNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixWestElements (matrixType<Type> matrixObject);";

  std::string getMatrixOrderMainDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixOrderMainDiagonal (matrixType<Type> matrixObject, int order);";
  std::string getMatrixOrderMainDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixOrderMainDiagonal (matrixType<Type> matrixObject, int order);";

  std::string getMatrixOrderSecondaryDiagonalZeroError = "Unable to process line or column as zero in template <class Type> oneDimensionalArrayType<Type> getMatrixOrderSecondaryDiagonal (matrixType<Type> matrixObject, int order);";
  std::string getMatrixOrderSecondaryDiagonalNegativeError = "Unable to process negative line or column in template <class Type> oneDimensionalArrayType<Type> getMatrixOrderSecondaryDiagonal (matrixType<Type> matrixObject, int order);";

  virtual ~errorsHandler () {}
};
