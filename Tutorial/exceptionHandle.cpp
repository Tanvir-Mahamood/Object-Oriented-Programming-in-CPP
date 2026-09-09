#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index;
    cout << "Enter an index";
    cin >> index;

    try {
        if (index >= 5) {
            throw out_of_range("Index is out of range");
        }
        if(index < 0) {
            throw out_of_range("Index cannot be negative");
        }
        cout << "Value at index " << index << ": " << arr[index] << endl;
    } 

    catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << endl;
    }

    cout << "Rest of the program continues..." << endl;

}