/*
if d is a divisor of n then n/d is also a divisor of n.
 Thus, by traversing just the first half we can avoid redundant iteration and computations improving the efficiency of the algorithm.
  */
#include <iostream>
#include <vector>
using namespace std;

vector<int> all_divider(int num){
    int rem;
    vector<int> divi;
    for(int i=1;i*i<=num;i++){
        if(num%i==0){
            divi.push_back(i);
            if(i!=(num/i)){
                divi.push_back(num/i);
            }
        }
    }
   return divi; 
}

int main()
{   cout<<"Enter the number";
    int num;
    cin>>num;
    vector<int> res=all_divider(num);
    cout<<"The divisors of "<<num<<" are: \n";
    for(int val : res){
        cout<<val<<"\n";
    }
    
}
//Time Complexity: O(sqrt(N)), we check for every number between 1 and sqaure root of N.
//Space Complexity: O(2*sqrt(N)), extra space used for storing divisors.
