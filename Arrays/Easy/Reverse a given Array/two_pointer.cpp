/*
Problem: Reverse an Array (Optimal - In-place)
Link: (Generic problem - no single source)
Topic: Arrays
Pattern: Two Pointers
Difficulty: Easy

Approach:
- Use two pointers: one at start (p1), one at end (p2)
- Swap elements at both pointers
- Move p1 forward and p2 backward
- Continue until they meet

Time Complexity: O(n)
Space Complexity: O(1)

Key Insight:
Instead of using extra space, we can swap symmetric elements:
i ↔ (n - 1 - i)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& arr, int n) {
        int p1 = 0;
        int p2 = n - 1;

        while(p1 < p2) {
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
        }

        return arr;
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
