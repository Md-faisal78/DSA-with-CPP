// Minimum in Rotated Sorted Array - Brute Force (O(n))

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int minVal = INT_MAX;

        for (int x : nums) {
            minVal = min(minVal, x);
        }

        return minVal;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    Solution sol;
    cout << sol.findMin(nums);
}
