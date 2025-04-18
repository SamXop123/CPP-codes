// Write a program to find prime number entered by user with the help of class

#include <iostream>
using namespace std;

class Prime {
public:
    int checkPrime(int number);
};

// Function to check if a number is prime
int Prime::checkPrime(int number) {
    if (number <= 1) return 0;
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Prime checker;
    if (checker.checkPrime(number)) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }

    return 0;
}
