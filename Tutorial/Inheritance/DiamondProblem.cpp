/*
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Base Class" << endl;
    }
};

class B : public A {};
class C : public A {};

class D : public B, public C {};

int main() {
    D d;
    // d.display(); // Ambiguous call to display() because both B and C inherit from A

    d.B::display(); // Resolving ambiguity by specifying the base class
    d.C::display(); // Resolving ambiguity by specifying the base class

    return 0;
}
*/

#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Base Class" << endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D d;
    d.display(); // Ambiguous call to display() because both B and C inherit from A
}

/*
D
├── B
│   └── A
└── C
    └── A

to

D
├── B ──┐
└── C ──┤
        ↓
        A
*/