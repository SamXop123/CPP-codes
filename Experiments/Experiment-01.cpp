
// Write a program to multiply two no. Entered by user by defining function declared and definition inside the class.

#include <iostream>
using namespace std;

class Multiplication {

public:
    int a, b;

    void getInput() {
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter b:" << endl;
        cin >> b;
    }

    int multiply() {
        return a * b;
    }
};

int main() {
    Multiplication m1;
    m1.getInput();
    cout << "The multiplication of a and b is: " << m1.multiply() << endl;
    return 0;
}
