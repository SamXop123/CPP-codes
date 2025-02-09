
#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, Pookie Person!\n";
}

int main() {
    cout << "Hello, World!\n";

    // ---------------------------------------

    int age = 18;
    float height = 5.11;
    string name = "Sameer";
    char initial = 'S';
    bool isCondition = true;

    if(isCondition) {
        cout << "My Height: " << height << "\n";
    }
    cout << "Name: " << name << "\nAge: " << age << '\n';

    // ---------------------------------------

    int numbers[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << "Number: " << numbers[i] << '\n';
    }

    int number = 5;
    while (number > 1) {
        cout << "This is printing using while loop.\n";
        number--;
    }

    // ---------------------------------------
    sayHello(); // Function call
    // ---------------------------------------

    if (age >= 18) {
        cout << "You are grown up.\n";
    } else {
        cout << "You are still a kid.\n";
    }

    // Another way to recreate the above condition using ternary oprerator.
    cout << (age >= 18 ? "You are grown up." : "You are still a kid.") << endl;
    //OR
    (age % 2 == 0) ? (cout << "EVEN") : (cout << "ODD");

    return 0;
}



