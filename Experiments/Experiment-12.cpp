#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "Woof! Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();
    return 0;
}
