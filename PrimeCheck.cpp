#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}
