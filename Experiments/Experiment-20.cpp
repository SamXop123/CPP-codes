// Write a program to implement hybrid inheritance using class.


#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void getData() {
        cout << "Enter name and age:\n";
    }
};

// Intermediate base class 1 (inherits from Person)
class Employee : public Person {
public:
    void getEmployeeData() {
        cout << "Enter employee ID:\n";
    }
};

// Intermediate base class 2
class Student {
public:
    void getStudentData() {
        cout << "Enter roll number:\n";
    }
};

// Derived class (inherits from both Employee and Student)
class Intern : public Employee, public Student {
public:
    void getInternData() {
        cout << "Enter internship details:\n";
    }
};

int main() {
    Intern internObj;
    
    internObj.getData();           // From Person
    internObj.getEmployeeData();   // From Employee
    internObj.getStudentData();    // From Student
    internObj.getInternData();     // From Intern

    return 0;
}