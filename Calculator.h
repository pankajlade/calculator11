// calculator.h file

#ifndef CALCULATOR_H
#define CALCULATOR_H
using namespace std;
class Calculator {
  public:
    Calculator();
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(double a, double b);
};

#endif // CALCULATOR_H
