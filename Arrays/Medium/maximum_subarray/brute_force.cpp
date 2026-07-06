/*
Problem: Maximum Subarray
Topic: Arrays
Pattern: Subarray Enumeration (Brute Force)
Difficulty: Medium

Prerequisites:
- Arrays
- Nested Loops
- Time Complexity Analysis

Approach:
- Generate every possible subarray.
- Calculate the sum of each subarray using a third loop.
- Update the maximum sum whenever a larger subarray sum is found.

Time Complexity:
O(n³)

Space Complexity:
O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int maxSum = INT_MIN;

        //starting index
        for (int i = 0; i < n; i++) {

            //ending index
            for (int j = i; j < n; j++) {

                int sum = 0;

                // Calculate sum of current subarray
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};

int main() {

    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    int ans = obj.maxSubArray(nums);

    cout << "Maximum Subarray Sum = " << ans << endl;

    return 0;
}
