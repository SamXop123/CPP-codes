#include <iostream>
#include <cmath> // Use <cmath> instead of <math.h>

using namespace std;

class Quadratic {
    double Discriminant(); 
    void findRoots(); // Changed return type to void

public:
    double a, b, c;

    Quadratic() {
        cout << "Enter the variables in this format: a(x)^2 + bx + c = 0" << endl;
    }

    void InputVariables() { 
        cout << "Enter a:" << endl;
        cin >> a;
        cout << "Enter b:" << endl;
        cin >> b;
        cout << "Enter c:" << endl;
        cin >> c;
    }
};

double Quadratic::Discriminant() {
    return (b * b) - (4 * a * c); 
}

void Quadratic::findRoots() {
    double d = Discriminant(); // Call Discriminant() instead of using a non-existent variable

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
        cout << "Roots are complex: " << realPart << " ± " << imaginaryPart << "i" << endl;
    }
}

int main() {
    cout << "======WELCOME TO THE ULTIMATE QUADRATIC EQUATIONS SOLVER======" << endl;
    
    char option;
    Quadratic q;
    q.InputVariables();

    double d_val = q.Discriminant();
    cout << "Discriminant: " << d_val << endl; 

    if (d_val < 0) {
        cout << "The discriminant is negative, meaning the solutions are imaginary." << endl;
        cout << "Do you want the answer in terms of imaginary roots? (Y/N): ";
        cin >> option;

        if (option == 'Y' || option == 'y') {
            q.findRoots(); 
        }
        else {
            cout << "Thank you for using our solver! See you next time!" << endl;
        }
    }
    else {
        q.findRoots();
    }

    return 0; 
}
