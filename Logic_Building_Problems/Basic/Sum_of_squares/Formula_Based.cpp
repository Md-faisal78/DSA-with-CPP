/*
Problem: Program for sum of n natural numbers
Method:Formula-Based Approach

Logic:
Sum of squares of first n natural numbers:
= n(n + 1)(2n + 1) / 6

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int sumofSqaureN(int n) {
    return (n*(n+1)*(2*n+1))/6;
}

int main() {

    int num;

    cout << "Sum of square: ";
    cin >> num;
    cout<<"is"<<endl;
    cout<<sumofSqaureN(num);

    return 0;
}
