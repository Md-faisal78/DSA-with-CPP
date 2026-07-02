#include <iostream>
using namespace std;

void two_sum(int n, int arr[], int k) {
    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[i] + arr[j]) == k) {
                cout << "[" << i << "," << j << "]\n";
                found = true;
            }
        }
    }

    if(found)
        cout << "yes";
    else
        cout << "no";
}

int main() {
    cout << "Enter the number of elements\n";
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter the array elements\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the sum number\n";
    int k;
    cin >> k;

    two_sum(n, arr, k);
}

//Time Complexity: O(N²)

//Space Complexity: O(1)
