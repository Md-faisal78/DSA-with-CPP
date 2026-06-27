/*
Euclidean Algorithm:

The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
of two numbers. It operates on the principle that the GCD of two numbers remains
the same even if the smaller number is subtracted from the larger number.

To find the GCD of n1 and n2 where n1 > n2:
1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
2. Once one becomes 0, the other is the GCD of the original numbers.
*/
#include <iostream>
using namespace std;

int gcd_finder(int n1 , int n2){
    
    while(n1>0 && n2>0 ){
        if(n1>n2){
            n1=n1%n2;
        }
        if(n2>n1){
            n2=n2%n1;
        }
    }
    if(n1==0){
        return n2;
    }
    return n1;
}

int main()
{  
    int n1, n2;
    cout<<"Enter the num 1 \n";
    cin>>n1;
    cout<<"Enter the num 2 \n";
    cin>>n2;
    int gcd=gcd_finder(n1,n2);
   cout<<"the gcd of "<<n1<<" and "<<n2<<" is "<<gcd;
}

//time complexity : O(min(N1, N2))
//space complexity : O(1)
