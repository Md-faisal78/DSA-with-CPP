// Number of 1 Bits - Brian Kernighan’s Algorithm

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n != 0) {
            n &= (n - 1); // remove rightmost set bit
            count++;
        }

        return count;
    }
};

int main() {
    uint32_t n = 11; // 1011
    Solution obj;
    cout << obj.hammingWeight(n);
}
