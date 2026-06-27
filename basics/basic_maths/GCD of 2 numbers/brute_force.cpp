#include <iostream>
using namespace std;

int gcd_finder(int n1 , int n2){
    int gcd=1;
    for(int i=1;i<=(min(n1,n2));i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    return gcd;
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
//space complexity : o(1)
