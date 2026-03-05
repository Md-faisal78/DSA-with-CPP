/*
Problem: Print Alternate Elements of an Array

Logic:
Start from the first index (0) and increment the loop by 2 each time.
This skips one element and prints every alternate element.

Time Complexity: O(n/2) ≈ O(n)
Reason: We traverse about half of the array elements.

Space Complexity: O(1)
Reason: No extra memory is used.
*/

#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size: " << n << endl;
    cout << "Alternate elements are:" << endl;

    for(int i = 0; i < n; i += 2) {
        cout << arr[i] << endl;
    }

    return 0;
}
