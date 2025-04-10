// Write a program to implement dynamic and copy constructor using class.

#include <iostream>
using namespace std;

class Student {
    int* marks;

public:
    // Dynamic constructor
    Student(int m) {
        marks = new int; // dynamically allocating memory
        *marks = m;
        cout << "Dynamic constructor called!\n";
    }

    // Copy constructor
    Student(const Student& s) {
        marks = new int;
        *marks = *(s.marks); // copying value
        cout << "Copy constructor called!\n";
    }

    // Display function
    void show() {
        cout << "Marks: " << *marks << endl;
    }

    // Destructor
    ~Student() {
        delete marks;
        cout << "Destructor called!\n";
    }
};

int main() {
    Student s1(95); // dynamic constructor
    s1.show();

    Student s2 = s1; // copy constructor
    s2.show();

    return 0;
}
