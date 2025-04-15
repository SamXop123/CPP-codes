// Write a program to implement constructor using class.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("James", 18);
    Student s2("Mike", 18);

    s1.display();
    s2.display();

    return 0;
}
