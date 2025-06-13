#include <iostream>
using namespace std;

template <typename T>
class Box {
public:
    T value;

    Box(T val) {
        value = val;
    }

    void show() {
        cout << "Value in box: " << value << endl;
    }
};

int main() {
    Box<int> intBox(42);
    intBox.show();  // Output- Value in box: 42

    Box<string> strBox("Hello");
    strBox.show();  // Output- Value in box: Hello
    return 0;
}
