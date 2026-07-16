// Missing Number - Brute Force (O(n^2))
#include <iostream>
#include<vector>
using namespace std;

class solution{
public:
int missingnumber(vector<int> nums){
    int n=nums.size();

    for(int i=0;i<=n;i++){
        bool found=false;
        for(int j=0;j<n;j++){
            if(nums[j]==i){
                found=true;
                break;
            }
        }
        if(!found) return i;
    }
 return  -1;
}
};

int main() {
    
    cout << "Enter the number of numbers";
    int n;
    cin>>n;
    cout<<"Enter the elements";
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    solution obj;
    cout<<"The missing number is : "<<obj.missingnumber(nums);
    return 0;
}
