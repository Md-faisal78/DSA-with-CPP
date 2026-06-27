#include <iostream>
using namespace std;
int main()
{  int n;
   cin>>n;
   int rem;
   int rev;
   while(n!=0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   if(n==rev){
       cout<<"The given number is a palindrome";
   }
   else{
       cout<<"The given number is not a palindrome";
   }
}
