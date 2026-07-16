// Missing Number - Sum Formula (O(n))

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expected = n * (n + 1) / 2;
        int actual = 0;

        for (int x : nums) {
            actual += x;
        }

        return expected - actual;
    }
};

int main() {
    vector<int> nums = {3, 0, 1};
    Solution obj;
    cout << obj.missingNumber(nums);
}
