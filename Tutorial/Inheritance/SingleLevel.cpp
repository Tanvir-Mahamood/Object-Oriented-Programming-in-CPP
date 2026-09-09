#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;    
    }

    void Welcome() {
        cout << "Welcome " << name << endl;
    }
};

class Student : public Person {
public:
    int roll;
    
    Student(string name, int age, int roll) : Person(name, age) {
        this->roll = roll;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Roll: " << roll << endl;
    }
};

int main() {
    Person person("Alice", 30);
    person.Welcome();

    Student student("Bob", 20, 101);
    student.displayInfo();
    student.Welcome();
    
    cout << "Size of Person object: " << sizeof(person) << " bytes" << endl;
    cout << "Size of Student object: " << sizeof(student) << " bytes" << endl;
    return 0;
}