#include<iostream>
#include<string>
using namespace std;

class Base {
public:
    int x;
protected:
    int y;
private:
    int z;
};

class Derived1 : public Base {
public:
    void accessMembers() {
        x = 10; // x is public in derived class
        y = 20; // y is protected in derived class
        // z = 30; // z is not accessible in derived class
    }
};

class Derived2 : protected Base {
public:
    void accessMembers() {
        x = 10; // x is protected in derived class
        y = 20; // y is protected in derived class
        // z = 30; // z is not accessible in derived class
    }
};

class Derived3 : private Base {
public:
    void accessMembers() {
        x = 10; // x is private in derived class
        y = 20; // y is private in derived class
        // z = 30; // z is not accessible in derived class
    }
};

int main() {
    Derived1 d1;
    d1.accessMembers();
    // cout << "Derived1: x = " << d1.x << endl;

    Derived2 d2;
    d2.accessMembers();
    // cout << "Derived2: x = " << d2.x << endl; // Error: x is protected in Derived2, cannot access from main

    Derived3 d3;
    d3.accessMembers();
    // cout << "Derived3: x = " << d3.x << endl; // Error: x is private in Derived3, cannot access from main

    return 0;
}