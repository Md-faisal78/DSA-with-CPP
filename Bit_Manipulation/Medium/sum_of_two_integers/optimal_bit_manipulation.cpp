// Sum of Two Integers - Bit Manipulation (No + or -)

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            unsigned int carry = (unsigned int)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};

int main() {
    int a = 5, b = 3;
    Solution obj;
    cout << obj.getSum(a, b);
}
