// calculator.cpp file

#include "calculator.h"

Calculator::Calculator() {}

int Calculator::add(int a, int b) {
  return a + b;
}

int Calculator::subtract(int a, int b) {
  return a - b;
}

int Calculator::multiply(int a, int b) {
  return a * b;
}

double Calculator::divide(double a, double b) {
  if (b == 0) {
    return 0;
  }
  return a / b;
}
