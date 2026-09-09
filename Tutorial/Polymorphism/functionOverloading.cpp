// Compile Time Polymorphism: Function Overloading

#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void display(int num) {
        cout << "Function1\n";
        cout << "Integer: " << num << endl;
    }

    void display(double num) {
        cout << "Function2\n";
        cout << "Double: " << num << endl;
    }

    void display(int num, char ch) {
        cout << "Function3\n";
        cout << "Integer: " << num << ", Character: " << ch << endl;
    }

    void display(char ch, int num) {
        cout << "Function4\n";
        cout << "Integer: " << num << ", Character: " << ch << endl;
    }

    /*
    int display(char ch, int num) {
        cout << "Function5\n";
        cout << "Integer: " << num << ", Character: " << ch << endl;
        return num;
    }
    */

};

int main() {
    Print obj;
    obj.display(10); // Calls Function1
    obj.display(3.14); // Calls Function2
    obj.display(5, 'A'); // Calls Function3
    obj.display('B', 20); // Calls Function4
    // int num = obj.display('C', 30);

    return 0;
}