/*
Problem: Swap Two Numbers
Method:Using Third Variable (Pass by Reference)

Logic:
Store the value of a in temp.
Assign the value of b to a.
Assign the value of temp to b.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void Swapoftwo(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}

int main() {

    int a,b;

    cout << "Before Swap "<<endl;
    cout<<"a is: ";
    cin >> a;
    cout<<"b is: ";
    cin>>b;
    cout<<"After swap"<<endl;
    Swapoftwo(a,b);
    cout<<"a is "<<a<<", b is "<<b;

    return 0;
}
