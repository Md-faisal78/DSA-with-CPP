//An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
#include <iostream>
#include <cmath>
using namespace std;

int arm(int num){
    int rem,dunum , count=0, sum=0;
    dunum=num;
    while(num>0){
        num=num/10;
        count++;
    }
    while(dunum>0){
        rem=dunum%10;
        sum=sum+(int)pow(rem,count);
        dunum=dunum/10;
    }
   return sum; 
}

int main()
{   cout<<"Enter the number";
    int num;
    cin>>num;
    int sum=arm(num);
    if(sum==num){
        cout<<"yes it is";
    }
    else{
        cout<<"no its is not";
    }
}

//time complexity : O(log10N + 1) 
//space complexity : O(1)
