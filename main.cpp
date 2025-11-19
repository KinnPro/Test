#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;
    int a = 10, b = 5;
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition: " << calc.add(a, b) << endl;
    cout << "Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Multiplication: " << calc.multiply(a, b) << endl;
    
    try {
        cout << "Division: " << calc.divide(a, b) << endl;
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    
    return 0;
}