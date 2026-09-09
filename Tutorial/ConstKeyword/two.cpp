#include <iostream>
using namespace std;

int main() {
    int value1 = 10;
    int value2 = 20;

    // Pointed data is constant
    const int* ptr1; // pointer to a constant integer
    ptr1 = &value1;
    // *ptr1 = 20; // Error: You cannot modify the integer (value1) through pointer (ptr1)
    ptr1 = &value2; // OK: You can change the pointer to point to another integer



    // Constant pointer
    int* const ptr2 = &value1; // constant pointer to an integer
    *ptr2 = 30; // OK: You can modify the integer (value1) through pointer (ptr2)
    // ptr2 = &value2; // Error: You cannot change the address stored in the constant pointer (ptr2)



    // Both pointer and data are const
    const int* const ptr3 = &value1; // constant pointer to a constant integer
    // *ptr3 = 40; // Error: You cannot modify the integer (value1) through pointer (ptr3)
    // ptr3 = &value2; // Error: You cannot change the address stored in the constant pointer (ptr3)

    return 0;
}