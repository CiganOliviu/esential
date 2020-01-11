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

  std::string getMaximumValueOneDimensionalArrayZeroError = "";
  std::string getMaximumValueOneDimensionalArrayNegativeError = "";

  std::string getOneDimensionalArrayElementsSumZeroError = "";
  std::string getOneDimensionalArrayElementsSumNegativeError = "";

  std::string getOneDimensionalArrayElementsProductZeroError = "";
  std::string getOneDimensionalArrayElementsProductNegativeError = "";

  std::string getOneDimensionalArrayElementsDifferenceZeroError = "";
  std::string getOneDimensionalArrayElementsDifferenceNegativeError = "";

  std::string getOneDimensionalArrayElementsDivisionZeroError = "";
  std::string getOneDimensionalArrayElementsDivisionNegativeError = "";

  virtual ~errorsHandler () {}
};
