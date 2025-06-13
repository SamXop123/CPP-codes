#include <iostream>
using namespace std;

template<class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}
    
    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Sum: " << add() << endl;
        cout << "Difference: " << subtract() << endl;
        cout << "Product: " << multiply() << endl;
        cout << "Quotient: " << divide() << endl;
    }
    
    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> intCalc(10, 5);
    Calculator<double> doubleCalc(10.5, 5.5);
    
    cout << "Integer results:" << endl;
    intCalc.displayResult();
    
    cout << "\nDouble results:" << endl;
    doubleCalc.displayResult();
    
    return 0;
}
