#include <iostream>
using namespace std;

void fun() {
    static int x = 0;
    cout << x << endl;
    x++;
}

int main() {
    fun(); // Output: 0
    fun(); // Output: 1
    fun(); // Output: 2

    return 0;
}