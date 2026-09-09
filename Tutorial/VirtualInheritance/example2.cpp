#include <iostream>
using namespace std;

class A {
protected:
    int ax;
public:
    void getA(int x) {
        ax = x;
    }
};

class B: virtual public A {
protected:
    int bx;
public:
    void getB(int x) {
        bx = x;
    }   
};

class C: virtual public A {
protected:
    int cx;
public:
    void getC(int x) {
        cx = x;
    }   
};

class P: public B, public C {
public:
    int product() {
        return ax * bx * cx;
    }
};

int main() {
    P p;
    p.getA(2); 
    p.getB(3);
    p.getC(4);
    cout << "Product: " << p.product() << endl;

    return 0;
}