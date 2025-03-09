#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) {
      value = v;
    }

    // Overloading the '+' operator
    Number operator+(Number n) {
        return Number(value + n.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(5), n2(10);
    Number sum = n1 + n2;  // Calls overloaded '+' operator
    sum.display();  // Output: Value: 15
    return 0;
}
