/*
Problem: Program for sum of n natural numbers
Method: Formula Based Method

Logic:
Sum of first n natural numbers = (n * (n+1)) / 2 

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int sumofN(int n) {
    return ((n*(n+1))/2);
}

int main() {

    int num;

    cout << "Sum of: ";
    cin >> num;
    cout<<"is"<<endl;
    cout<<sumofN(num);

    return 0;
}
