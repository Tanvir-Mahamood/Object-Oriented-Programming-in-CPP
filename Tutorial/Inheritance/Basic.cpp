#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {
        cout << "Parent's Default constructor called" << name << endl;
    }
    ~Person() {
        cout << "Parent's Destructor called" << endl;
    }
    void Welcome() {
        cout << "Welcome " << name << endl;
    }
};

class Student : public Person {
public:
    int roll;
    Student() {
        cout << "Child's Default constructor called" << endl;
    }
    ~Student() {
        cout << "Child's Destructor called" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Roll: " << roll << endl;
    }

};

int main() {
    Person person;
    person.name = "Alice";
    person.age = 30;
    person.Welcome();

    Student student;
    student.name = "Bob";
    student.age = 20;
    student.roll = 101;
    student.displayInfo();
    student.Welcome();
    return 0;
}