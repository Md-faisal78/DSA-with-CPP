#include <iostream>
using namespace std;

int gcd_finder(int n1 , int n2){
    
    for(int i=(min(n1,n2));i>0;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
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
