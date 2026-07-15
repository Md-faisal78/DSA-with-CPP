// Sum of Two Integers - Brute Force (using + operator)

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        return a + b;
    }
};

int main() {
    int a = 5, b = 3;
    Solution obj;
    cout << obj.getSum(a, b);
}
