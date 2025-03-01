
// Write a program to enter detail of employee by using one function and print entered detail by another function using class.

#include <iostream>
using namespace std;

class Employee {
    public:
        int age;
        string id, name, gender, department;

        void getInput();
        void display();
};

void Employee::getInput() {
    cout << "Enter Employee ID: "<< endl;
    cin >> id;
    cout << "Enter Employee Name: "<< endl;
    cin >> name;
    cout << "Enter Age: "<< endl;
    cin >> age;
    cout << "Enter Gender: "<< endl;
    cin >> gender;
    cout << "Enter Department: "<< endl;
    cin >> department;
}

void Employee::display() {
    cout << "========================================" << endl;
    cout<<"Employee ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Department: "<<department<<endl;
    cout << "========================================" << endl;
}

int main() {
    Employee emp;
    emp.getInput();
    emp.display();
    return 0;
}
