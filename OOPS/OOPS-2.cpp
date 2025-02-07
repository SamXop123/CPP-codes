
#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    public:
    void getData();
    void display();
};

void Person::getData() {
    cout << "Enter name:";
    cin >> name;

    cout << "Enter age:";
    cin >> age;
}

void Person::display() {
    cout << "--------------------------------"<< endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Person p;
    p.getData();
    p.display();
    return 0;
}
