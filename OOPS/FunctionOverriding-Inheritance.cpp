class Parent {
public:
    virtual void greet() {
        cout << "Hello from Parent!" << endl;
    }
};

class Child : public Parent {
public:
    void greet() override {  
        cout << "Hey! This is Child!" << endl;
    }
};

Parent* p = new Child();
p->greet();  // Outputs: Hey! This is Child!
