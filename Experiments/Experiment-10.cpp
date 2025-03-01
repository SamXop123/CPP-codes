// Write a program to implement default and parameterized constructor using class.

#include <iostream>
using namespace std;

class Car {
    private:
        int speed;
        string carName;
    public:
        Car() {
            cout << "Car object created!" << endl;
        }

        Car(string c, int s) {
            speed = s;
            carName = c;
            cout << carName << " has a top speed of " << speed << " mph." << endl;
        }
};

int main() {

    Car c1;
    Car c2("Hennessey Venom F5", 310);

    return 0;
}
