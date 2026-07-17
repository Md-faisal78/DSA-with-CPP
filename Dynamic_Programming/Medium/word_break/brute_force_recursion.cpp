// Word Break - Brute Force (Recursion)

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool solve(string s, unordered_set<string>& dict, int start) {
        if (start == s.size()) return true;

        for (int end = start + 1; end <= s.size(); end++) {
            string word = s.substr(start, end - start);

            if (dict.count(word) && solve(s, dict, end)) {
                return true;
            }
        }

        return false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return solve(s, dict, 0);
    }
};

int main() {
    string s = "leetcode";
    vector<string> dict = {"leet", "code"};

    Solution obj;
    cout << obj.wordBreak(s, dict);
}
