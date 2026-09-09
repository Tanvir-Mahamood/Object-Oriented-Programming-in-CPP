#include <iostream>
#include <string>
using namespace std;

/*
class Animal {
public:
    void sound() {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Meow" << endl;
    }
};
*/

class Animal {
public:
    virtual void sound() {
        cout << "Some animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow" << endl;
    }
};

int main() {
    Animal* animals[2];

    Dog dog;
    Cat cat;

    animals[0] = &dog;
    animals[1] = &cat;

    animals[0]->sound();
    animals[1]->sound();

    delete animals[0];
    delete animals[1];
}