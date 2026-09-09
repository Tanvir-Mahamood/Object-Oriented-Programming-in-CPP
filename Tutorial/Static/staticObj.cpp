#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor called." << endl;
    }
    ~A() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    /*
    if (true) {
        A obj; // Constructor is called here
    } // Destructor is called here when obj goes out of scope
    cout << "End of main function." << endl;
    */

    /*
    for(int i=0; i<3; i++) {
        A obj; // Constructor is called here
    } // Destructor is called here when obj goes out of scope
    cout << "End of main function." << endl;
    */

    /*
    if (true) {
        A* ptr = new A(); // Constructor is called here
        delete ptr; // Destructor is called here when ptr is deleted
    }
    cout << "End of main function." << endl;
    */

    if (true) {
        static A obj; // Constructor is called here
    } 
    cout << "End of main function." << endl;
    // Object obj will be destroyed when the program ends, and the destructor will be called at that time.


    return 0;
}