// Missing Number - XOR (O(n))

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorAll = 0, xorArr = 0;

        for (int i = 0; i <= n; i++) {
            xorAll ^= i;
        }

        for (int x : nums) {
            xorArr ^= x;
        }

        return xorAll ^ xorArr;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};
    Solution obj;
    cout << obj.missingNumber(nums);
}
