#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

class Teacher {
public:
    string subject;
    double salary;
};

class TeachingAssistant : public Student, public Teacher {
public:
    TeachingAssistant(string s_name, int s_roll, string t_subject, double t_salary) {
        name = s_name;
        roll = s_roll;
        subject = t_subject;
        salary = t_salary;
    }
};

int main() {
    TeachingAssistant ta("John Doe", 123, "Mathematics", 50000.0);

    cout << "Teaching Assistant Details:" << endl;
    cout << "Name: " << ta.name << endl;
    cout << "Roll: " << ta.roll << endl;
    cout << "Subject: " << ta.subject << endl;
    cout << "Salary: $" << ta.salary << endl;

    return 0;
}