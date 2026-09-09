#include <iostream>
using namespace std;

class Student {
private:
    int mark;
    int rewards;
public:
    Student(int mark) {
        this->mark = mark;
        this->rewards = 0;
    }

    void display() {
        cout << "Mark: " << mark << endl;
        cout << "Rewards: " << rewards << endl;
    }

    friend void Result(const Student &s); 
    friend void Reward(Student &s);
};

void Result(const Student &s) {
    if (s.mark >= 90) {
        cout << "Result: Excellent" << endl;
    } else if (s.mark >= 75) {
        cout << "Result: Good" << endl;
    } else if (s.mark >= 50) {
        cout << "Result: Average" << endl;
    } else {
        cout << "Result: Poor" << endl;
    }
}

void Reward(Student &s) {
    if (s.mark >= 90) {
        s.rewards += 5;
    } else if (s.mark >= 75) {
        s.rewards += 3;
    } else if (s.mark >= 50) {
        s.rewards += 1;
    }
}

int main() {
    Student s1(85);
    Student s2(92);

    cout << "Student 1:" << endl;
    s1.display();
    Result(s1);
    Reward(s1);
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();
    Result(s2);
    Reward(s2);
    s2.display();
    Reward(s2);
    s2.display();

    return 0;
}