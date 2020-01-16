class errorsHandler {
private:

public:
  errorsHandler () {}

  std::string openFileError = "Unable to open file\n";

  std::string readOneDimensionalArrayZeroError = "";
  std::string readOneDimensionalArrayNegativeError = "";

  std::string readStaticFileOneDimensionalArrayZeroError = "";
  std::string readStaticFileOneDimensionalArrayNegativeError = "";

  std::string readDynamicFileOneDimensionalArrayZeroError = "";
  std::string readDynamicFileOneDimensionalArrayNegativeError = "";

  std::string outputOneDimensionalArrayZeroError = "";
  std::string outputOneDimensionalArrayNegativeError = "";

  std::string outputStaticFileOneDimensionalArrayZeroError = "";
  std::string outputStaticFileOneDimensionalArrayNegativeError = "";

  std::string outputDynamicFileOneDimensionalArrayZeroError = "";
  std::string outputDynamicFileOneDimensionalArrayNegativeError = "";

  std::string getMinimumValueOneDimensionalArrayZeroError = "";
  std::string getMinimumValueOneDimensionalArrayNegativeError = "";

  std::string getMinimumValueOneDimensionalArrayDivideEtEmperaZeroError = "";
  std::string getMinimumValueOneDimensionalArrayDivideEtEmperaNegativeError = "";

  std::string getMaximumValueOneDimensionalArrayZeroError = "";
  std::string getMaximumValueOneDimensionalArrayNegativeError = "";

  std::string getMaximumValueOneDimensionalArrayDivideEtEmperaZeroError = "";
  std::string getMaximumValueOneDimensionalArrayDivideEtEmperaNegativeError = "";

  std::string getOneDimensionalArrayElementsSumZeroError = "";
  std::string getOneDimensionalArrayElementsSumNegativeError = "";

  std::string getOneDimensionalArrayElementsProductZeroError = "";
  std::string getOneDimensionalArrayElementsProductNegativeError = "";

  std::string getOneDimensionalArrayElementsDifferenceZeroError = "";
  std::string getOneDimensionalArrayElementsDifferenceNegativeError = "";

  std::string getOneDimensionalArrayElementsDivisionZeroError = "";
  std::string getOneDimensionalArrayElementsDivisionNegativeError = "";

  std::string oneDimensionalArrayInitializationZeroError = "";
  std::string oneDimensionalArrayInitializationNegativeError = "";

  std::string checkIfSymetricOneDimensionalArrayZeroError = "";
  std::string checkIfSymetricOneDimensionalArrayNegativeError = "";

  std::string addValueOneDimensionalArrayZeroError = "";
  std::string addValueOneDimensionalArrayNegativeError = "";

  std::string isValueInOneDimensionalArrayZeroError = "";
  std::string isValueInOneDimensionalArrayNegativeError = "";

  std::string getOneDimensionalArraysSumODAObjectOneZeroError = "";
  std::string getOneDimensionalArraysSumODAObjectTwoZeroError = "";
  std::string getOneDimensionalArraysSumODAObjectOneNegativeError = "";
  std::string getOneDimensionalArraysSumODAObjectTwoNegativeError = "";
  std::string getOneDimensionalArraysSumStartPointsError = "";
  std::string getOneDimensionalArraysSumEndPointsError = "";

  std::string getOneDimensionalArraysProductODAObjectOneZeroError = "";
  std::string getOneDimensionalArraysProductODAObjectTwoZeroError = "";
  std::string getOneDimensionalArraysProductODAObjectOneNegativeError = "";
  std::string getOneDimensionalArraysProductODAObjectTwoNegativeError = "";
  std::string getOneDimensionalArraysProductStartPointsError = "";
  std::string getOneDimensionalArraysProductEndPointsError = "";

  std::string getOneDimensionalArraysDifferenceODAObjectOneZeroError = "";
  std::string getOneDimensionalArraysDifferenceODAObjectTwoZeroError = "";
  std::string getOneDimensionalArraysDifferenceODAObjectOneNegativeError = "";
  std::string getOneDimensionalArraysDifferenceODAObjectTwoNegativeError = "";
  std::string getOneDimensionalArraysDifferenceStartPointsError = "";
  std::string getOneDimensionalArraysDifferenceEndPointsError = "";

  std::string getOneDimensionalArraysDivisionODAObjectOneZeroError = "";
  std::string getOneDimensionalArraysDivisionODAObjectTwoZeroError = "";
  std::string getOneDimensionalArraysDivisionODAObjectOneNegativeError = "";
  std::string getOneDimensionalArraysDivisionODAObjectTwoNegativeError = "";
  std::string getOneDimensionalArraysDivisionStartPointsError = "";
  std::string getOneDimensionalArraysDivisionEndPointsError = "";

  std::string bubbleSortZeroError = "";
  std::string bubbleSortNegativeError = "";

  std::string minimumValueSortZeroError = "";
  std::string minimumValueSortNegativeError = "";

  std::string quickSortZeroError = "";
  std::string quickSortNegativeError = "";

  std::string insertionSortZeroError = "";
  std::string insertionSortNegativeError = "";

  std::string selectionSortZeroError = "";
  std::string selectionSortNegativeError = "";

  std::string shellSortZeroError = "";
  std::string shellSortNegativeError = "";

  virtual ~errorsHandler () {}
};
