/*
Problem: Maximum Subarray
Topic: Arrays
Pattern: Kadane's Algorithm (Dynamic Programming / Greedy)
Difficulty: Medium

Approach:
- Maintain a running sum of the current subarray.
- Add each element to the running sum.
- Update the maximum sum whenever the current sum is greater.
- If the running sum becomes negative, discard it by resetting it to 0.
- A negative running sum cannot contribute to a larger future subarray.

Time Complexity:
O(n)

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

        int maxSum = INT_MIN;
        int currentSum = 0;

        for (int num : nums) {

            currentSum += num;

            maxSum = max(maxSum, currentSum);

            if (currentSum < 0) {
                currentSum = 0;
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

    cout << "Maximum Subarray Sum = "
         << obj.maxSubArray(nums);

    return 0;
}
