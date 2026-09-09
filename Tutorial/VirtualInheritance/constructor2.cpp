#include <iostream>
using namespace std;

class A {
public:
    A(int x) {
        cout << "A: " << x << endl;
    }
};

class B : virtual public A {
public:
    B() : A(10) {}
};

class C : virtual public A {
public:
    C() : A(20) {}
};

class D : public B, public C {
public:
    D() : A(30) {}
};

int main() {
    D d;
    return 0;
}