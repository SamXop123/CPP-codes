#include <fstream>
using namespace std;

struct Student {
    char name[20];
    int age;
};

int main() {
    fstream file("students.dat", ios::in | ios::out | ios::binary);

    Student s1 = {"Sam", 19};
    Student s2 = {"John", 22};

    // Write records sequentially
    file.write((char*)&s1, sizeof(s1));
    file.write((char*)&s2, sizeof(s2));

    // Go back to second record (offset = size of 1 record)
    file.seekg(sizeof(Student), ios::beg);

    Student s;
    file.read((char*)&s, sizeof(s));
    cout << "Name: " << s.name << ", Age: " << s.age << endl;

    file.close();
    return 0;
}
