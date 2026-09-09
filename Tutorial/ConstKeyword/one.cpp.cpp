#include<iostream>
using namespace std;

class Student {
private:
    const int id;

public:
    Student(int x) : id(x) {}
};

class Teacher {
public:
    int salary;
    Teacher(int amount) {
        salary = amount;
    }
    void display() {
        cout << "Teacher class" << endl;
    }

    void display2() const { // It promises not to modify the object, so it can be called on const objects
        cout << "Teacher class (const)" << endl;
    }
};

int main() {
    // ===========As a Data Member===========
    Student s1(101);
    // s1.id = 102; // Error: cannot modify a const member variable


    // ===========As a Constant Object===========
    const Teacher t1(50000);
    // t1.salary = 50000; // Error: cannot modify a member variable of a const object
    // t1.display(); // Error: cannot call a non-const member function on a const object. C++ assumes that calling display() might modify s.
    t1.display2(); // OK: can call a const member function on a const object. This member function promises not to modify the object.
    
    return 0;
}