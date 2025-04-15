
// Write a program to implement <<, >> overload using class.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Overload >> operator
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter name: ";
        in >> s.name;
        cout << "Enter age: ";
        in >> s.age;
        return in;
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Name: " << s.name << ", Age: " << s.age;
        return out;
    }
};

int main() {
    Student s;
    cin >> s;        // >> operator overloading
    cout << s << endl;  // << operator overloading

    return 0;
}
