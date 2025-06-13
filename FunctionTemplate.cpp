#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;       // int
    cout << add(2.5, 3.7) << endl;   // double
    cout << add('A', 2) << endl;     // char (A = 65, 65 + 2 = 67 = 'C')
    return 0;
}
