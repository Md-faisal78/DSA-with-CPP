/*
Problem: Swap Two Numbers
Method:Using Arithmetic Operators

Logic:
Store the sum of a and b in a (a = a + b).
Get the original value of a, that is (sum - original value of b)and store it in b (b = a - b).
Get the original value of b, that is (sum - original value of a)and store it in a (a = a - b).

Time Complexity: O(1)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3;
    cout << "a = " << a << " b = " << b << endl;   
  
    a = a + b;
    b = a - b;
    a = a - b;
  
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}
