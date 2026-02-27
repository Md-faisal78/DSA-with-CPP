/*
Problem: Check whether a number is Even or Odd
Method: Using Bitwise AND Operator 
The last bit of all odd numbers is always 1, while for even numbers it’s 0. 
So, when performing bitwise AND operation with 1, odd numbers give 1, and even numbers give 0.

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

bool isEven(int n) {
    return ((n & 1) == 0);
}

int main() {

    int num;

    cout << "Enter the number to check whether it is even or odd: ";
    cin >> num;

    if (isEven(num))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
