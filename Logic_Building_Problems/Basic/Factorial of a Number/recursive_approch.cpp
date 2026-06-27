//
#include <iostream>
#include <vector>
using namespace std;

int fact(int num){
    if(num==0){
        return 1;
    }
    
    return num*fact(num-1);
}

int main()
{   cout<<"Enter the number\n";
    int num;
    cin>>num;
    int res=fact(num);
    cout<<"the factorial of "<<num<<" is "<<res;
    
}

/*
Time Complexity: O(N)
Space Complexity: O(N)
*/
