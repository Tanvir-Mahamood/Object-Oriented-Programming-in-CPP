#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Copy constructor
    Student(const Student& s) {
        this->name = s.name;
        this->cgpaPtr = s.cgpaPtr; // Shallow copy
    }

    void displayInfo() {
        cout << "Name: " << name << ", CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Tanvir", 3.77);
    s1.displayInfo();

    Student s2(s1); // This will call the copy constructor
    s2.name = "Tanvir2"; // Changing the name of s2
    *s2.cgpaPtr = 3.85; // Changing the CGPA of s2

    s2.displayInfo();
    s1.displayInfo();
}

/*
we have modified the CGPA of s2, but it also affects s1 because both s1 and s2 are pointing to the same memory location for CGPA due to shallow copy. 
This is a classic example of the issues that can arise with shallow copying in C++.
Solution: Deep copy can be implemented in the copy constructor, where we allocate new memory for the CGPA of the copied object and copy the value instead of just copying the pointer.
*/

