#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    double divide(int a, int b);
   // 添加新函数声明
double squareRoot(double x);
double logarithm(double x);
};

#endif