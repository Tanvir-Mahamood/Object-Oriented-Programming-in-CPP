#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    Teacher(string name, int age, string department, string subject, double salary) {
        this->name = name;
        this->age = age;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }

    // Copy constructor
    Teacher(const Teacher &t) {
        cout << "Copy constructor called." << endl;
        this->name = t.name;
        this->age = t.age;
        this->department = t.department;
        this->subject = t.subject;
        this->salary = t.salary;
    }

    string name;
    string department;
    string subject;
    int age;
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Department: " << department << ", Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    Teacher t1("Tanvir", 25, "CSE", "OOP", 50000.0);
    t1.displayInfo();

    Teacher t2(t1); // Using copy constructor
    t2.displayInfo();

    return 0;
}

/*
this->properity = *(this).properity
*/