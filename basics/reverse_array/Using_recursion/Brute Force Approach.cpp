#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> reverseArray(vector<int>& arr, int n) {
        vector<int> res(n);  

        for(int i = 0; i < n; i++) {
            res[i] = arr[n - 1 - i];
        }

        return res;
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

    Solution obj;
    vector<int> result = obj.reverseArray(arr, n);

    cout << "Reversed array:\n";
    for(int x : result) {
        cout << x << " ";
    }
}

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
