// Missing Number - Hashing (O(n))
#include <iostream>
#include<vector>
using namespace std;

class solution{
public:
int missingnumber(vector<int> nums){
    int n=nums.size();
    
    vector<int> hash(n+1,0);
    for(int x:nums){
        hash[x]=1;
    }
    for(int i=0;i<=n;i++){
        if(hash[i]==0) return i;
    }
 return  -1;
}
};

int main() {
    
    cout << "Enter the number of numbers: ";
    int n;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    solution obj;
    cout<<"The missing number is : "<<obj.missingnumber(nums);
    return 0;
}
