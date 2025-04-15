
// Write a program to implement virtual and pure virtual function.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }

    virtual void area() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    void area() override {
        cout << "Area of circle = π * r * r" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->draw();   // Calls Circle's draw()
    s->area();   // Calls Circle's area()

    delete s;
    return 0;
}
