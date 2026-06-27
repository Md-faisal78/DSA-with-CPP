#include <iostream>
#include <vector>
using namespace std;

vector<int> all_divider(int num){
    int rem;
    vector<int> divi;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            divi.push_back(i);
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

//Time Complexity: O(N), we check for every number from 1 to N.
//Space Complexity: O(N), extra space used for storing divisors.
