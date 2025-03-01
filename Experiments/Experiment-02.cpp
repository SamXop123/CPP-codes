
// Write a program to subtract two no. Entered by user by defining function declaration inside the class and function definition outside the class.

#include <iostream>
using namespace std;

class Subtraction {
public:
    int a, b;
    int subtract();
};

int Subtraction::subtract() {
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;

    return a - b;
}

int main() {
    Subtraction s1;
    int result = s1.subtract();
    cout << "Subtraction a-b is: " << result << endl;
    return 0;
}
