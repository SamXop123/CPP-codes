#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /, %, ^): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;
                break;
            case '%':
                if ((int)num2 != 0)
                    cout << "Result: " << (int)num1 % (int)num2 << endl;
                else
                    cout << "Error! Modulus by zero is not allowed." << endl;
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operator! Please enter +, -, *, /, %, or ^" << endl;
        }

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;
        
    } while (choice == 'y' || choice == 'Y'); 

    cout << "Thank you for using the calculator! Goodbye.\n";

    return 0;
}
