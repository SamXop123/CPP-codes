#include <iostream>
using namespace std;

template <typename T>
class Base {
protected:
    T baseVal;
public:
    Base(T val) : baseVal(val) {}
    void showBase() {
        cout << "Base Value: " << baseVal << endl;
    }
};

template <typename T>
class Child : public Base<T> {
private:
    T extra;
public:
    Child(T val1, T val2) : Base<T>(val1), extra(val2) {}
    void showChild() {
        cout << "Child Extra Value: " << extra << endl;
    }
};


int main() {
    Child<int> c(10, 20);
    c.showBase();   // From Base class
    c.showChild();  // From Child class
    return 0;
}
