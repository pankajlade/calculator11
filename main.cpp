// main.cpp file

#include <iostream>
#include "calculator.h"

int main() {
  Calculator calc;

  int a = 10;
  int b = 5;

  std::cout << "a + b = " << calc.add(a, b) << std::endl;
  std::cout << "a - b = " << calc.subtract(a, b) << std::endl;
  std::cout << "a * b = " << calc.multiply(a, b) << std::endl;
  std::cout << "a / b = " << calc.divide(a, b) << std::endl;
  std::cout << "this is a calculator" << std::endl;

  return 0;
}
