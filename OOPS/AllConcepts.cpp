#include <iostream>
using namespace std;

// Abstract Class (Demonstrates Abstraction)
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}  // Constructor
    virtual void display() = 0;  // Pure virtual function (forces derived classes to implement it)
};

// Base Class
class Employee : public Person {  // Inheritance
protected:
    double salary;
public:
    Employee(string n, int a, double s) : Person(n, a), salary(s) {}

    // Encapsulation: Setter
    void setSalary(double s) { salary = s; }

    // Encapsulation: Getter
    double getSalary() const { return salary; }

    // Polymorphism: Virtual function for overriding
    virtual void display() override {
        cout << "Name: " << name << ", Age: " << age << ", Salary: $" << salary << endl;
    }

    // Function Overloading (Polymorphism)
    void bonus(double percent) {
        cout << "Bonus: $" << (salary * percent / 100) << endl;
    }
    void bonus(double amount, bool isFixed) {
        cout << "Fixed Bonus: $" << amount << endl;
    }
};

// Derived Class (Inheritance)
class Manager : public Employee {
private:
    int teamSize;
public:
    Manager(string n, int a, double s, int t) : Employee(n, a, s), teamSize(t) {}

    // Overriding display method (Polymorphism)
    void display() override {
        cout << "Manager - Name: " << name << ", Age: " << age 
             << ", Salary: $" << salary << ", Team Size: " << teamSize << endl;
    }
};

// Main Function
int main() {
    // Creating objects
    Employee e1("John", 30, 50000);
    Manager m1("Alice", 40, 80000, 10);

    // Demonstrating Encapsulation
    e1.setSalary(55000);
    cout << "Updated Salary: $" << e1.getSalary() << endl;

    // Demonstrating Polymorphism
    e1.display(); 
    m1.display(); // Overridden method

    // Function Overloading
    e1.bonus(10);
    e1.bonus(5000, true);

    return 0;
}