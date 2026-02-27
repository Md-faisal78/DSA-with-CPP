/*
Problem: Check whether a number is Even or Odd
Method: Using Modulus Operator
We can check the remainder when divided by 2.
If the remainder is 0, the number is even, otherwise it is odd.

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include<iostream>
using namespace std;

bool isEven(int num){
    return (num % 2 == 0);
} 

int main(){
    int num;
    cout<<"Enter the number to check whether it is even or odd: ";
    cin>>num;
    if(isEven(num)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}


