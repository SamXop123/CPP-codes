// Write a program to implement friend class and friend function.

#include <iostream>
using namespace std;

class Car {
    int speed;  

public:
    
    Car(int s) {
        speed = s;
        cout << "Car with speed " << speed << " km/h created." << endl;
    }

    friend void compareSpeed(Car &car1, Car &car2);
};

void compareSpeed(Car &car1, Car &car2) {
    if (car1.speed > car2.speed) {
        cout << "Car 1 is faster with speed: " << car1.speed << " km/h" << endl;
    } else if (car1.speed < car2.speed) {
        cout << "Car 2 is faster with speed: " << car2.speed << " km/h" << endl;
    } else {
        cout << "Both cars have the same speed: " << car1.speed << " km/h" << endl;
    }
}

int main() {
    cout << "Enter the speed of first car (km/h): ";
    int speed1;
    cin >> speed1;

    cout << "Enter the speed of second car (km/h): ";
    int speed2;
    cin >> speed2;

    Car c1(speed1);
    Car c2(speed2);

    compareSpeed(c1, c2);

    return 0;
}
