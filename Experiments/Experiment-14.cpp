
// Write a program to implement function and operator overloading using class.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function Overloading
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    // Operator Overloading
    int value;

    Calculator(int v = 0) {
        value = v;
    }

    Calculator operator+(const Calculator& obj) {
        Calculator result;
        result.value = this->value + obj.value;
        return result;
    }
};

int main() {
    Calculator c1(10), c2(20);
    Calculator c3 = c1 + c2;  // Operator overloading

    cout << "Function Overloading:" << endl;
    Calculator calc;
    cout << "add(int, int): " << calc.add(2, 3) << endl;
    cout << "add(double, double): " << calc.add(2.5, 3.7) << endl;

    cout << "\nOperator Overloading:" << endl;
    cout << "c1 + c2 = " << c3.value << endl;

    return 0;
}
