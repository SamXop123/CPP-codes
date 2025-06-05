#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    string languages; 
    string hobbies;

    void introduce() {
        cout << "Hi, my name is " << name << ", and I am " << age << " years old." << endl;
        cout << "Languages I am familiar with: " << languages << "." << endl;
        cout << "In my free time, I enjoy " << hobbies << "." << endl;
    }
};

int main() {
    Person p1;                       
    p1.name = "Sameer";            
    p1.age = 19;                    
    p1.languages = "Python, Java, Javascript, C++";
    p1.hobbies = "piano, photography, minecraft, football, etc"; 
    p1.introduce();                  
    return 0;
}
