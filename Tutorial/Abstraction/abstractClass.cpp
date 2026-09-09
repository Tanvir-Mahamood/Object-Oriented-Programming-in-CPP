#include <iostream>
#include <string>
using namespace std;

class Shape { // Abstract class
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle(); // Create a Circle object using a Shape pointer
    shapePtr->draw(); // Calls Circle's draw() method

    delete shapePtr; // Clean up memory
    return 0;
}