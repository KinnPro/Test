#include "calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

double Calculator::divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero!";
    }
    return static_cast<double>(a) / b;
}

// 实现新函数
double Calculator::squareRoot(double x) {
    if (x < 0) throw "Cannot calculate square root of negative number";
    // 简单实现，实际应使用更精确的算法
    double result = x;
    for (int i = 0; i < 10; i++) {
        result = (result + x / result) / 2;
    }
    return result;
}

double Calculator::logarithm(double x) {
    if (x <= 0) throw "Logarithm undefined for non-positive numbers";
    // 简单实现
    int count = 0;
    while (x >= 2) {
        x /= 2;
        count++;
    }
    return count + (x - 1);
}