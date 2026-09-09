#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string department = "CSE";
    string subject;
    int age;

    void setSalary(double s) {
        salary = s;
    }
    double getSalary() {
        return salary;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Department: " << department << ", Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    Teacher t;
    t.name = "Tanvir";
    t.age = 25;
    t.department = "CSE";
    t.subject = "OOP";
    t.setSalary(50000.0);

    t.displayInfo();

    return 0;
}