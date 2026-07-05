/*
Problem: Best Time to Buy and Sell Stock (Single Transaction)
Topic: Arrays
Pattern: Brute Force (All Pairs)
Difficulty: Easy

Approach:
- Try all possible pairs (i, j) such that i < j
- Treat i as buying day and j as selling day
- Compute profit = arr[j] - arr[i]
- Track maximum profit

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int max_profit(vector<int>& arr) {
        int n = arr.size();
        int maxProfit = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int profit = arr[j] - arr[i];
                maxProfit = max(maxProfit, profit);
            }
        }

        return maxProfit;
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
    int res = obj.max_profit(arr);

    cout << "The Max profit is: " << res;
}
