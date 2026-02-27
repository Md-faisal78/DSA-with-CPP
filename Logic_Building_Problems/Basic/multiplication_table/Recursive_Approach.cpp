/*
Problem: Program for multiplication table
Method: Recursive Approach

Logic:
For a number n, recursively multiply it with integers from 1 to 10.
Base case: stop when i reaches 11.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void multi(int n, int i = 1) {
    if (i == 11)
        return;

    cout << n << " * " << i << " = " << n * i << endl;

    multi(n, i + 1);
}

int main() {

    int num;

    cout << "Multiplication of: ";
    cin >> num;

    multi(num);

    return 0;
}
