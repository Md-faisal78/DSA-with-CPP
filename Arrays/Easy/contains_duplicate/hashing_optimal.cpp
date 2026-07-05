/*
Problem: Contains Duplicate
Topic: Arrays
Pattern: Hashing (Set Membership)
Difficulty: Easy

Approach:
- Use an unordered_set to track seen elements
- Traverse array:
    - If element already exists in set → return true
    - Else insert into set
- If no duplicates found → return false

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(const vector<int>& nums) {
        unordered_set<int> seen;

        for(int num : nums) {
            if(seen.count(num)) {
                return true;
            }
            seen.insert(num);
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
