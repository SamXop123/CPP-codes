#include <iostream>
#include <cmath>
using namespace std;

// Class Creation
class Prime {
public:
    int checkPrime(int number);
};

// Function to check if a number is prime
int Prime::checkPrime(int number) {
    if (number <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Prime p1; //Object Creation

    if (p1.checkPrime(number)) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }

    return 0;
}
