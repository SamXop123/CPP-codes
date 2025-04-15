// Design a generic function for finding the largest of three numbers

#include <iostream>
using namespace std;

// Generic function to find the largest of three numbers
template <typename T>
T findLargest(T a, T b, T c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    // Test with integers
    int x = 10, y = 20, z = 15;
    cout << "Largest of " << x << ", " << y << ", " << z << " is " << findLargest(x, y, z) << endl;

    // Test with doubles
    double p = 10.5, q = 20.2, r = 15.8;
    cout << "Largest of " << p << ", " << q << ", " << r << " is " << findLargest(p, q, r) << endl;

    return 0;
}
