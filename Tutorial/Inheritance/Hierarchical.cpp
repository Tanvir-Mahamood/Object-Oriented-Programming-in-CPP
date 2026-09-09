#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};

class Student: public Person {
public:
    Student(string name, int age, int roll) : Person(name, age) {
        this->roll = roll;
    }
    int roll;
};

class Teacher: public Person {
public:
    Teacher(string name, int age, string subject) : Person(name, age) {
        this->subject = subject;
    }
    string subject;
};


int main() {
    Student student("Alice", 20, 101);
    Teacher teacher("Bob", 35, "Mathematics");

    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;   
    cout << "Age: " << student.age << endl;
    cout << "Roll: " << student.roll << endl;

    cout << "Teacher Details:" << endl;
    cout << "Name: " << teacher.name << endl;
    cout << "Age: " << teacher.age << endl;
    cout << "Subject: " << teacher.subject << endl;

    return 0;
}