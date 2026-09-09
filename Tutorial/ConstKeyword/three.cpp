#include <iostream>
using namespace std;

class Student {
private:
    int id;
    mutable int accessCount = 0;

public:
    int getter() const {
        accessCount++;
        return accessCount; // Return the access count instead of the actual ID for demonstration
    }
};

int main() {
    Student s;
    cout << "Student ID: " << s.getter() << endl;
    return 0;
}