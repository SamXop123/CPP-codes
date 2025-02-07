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
};

int main() {
    Car car1("Tesla");  // Constructor is automatically called
    return 0;
}
