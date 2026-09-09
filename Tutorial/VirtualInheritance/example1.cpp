#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor of D" << endl;
    }
};

int main() {
    D d;
    d.show(); 
    // d.B::show(); // Calls B's show method
    // d.C::show(); // Calls C's show method
    // d.A::show(); // Calls A's show method

    return 0;
}