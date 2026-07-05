/*
Problem: Contains Duplicate
Topic: Arrays
Pattern: Sorting + Adjacent Comparison
Difficulty: Easy

Approach:
- Sort the array
- Traverse once and compare adjacent elements
- If nums[i] == nums[i-1], duplicate exists

Time Complexity: O(n log n)
Space Complexity: O(1)  // ignoring sort stack
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> nums) {  // pass by value intentionally
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    vector<int> nums {1, 2, 3, 1};

    Solution obj;
    bool res = obj.containsDuplicate(nums);

    cout << (res ? "true" : "false") << endl;
}
