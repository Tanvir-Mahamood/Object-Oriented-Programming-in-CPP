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
};

class GraduateStudent : public Student {
public:
    string thesisTitle;

    GraduateStudent(string name, int age, int roll, string thesisTitle) : Student(name, age, roll) {
        this->thesisTitle = thesisTitle;
    }

    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Roll: " << roll << ", Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    Person person("Alice", 30);
    person.Welcome();

    Student student("Bob", 20, 101);
    student.Welcome();

    GraduateStudent gradStudent("Charlie", 25, 202, "Deep Learning in AI");
    gradStudent.displayInfo();
    gradStudent.Welcome();
    
    cout << "Size of Person object: " << sizeof(person) << " bytes" << endl;
    cout << "Size of Student object: " << sizeof(student) << " bytes" << endl;
    cout << "Size of GraduateStudent object: " << sizeof(gradStudent) << " bytes" << endl;

    return 0;
}