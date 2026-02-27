/*
Problem: Program for sum of n natural numbers
Method: Using Loop

Logic:
Calculate the sum of all integers from 1 to n by iterating through a loop.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int sumofN(int n) {
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main() {

    int num;

    cout << "Sum of: ";
    cin >> num;
    cout<<"is"<<endl;
    cout<<sumofN(num);

    return 0;
}
