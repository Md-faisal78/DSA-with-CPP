 // Topic:basic Data Types in C++

#include <iostream>
using namespace std;

int main() {

    // int (Integer data type)
    // Used to store whole numbers without decimals.
    // Typically occupies 4 bytes of memory.
    int a = 10;

    // float (Floating-point data type)
    // Used to store decimal numbers.
    // Typically occupies 4 bytes of memory.
    float b = 5.5;

    // char (Character data type)
    // Used to store a single character.
    // Characters are enclosed in single quotes.
    // Occupies 1 byte of memory.
    char c = 'A';

    // bool (Boolean data type)
    // Used to store logical values: true (1) or false (0).
    // Occupies 1 byte of memory.
    bool d = true;

    // double (Double data type)
    // Used to store decimal numbers with higher precision than float.
    // Typically occupies 8 bytes of memory.
    double e = 9.99;

    // Displaying values of different data types
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    cout << "Double: " << e << endl;

    return 0;
}
