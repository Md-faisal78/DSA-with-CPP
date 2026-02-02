// Topic: Derived Data Types in C++
// This program demonstrates arrays, pointers, and references

#include <iostream>
using namespace std;

int main() {

    // ---------- Array ----------
    // An array is a collection of elements of the same data type
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ---------- Pointer ----------
    // A pointer stores the address of another variable
    int a = 10;
    int* ptr = &a;

    cout << "Value pointed by ptr: " << *ptr << endl;

    // ---------- Reference ----------
    // A reference is another name for an existing variable
    // Any change made through the reference affects the original variable
    int& ref = a;
    ref = 30;

    cout << "Value using reference: " << ref << endl;
    cout << "Original variable after reference change: " << a << endl;

    return 0;
}
