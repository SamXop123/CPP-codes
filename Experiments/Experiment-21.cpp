#include <iostream>
using namespace std;

class PointerDemo {
private:
    int* ptr;

public:
    // Constructor to allocate memory
    PointerDemo(int value) {
        ptr = new int;   // dynamically allocate memory
        *ptr = value;    // set value
        cout << "Memory allocated and value set to " << *ptr << endl;
    }

    // Method to display the value
    void display() {
        cout << "Value: " << *ptr << endl;
    }

    // Method to change the value
    void changeValue(int newValue) {
        *ptr = newValue;
    }

    // Destructor to deallocate memory
    ~PointerDemo() {
        delete ptr;
        cout << "Memory deallocated." << endl;
    }
};

int main() {
    PointerDemo obj(25);    // create object and set value to 25
    obj.display();

    obj.changeValue(100);   // change value to 100
    obj.display();

    return 0;
}

