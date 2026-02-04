/*
Topic: C++ Operator Types

Definition:
Operators in C++ are special symbols used to perform operations on
variables and values. They allow programmers to manipulate data,
compare values, and control program logic.

Common types of operators in C++ include:
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Bitwise Operators
5. Assignment Operators
6. Increment and Decrement Operators
7. Conditional (Ternary) Operator
*/

#include <iostream>
using namespace std;

int main() {

    // Arithmetic Operators
    // Used to perform mathematical calculations
    int a = 10, b = 3;

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division (integer division)
    cout << "a % b = " << a % b << endl; // Modulus (remainder)

    // Relational Operators
    // Used to compare two values and return true or false
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: "  << (a > b)  << endl; // Greater than
    cout << "a < b: "  << (a < b)  << endl; // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators
    // Used to combine or negate conditions
    bool x = true, y = false;

    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl; // Logical AND
    cout << "x || y: " << (x || y) << endl; // Logical OR
    cout << "!x: "     << (!x)      << endl; // Logical NOT

    // Bitwise Operators
    // Used to perform operations at the bit level
    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = "  << (a & b)  << endl; // Bitwise AND
    cout << "a | b = "  << (a | b)  << endl; // Bitwise OR
    cout << "a ^ b = "  << (a ^ b)  << endl; // Bitwise XOR
    cout << "~a = "     << (~a)     << endl; // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    // ---------- Assignment Operators ----------
    // Used to assign and update values
    int c;
    cout << "\nAssignment Operators:" << endl;
    c = a;
    cout << "c = a: " << c << endl;
    c += b; // c = c + b
    cout << "c += b: " << c << endl;
    c -= b; // c = c - b
    cout << "c -= b: " << c << endl;
    c *= b; // c = c * b
    cout << "c *= b: " << c << endl;
    c /= b; // c = c / b
    cout << "c /= b: " << c << endl;
    c %= b; // c = c % b
    cout << "c %= b: " << c << endl;

    // ---------- Increment and Decrement Operators ----------
    // Used to increase or decrease a value by 1
    cout << "\nIncrement and Decrement Operators:" << endl;
    cout << "a before increment: " << a << endl;
    cout << "++a: " << ++a << endl; // Pre-increment
    cout << "a after pre-increment: " << a << endl;
    cout << "a--: " << a-- << endl; // Post-decrement
    cout << "a after post-decrement: " << a << endl;

    // ---------- Conditional (Ternary) Operator ----------
    // Shorthand for if-else statements
    cout << "\nConditional (Ternary) Operator:" << endl;
    int maxValue = (a > b) ? a : b;
    cout << "Max of a and b: " << maxValue << endl;

    return 0;
}
