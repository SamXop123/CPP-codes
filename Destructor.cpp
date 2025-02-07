#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    // Constructor
    Car(string b) {
        brand = b;
        cout << "Constructor called! Car brand: " << brand << endl;
    }

    // Destructor
    ~Car() {
        cout << "Destructor called! Cleaning up Car: " << brand << endl;
    }
};

int main() {
    Car car1("Tesla");  // Constructor is called
    return 0;  // Destructor is called when main() ends
}
