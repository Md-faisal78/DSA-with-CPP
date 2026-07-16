// Reverse Bits - Brute Force using string
#include <iostream>
#include<bitset>
#include<cstdint>
#include<string>
#include<algorithm>
using namespace std;

class solution{
public:
uint32_t revBits(uint32_t num){
    
    bitset<32> b(num);
    
    string s=b.to_string();
    
    reverse(s.begin(),s.end());
    
    bitset<32> rev(s);
    
    return  rev.to_ulong();
}
};

int main() {
    
    //uint32_t num = 43261596;
    cout << "Enter a number: ";

    uint32_t num;
    cin >> num;
    
    solution obj;
    cout<<"The reversed number is : "<<obj.revBits(num);
    return 0;
}
