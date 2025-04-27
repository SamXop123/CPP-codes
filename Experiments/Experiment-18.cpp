// Write a program to implement simple inheritance and multiple inheritance using class.


#include <iostream>
using namespace std;

// Simple Inheritance: Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Simple Inheritance: Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Multiple Inheritance: First base class
class Person {
public:
    void walk() {
        cout << "Person walks." << endl;
    }
};

// Multiple Inheritance: Second base class
class Worker {
public:
    void work() {
        cout << "Worker works." << endl;
    }
};

// Multiple Inheritance: Derived class
class Engineer : public Person, public Worker {
public:
    void develop() {
        cout << "Engineer develops software." << endl;
    }
};

int main() {
    // Simple Inheritance Example
    cout << "Simple Inheritance Example:" << endl;
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Dog's own function

    cout << endl;

    // Multiple Inheritance Example
    cout << "Multiple Inheritance Example:" << endl;
    Engineer e;
    e.walk();     // From Person
    e.work();     // From Worker
    e.develop();  // Engineer's own function

    return 0;
}