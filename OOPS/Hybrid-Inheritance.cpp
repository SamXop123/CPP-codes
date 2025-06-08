#include <iostream>
using namespace std;

class LivingThing {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

// Hierarchical: both Animal and Plant inherit from LivingThing
class Animal : public LivingThing {
public:
    void move() {
        cout << "Animal moves" << endl;
    }
};

class Plant : public LivingThing {
public:
    void grow() {
        cout << "Plant grows" << endl;
    }
};

// Multilevel: Human inherits from Animal
class Human : public Animal {
public:
    void think() {
        cout << "Human thinks" << endl;
    }
};

int main() {
    Human h;
    h.breathe();  // from LivingThing
    h.move();     // from Animal
    h.think();    // from Human

    // h.grow();  // ❌ Can't do this — grow is part of Plant, not in the path!
}
