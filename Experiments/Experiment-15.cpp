// Write a program to implement function overriding using class

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override{
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;   // Base class pointer
    Dog d;

    a = &d;
    a->sound();  // Output: Dog barks

    return 0;
}
