// Function Overriding

#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "This is the Child class." << endl;
        Parent::display(); // if you want to call Parent's display() method
    }
};

int main() {
    Parent parentObj;
    Child childObj;

    parentObj.display(); // Calls Parent's display()
    childObj.display();  // Calls Child's display()

    return 0;
}