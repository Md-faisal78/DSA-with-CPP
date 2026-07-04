/*
Problem: Two Sum
Link: https://leetcode.com/problems/two-sum/
Topic: Arrays
Pattern: Sorting + Two Pointers
Difficulty: Easy

Approach:
- Store (value, index) pairs in a vector
- Sort the vector based on values
- Use two pointers (left, right)
- If sum matches target → return original indices
- If sum > target → move right--
- If sum < target → move left++

Time Complexity: O(n log n)  // due to sorting
Space Complexity: O(n)       // storing pairs
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        vector<pair<int,int>> vp;
        for(int i = 0; i < n; i++){
            vp.push_back({arr[i], i});
        }

        sort(vp.begin(), vp.end());

        int left = 0, right = n - 1;

        while(left < right){
            int sum = vp[left].first + vp[right].first;

            if(sum == target){
                int i1 = vp[left].second;
                int i2 = vp[right].second;

                if(i1 > i2) swap(i1, i2);
                return {i1, i2};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }

        return {-1, -1};
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

    cout << "Enter the target: ";
    int t;
    cin >> t;

    Solution obj;
    vector<int> res = obj.twoSum(arr, t);

    cout << "[" << res[0] << "," << res[1] << "]";
}
