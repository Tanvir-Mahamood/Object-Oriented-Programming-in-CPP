// Compile Time Polymorphism: Constructor Overloading

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person() {
        name = "Unknown";
        age = 0;
    }
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main() {
    Person person1; // Calls default constructor
    Person person2("Alice", 25); // Calls parameterized constructor

    cout << "Person 1: " << person1.name << ", Age: " << person1.age << endl;
    cout << "Person 2: " << person2.name << ", Age: " << person2.age << endl;

    return 0;
}
