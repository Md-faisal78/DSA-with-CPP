/*
Problem: Contains Duplicate
Topic: Arrays
Pattern: Brute Force (Pair Comparison)
Difficulty: Easy

Approach:
- Compare each element with every element ahead of it
- If any pair matches → return true
- If no duplicates found → return false

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(const vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    return true;
                }
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
