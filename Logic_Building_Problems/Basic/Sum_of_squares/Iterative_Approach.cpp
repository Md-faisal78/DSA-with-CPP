/*
Problem: Program for sum of n natural numbers
Method:Iterative Approach

Logic:
Run a loop from 1 to n and add i*i in each iteration.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int sumofSqaureN(int n) {
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(i*i);
    }
    return sum;
}

int main() {

    int num;

    cout << "Sum of square: ";
    cin >> num;
    cout<<"is"<<endl;
    cout<<sumofSqaureN(num);

    return 0;
}
