#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    // Default constructor
    Car() {
        brand = "Unknown";
        year = 0;
    }

    // Parameterized constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Another constructor with only one parameter
    Car(string b) {
        brand = b;
        year = 2024;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;                // Calls default constructor
    Car car2("Toyota", 2022); // Calls parameterized constructor
    Car car3("Honda");        // Calls single-parameter constructor

    car1.display();
    car2.display();
    car3.display();

    return 0;
}