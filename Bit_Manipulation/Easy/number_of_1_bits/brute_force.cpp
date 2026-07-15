// Number of 1 Bits - Brute Force (Check each bit)

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        for (int i = 0; i < 32; i++) {
            if (n & (1 << i)) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    uint32_t n = 11; // 1011
    Solution obj;
    cout << obj.hammingWeight(n);
}
