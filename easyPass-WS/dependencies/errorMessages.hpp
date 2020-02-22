class errorMessages {

public:
  errorMessages () {}

  std::string filesError = "Unable to open file ";

  std::string zeroNumberError = "Unable to process with number as zero in ";
  std::string negativeNumberError = "Unable to process with negative number in ";

  std::string oneDimensionalArrayZeroLengthError = "Unable to process one dimensional array with length as zero in ";
  std::string oneDimensionalArrayNegativeLengthError = "Unable to process one dimensional array with negative length in ";

  std::string unequalLengthError = "Unable to process one dimensional arrays with unequal lengths in ";
  std::string unequalStartPointsError = "Unable to process one dimensional arrays with unequal start points in ";
  std::string unequalEndPointsError = "Unable to process one dimensional arrays with unequal end points in ";

  std::string matrixZeroLineError = "Unable to process matrix with line as zero in ";
  std::string matrixNegativeLineError = "Unable to process matrix with negative line in ";
  std::string matrixZeroColumnError = "Unable to process matrix with column as zero in ";
  std::string matrixNegativeColumnError = "Unable to process matrix with negative column in ";

  std::string unequalLinesError = "Unable to process matrices with unequal lines in ";
  std::string unequalColumnsError = "Unable to process matrices with unequal columns in ";
  std::string unequalStartLinePointsError = "Unable to process matrices with unequal start line points in ";
  std::string unequalEndLinePointsError = "Unable to process matrices with unequal end line points in ";
  std::string unequalStartColumnPointsError = "Unable to process matrices with unequal start column points in ";
  std::string unequalEndColumnPointsError = "Unable to process matrices with unequal end column points in ";

  virtual ~errorMessages () {}
};
