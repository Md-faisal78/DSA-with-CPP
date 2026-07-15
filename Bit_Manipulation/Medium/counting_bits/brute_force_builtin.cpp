// Counting Bits - Built-in Function

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);

        for (int i = 0; i <= n; i++) {
            result[i] = __builtin_popcount(i);
        }

        return result;
    }
};

int main() {
    int n = 5;
    Solution obj;
    vector<int> res = obj.countBits(n);

    for (int x : res) cout << x << " ";
}
