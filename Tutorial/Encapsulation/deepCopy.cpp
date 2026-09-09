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
        this->cgpaPtr = new double; // Deep copy
        *this->cgpaPtr = *s.cgpaPtr;
    }

    // Destructor
    ~Student() {
        delete cgpaPtr; // Free the allocated memory
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



