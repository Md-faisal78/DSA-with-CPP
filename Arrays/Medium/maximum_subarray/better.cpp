/*
Problem: Maximum Subarray
Topic: Arrays
Pattern: Subarray Enumeration + Running Sum
Difficulty: Medium

Approach:
- Generate every possible subarray.
- Instead of recalculating the sum for every subarray,
  maintain a running sum while expanding the ending index.
- Update the maximum sum after each expansion.

Time Complexity:
O(n²)

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

        // Choose starting index
        for (int i = 0; i < n; i++) {

            int sum = 0;

            // Expand ending index
            for (int j = i; j < n; j++) {

                sum += nums[j];

                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Solution obj;

    cout << "Maximum Subarray Sum = "
         << obj.maxSubArray(nums);

    return 0;
}
