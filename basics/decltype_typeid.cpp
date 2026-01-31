// Topic: Use of decltype() and typeid()

#include <iostream>
#include <typeinfo>   // Required for typeid()
using namespace std;

int main() {

    int a = 10;
    float b = 5.5;

    // decltype() is used to declare a variable
    // with the same type as an existing variable
    decltype(a) x = 20;     // x will be of type int
    decltype(b) y = 3.14f;  // y will be of type float

    // typeid().name() returns the type of a variable
    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Type of b: " << typeid(b).name() << endl;
    cout << "Type of x: " << typeid(x).name() << endl;
    cout << "Type of y: " << typeid(y).name() << endl;

    return 0;
}
