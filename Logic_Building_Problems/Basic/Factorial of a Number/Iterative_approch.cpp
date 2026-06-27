#include <iostream>
#include <vector>
using namespace std;

int fact(int num){
    int sum=1;
    for(int i=1;i<=num;i++){
        sum=sum*i;
    }
    return sum;
}

int main()
{   cout<<"Enter the number\n";
    int num;
    cin>>num;
    int res=fact(num);
    cout<<res;
    
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
  */
