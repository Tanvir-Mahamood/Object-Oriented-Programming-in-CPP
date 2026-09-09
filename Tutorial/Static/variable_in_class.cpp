#include <iostream>
using namespace std;

class A {
public:
    static int x; // Static variable declaration

    void display() {
        cout << "Value of x: " << x << endl;
    }

    void increment() {
        x++;
    }
};

// Definition of static variable
int A::x = 0;

int main() {
    A obj1, obj2;
    obj1.display(); // Output: Value of x: 0
    obj1.increment();
    obj1.display(); // Output: Value of x: 1

    obj2.display(); // Output: Value of x: 1
    obj2.increment();
    obj2.display(); // Output: Value of x: 2

    obj1.display(); // Output: Value of x: 2
    obj1.increment();
    obj1.display(); // Output: Value of x: 3

    return 0;
}