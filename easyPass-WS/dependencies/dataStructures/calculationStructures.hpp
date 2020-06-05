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

namespace calculationStructures {

  template <class Type> class limits {
  private:
    int standardLimitSize = 0;

  public:
    limits () {}

    Type minimLimit = standardLimitSize;
    Type maximLimit = standardLimitSize;

    virtual ~limits () {}
  };

  class linearEquation {

  public:
    linearEquation () {};

    float slope;
    float y_intercept;
    float root;

    virtual ~linearEquation () {}
  };

  class quadraticEquation {

  public:
    quadraticEquation () {}

    float coefficient_a;
    float coefficient_b;
    float coefficient_c;
    limits<float> roots;

    virtual ~quadraticEquation () {}
  };

  class complexNumber {
  private:
    float standardComplexNumber = 1;

  public:
    complexNumber () {}

    unsigned int complexNumberLength = standardComplexNumber;
    float realPart = standardComplexNumber;
    float imaginaryPart = standardComplexNumber;

    virtual ~complexNumber () {}
  };
}