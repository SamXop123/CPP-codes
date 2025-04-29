// Write a program to implement multi-level inheritance and hierarchical 
inheritance using class.

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void displayPerson() {
        cout << "This is the Person class." << endl;
    }
};

// Derived from Person (multi-level begins)
class Employee : public Person {
public:
    void displayEmployee() {
        cout << "This is the Employee class derived from Person." << endl;
    }
};

// Derived from Employee (multi-level continues)
class Manager : public Employee {
public:
    void displayManager() {
        cout << "This is the Manager class derived from Employee." << endl;
    }
};

// Another class derived from Person (hierarchical inheritance)
class Student : public Person {
public:
    void displayStudent() {
        cout << "This is the Student class derived from Person." << endl;
    }
};

int main() {
    // Demonstrating multi-level inheritance
    Manager mgr;
    cout << "Multi-level Inheritance:\n";
    mgr.displayPerson();   // From Person
    mgr.displayEmployee(); // From Employee
    mgr.displayManager();  // From Manager

    cout << "\nHierarchical Inheritance:\n";
    Student stu;
    stu.displayPerson();   // From Person
    stu.displayStudent();  // From Student

    return 0;
}


