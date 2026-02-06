/*
Topic: Decision Making in C++

Sub topic:
"If Statement"
The if statement is used to execute a block of code only when a
specified condition is true. If the condition evaluates to false,
the code inside the if block is skipped.
*/

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    /*
    - The condition (age >= 18) is checked.
    - If the condition is true, the statement inside the if block executes.
    - If the condition is false, the program skips the if block.
    */
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}
