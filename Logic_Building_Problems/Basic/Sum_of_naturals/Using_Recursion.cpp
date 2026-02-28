/*
Problem: Program for sum of n natural numbers
Method: Using Recursion

Logic:
S(n) = n + S(n-1)
The function calls itself with (n-1) until it reaches the base case of n = 1. 

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int sumofN(int n) {
    if(n==1){
        return 1;
    }
    return n+sumofN(n-1);
}

int main() {

    int num;

    cout << "Sum of: ";
    cin >> num;
    cout<<"is"<<endl;
    cout<<sumofN(num);

    return 0;
}
