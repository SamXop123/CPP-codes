#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Parameterized constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Copy constructor
    Car(const Car &obj) {
        brand = obj.brand;
        year = obj.year;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2022); // Calls parameterized constructor
    Car car2 = car1;          // Calls copy constructor

    car1.display();
    car2.display(); // car2 is a copy of car1

    return 0;
}