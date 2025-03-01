// Write a program to implement static and dynamic polymorphism using class.

#include <iostream>
using namespace std;

// Static Polymorphism - Function Overloading
class Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

    // Overloading
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

// Dynamic Polymorphism - Using Virtual Function
class Animal {
public:
    virtual void sound() {  // Virtual function (allows overriding)
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Overriding base class function
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 2 numbers: " << calc.add(5, 10) << endl;
    cout << "Sum of 3 numbers: " << calc.add(5, 10, 15) << endl;

    Animal* animalPtr;  // Base class pointer
    Dog d;
    animalPtr = &d;

    animalPtr->sound();  // This Calls Dog's sound() due to runtime polymorphism

    return 0;
}
