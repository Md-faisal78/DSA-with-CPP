/*
Problem: Reverse an Array (STL)
Topic: Arrays
Pattern: STL Algorithm
Difficulty: Easy

Approach:
- Use built-in reverse() from <algorithm>
- Pass iterators: begin() and end()
- It reverses the array in-place

Time Complexity: O(n)
Space Complexity: O(1)

Key Insight:
STL reverse is an abstraction over the two-pointer approach
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        reverse(arr.begin(), arr.end());
    }
};

int main() {
    int n;
    cout << "Enter the number of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverseArray(arr);

    cout << "Reversed array:\n";
    for(int x : arr) {
        cout << x << " ";
    }
}
