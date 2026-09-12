#include <iostream>
using namespace std;

class Base {
public:
    int x;
    int y;

    Base(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int sum() {
        return x + y;
    }

};

class Derived : private Base {
public:
    Derived(int x, int y) : Base(x, y) {}
};

int main() {
    Base b(3, 4);
    cout << b.x << " + " << b.y << " = " << b.sum() << endl;

    Derived d(3, 4);
    // cout << d.x << " + " << d.y << " = " << d.sum() << endl; // error: derived class's members are private, cannot access them directly
}