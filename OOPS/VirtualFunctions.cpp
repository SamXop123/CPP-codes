#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function (can be overridden)
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }

    // Pure virtual function (makes Animal an abstract class)
    virtual void habitat() = 0; // Pure virtual
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }

    void habitat() override {
        cout << "Dog lives in home or streets" << endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird chirps" << endl;
    }

    void habitat() override {
        cout << "Bird lives in nests" << endl;
    }
};

int main() {
    // Pointer of base class type
    Animal* a;

    Dog d;
    Bird b;

    // Virtual function call
    a = &d;
    a->sound();
    a->habitat();

    a = &b;
    a->sound();
    a->habitat();

    return 0;
}