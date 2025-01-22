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
        cout << "I have a little knowledge about " << languages << "." << endl;
        cout << "In my free time, I enjoy " << hobbies << "." << endl;
    }
};

int main() {
    Person p1;                       
    p1.name = "Sameer";            
    p1.age = 18;                    
    p1.languages = "Python, Java, HTML, CSS, C++";
    p1.hobbies = "piano, photography, Minecraft, etc"; 
    p1.introduce();                  
    return 0;
}
