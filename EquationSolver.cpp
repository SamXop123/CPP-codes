#include <iostream>
#include <cmath>

using namespace std;

void InputVariables(double &a, double &b, double &c) { 
    cout << "Enter the variables in this format: a(x)^2 + bx + c = 0" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
}

double Discriminant(double a, double b, double c) {  
    return (b * b) - (4 * a * c);
}

void findRoots(double a, double b, double c) {
    double d = Discriminant(a, b, c);  
    
    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and distinct: " << r1 << " and " << r2 << endl;
    } 
    else if (d == 0) {
        double r = -b / (2 * a);
        cout << "Roots are real and equal: " << r << endl;
    } 
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex: " << realPart << " +/- " << imaginaryPart << "i" << endl;
    }
}

int main() {
    cout << "======WELCOME TO THE ULTIMATE QUADRATIC EQUATIONS SOLVER======" << endl;
    
    double a, b, c;
    InputVariables(a, b, c);
    findRoots(a, b, c);

    return 0; 
}
