//  Run Time Polymorphism: Virtual Function

#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }

    virtual void show() {
        cout << "This is the Parent class (virtual function)." << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "This is the Child class." << endl;
    }

    void show() override {
        cout << "This is the Child class (overridden virtual function)." << endl;
    }
};

int main() {
    Parent parentObj;
    Child childObj;

    parentObj.display(); // Calls Parent's display()
    childObj.display();  // Calls Child's display()

    parentObj.show(); // Calls Parent's show()
    childObj.show();  // Calls Child's show()

    Parent* ptr = &childObj; 
    ptr->display();
    ptr->show(); 

    return 0;
}