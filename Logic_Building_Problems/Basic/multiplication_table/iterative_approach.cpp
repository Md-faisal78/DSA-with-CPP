/*
Problem: Program for multiplication table
Method: Iterative Approach
For a number n, multiply it with integers from 1 to 10.
Each iteration prints: n × i = n*i

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

void multi(int n){
    for(int i=1;i<11;i++){
        cout<<n<<'*'<<i<<'='<<n*i<<endl;
    }
}

int main() {

    int num;

    cout << "Multiplication of : ";
    cin >> num;
    cout<<"is: "<<endl;
    multi(num);

}
