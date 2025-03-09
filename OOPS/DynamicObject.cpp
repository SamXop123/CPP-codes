#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    // Creating a dynamic object
    Student* s1 = new Student("Sameer", 18);

    // Accessing members using arrow (->) operator
    s1->display();

    // Deleting the dynamically allocated object
    delete s1;

    return 0;
}
