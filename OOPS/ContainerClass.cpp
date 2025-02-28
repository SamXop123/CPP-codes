#include <iostream>
using namespace std;

// Class representing an Item
class Item {
public:
    int id;
    string name;

    Item(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "Item ID: " << id << ", Name: " << name << endl;
    }
};

// Container class holding multiple Item objects
class Container {
    Item *items[3]; // Array to hold Item objects
    int count;

public:
    Container() { count = 0; }

    void addItem(int id, string name) {
        if (count < 3) {
            items[count] = new Item(id, name);
            count++;
        } else {
            cout << "Container is full!" << endl;
        }
    }

    void showItems() {
        for (int i = 0; i < count; i++) {
            items[i]->display();
        }
    }

    ~Container() { // Destructor to free memory
        for (int i = 0; i < count; i++) {
            delete items[i];
        }
    }
};

int main() {
    Container c;  // Creating container object
    c.addItem(101, "Laptop");
    c.addItem(102, "Smartphone");
    c.showItems();

    return 0;
}
