#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;  

    // Non-pure virtual function (optional)
    void info() {
        cout << "This is a shape" << endl;
    }
};

// Derived class implementing the abstract method
class Circle : public Shape {
public:
    void draw() override {  // Providing implementation for pure virtual function
        cout << "Drawing a Circle" << endl;
    }
};

// Another derived class
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape s; // Error! Cannot instantiate abstract class

    Circle c;
    c.draw();  // Output: Drawing a Circle
    c.info();  // Output: This is a shape

    Square s;
    s.draw();  // Output: Drawing a Square

    // Using pointers to call derived class methods via base class reference
    Shape* shapePtr = &c;
    shapePtr->draw();  // Output: Drawing a Circle

    return 0;
}