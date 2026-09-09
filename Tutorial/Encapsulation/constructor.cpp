#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    Teacher() {
        cout << "Default constructor called." << endl;  
        name = "Unknown";
        department = "CSE";
        subject = "Unknown";
        age = 0;
        salary = 0.0;
    }

    Teacher(string name, int age, string department, string subject, double salary) { // Constructor Overloading
        cout << "Parameterized constructor called." << endl;
        this->name = name;
        this->age = age;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
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
    Teacher t1("Tanvir", 25, "CSE", "OOP", 50000.0); // Using parameterized constructor
    t1.displayInfo();

    Teacher t2; 
    t2.displayInfo(); 

    return 0;
}

/*
this->properity = *(this).properity
*/