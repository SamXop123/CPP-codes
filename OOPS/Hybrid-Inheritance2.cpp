#include <iostream>
using namespace std;

class Person {
public:
    void speak() {
        cout << "I’m a person" << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Studying hard" << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "Working like a champ" << endl;
    }
};

class Intern : public Student, public Employee {
public:
    void internDuty() {
        cout << "Balancing both work and study" << endl;
    }
};

int main() {
    Intern x;
    x.study();        // From Student
    x.work();         // From Employee
    // x.speak();     ❌ Ambiguous, inherited twice (Person from Student and Employee)

    // But if we use 'virtual' while inheriting from Person class, then we can call that function and it wont give error.
    x.speak();
}
