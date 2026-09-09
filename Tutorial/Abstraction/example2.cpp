#include <iostream>
using namespace std;

class Shape {
public: 
    virtual void getArea()=0; 
    virtual void getPerimeter()=0;
};

class circle: public Shape {
public:
    void getArea() {
        int r;
        cout << " Enter Radius" << endl;
        cin >> r;
        cout << " Area of Circle: " << 3.14 * r * r << endl;
    }
    void getPerimeter() {
        int r;
        cout << " Enter Radius" << endl;
        cin >> r;
        cout << " Perimeter of Circle: " << 2 * 3.14 * r << endl;
    }
};

class Rectangle: public Shape {
public:
    void getArea() {
        int l, b;
        cout << " Enter Length and Breadth" << endl;
        cin >> l >> b;
        cout << " Area of Rectangle: " << l * b << endl;
    }
    void getPerimeter() {
        int l, b;
        cout << " Enter Length and Breadth" << endl;
        cin >> l >> b;
        cout << " Perimeter of Rectangle: " << 2 * (l + b) << endl;
    }
};

int main() {
    Shape* shapePtr;

    circle c;
    shapePtr = &c;
    shapePtr->getArea();
    shapePtr->getPerimeter();

    Rectangle r;
    shapePtr = &r;
    shapePtr->getArea();
    shapePtr->getPerimeter();

    return 0;
}