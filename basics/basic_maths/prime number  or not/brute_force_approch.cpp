/*
iterate through numbers from 1 to n, counting how many of these numbers divide n without a remainder.
If exactly two numbers do, so n is prime otherwise it is not prime.
*/
#include <iostream>
#include <vector>
using namespace std;

void prime(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}

int main()
{   cout<<"Enter the number\n";
    int num;
    cin>>num;
    prime(num);
    
    
}

//Time Complexity: O(N)
//Space Complexity : O(1)
