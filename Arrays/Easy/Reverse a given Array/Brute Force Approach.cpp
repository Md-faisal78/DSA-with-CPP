/*
Problem: Reverse an Array (Brute Force)
Topic: Arrays
Pattern: Index Mapping / Extra Space
Difficulty: Easy

Approach:
- Create a new array of same size
- Traverse original array
- Place element at reversed index: res[i] = arr[n - 1 - i]
- Return the new array

Time Complexity: O(n)
Space Complexity: O(n)

Key Insight:
Reversal can be seen as index transformation:
i → (n - 1 - i)

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& arr, int n) {
        vector<int> res(n);

        for(int i = 0; i < n; i++) {
            res[i] = arr[n - 1 - i];
        }

        return res;
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
    vector<int> result = obj.reverseArray(arr, n);

    cout << "Reversed array:\n";
    for(int x : result) {
        cout << x << " ";
    }
}
