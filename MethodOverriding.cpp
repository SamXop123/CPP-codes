#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { //Virtual function for polymorphism
        cout << "Animal makes a sound" << endl;
    }
};

//Inherited class:
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animal; //Pointer to base class
    Dog dog;

    animal = &dog; //Pointing to derived class object
    animal->sound(); //Calls derived class function

    return 0;
}
