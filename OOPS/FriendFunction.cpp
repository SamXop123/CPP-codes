#include <iostream>
using namespace std;

class Sample {
private:
    int a, b;

public:
    Sample(int x, int y) {  // Constructor
        a = x;
        b = y;
    }

    // Declaring friend function
    friend void display(Sample obj);
};

// Friend function definition
void display(Sample obj) {
    cout << "Values: a = " << obj.a << ", b = " << obj.b << endl;
}

int main() {
    Sample s(10, 20);
    
    // Calling friend function
    display(s);  

    return 0;
}