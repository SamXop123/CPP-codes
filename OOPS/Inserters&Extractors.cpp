#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n = "", int a = 0) : name(n), age(a) {}

    // Overload << (inserter)
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Name: " << s.name << ", Age: " << s.age;
        return out;
    }

    // Overload >> (extractor)
    friend istream& operator>>(istream& in, Student& s) {
        in >> s.name >> s.age;
        return in;
    }
};

int main() {
    Student s;
    cout << "Enter name and age: ";
    cin >> s; // Uses overloaded >>
    cout << "Student details: " << s << endl; // Uses overloaded <<
    return 0;
}
