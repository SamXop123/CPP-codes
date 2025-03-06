#include <iostream>
using namespace std;

class Item {
    int value;

public:
    Item(int v) { 
        value = v; 
    }

    void display() { 
        cout << "Item Value: " << value << endl; 
    }

};

// container class
class Container {
    Item item1;
    Item item2;

public:
    Container(int v1, int v2) : item1(v1), item2(v2) {}

    void showItems() {
        item1.display();
        item2.display();
    }
};

int main() {
    Container box(10, 20);
    box.showItems();      

    return 0;
}
