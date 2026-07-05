/*
Problem: Best Time to Buy and Sell Stock (Single Transaction)
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Topic: Arrays
Pattern: Greedy (Track Minimum)
Difficulty: Easy

Approach:
- Track minimum price seen so far
- For each price:
    - Update minPrice
    - Compute profit = price - minPrice
    - Update maxProfit

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int max_profit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int price : prices) {
            minPrice = min(minPrice, price);
            int profit = price - minPrice;
            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};

int main() {
    int n;
    cout << "Enter the number of array: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter the array elements\n";
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution obj;
    int res = obj.max_profit(prices);

    cout << "The Max profit is: " << res;
}
