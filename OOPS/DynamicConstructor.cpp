#include <iostream>
using namespace std;

class Number {
    int *ptr;  // Pointer to store dynamic memory
public:
    // Dynamic Constructor
    Number(int value) {
        ptr = new int;  // Allocating memory
        *ptr = value;   // Storing value
    }

    void display() {
        cout << "Value: " << *ptr << endl;
    }

    // Destructor to free memory
    ~Number() {
        delete ptr;  
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Number obj(10); // Creating object dynamically stores 10
    obj.display();  // Output: Value: 10

    return 0; // Destructor will free memory automatically
}
