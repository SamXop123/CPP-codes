// Write a program to implement function template and class template.


#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Class Template
template <typename T>
class Calculator {
public:
    T num1, num2;

    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }

    T multiply() {
        return num1 * num2;
    }
};

int main() {
    // Using function template
    cout << "Sum of integers: " << add<int>(5, 10) << endl;
    cout << "Sum of floats: " << add<float>(5.5, 2.2) << endl;

    // Using class template
    Calculator<int> intCalc(3, 7);
    cout << "Integer addition: " << intCalc.add() << endl;
    cout << "Integer multiplication: " << intCalc.multiply() << endl;

    Calculator<double> doubleCalc(2.5, 4.5);
    cout << "Double addition: " << doubleCalc.add() << endl;
    cout << "Double multiplication: " << doubleCalc.multiply() << endl;

    return 0;
}
