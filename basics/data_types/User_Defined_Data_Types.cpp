/*
Topic: User-Defined Data Types in C++

Definition:
User-defined data types allow programmers to create their own data types
by grouping variables of different data types under a single name.

user-defined data types in C++ include:
1. Structure (struct)
2. Union
3. Class
4. Type alias (using)
*/

#include <iostream>
#include <string>
using namespace std;

/*
Structure (struct):
A structure is a user-defined data type that groups variables of different
data types under a single name. Members of a structure are public by default.
*/
struct Person {
    string name;
    int age;
};

/*
Union:
A union is a user-defined data type in which all members share the same
memory location. At a time, only one member can store a value.
It is mainly used to optimize memory usage.
*/
union Data {
    int intValue;
    float floatValue;
};

/*
Class:
A class is a user-defined data type that combines data members and member
functions into a single unit. It supports object-oriented programming
concepts such as encapsulation and data hiding. Members are private by
default.
*/
class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Car Brand: " << brand
             << ", Model: " << model
             << ", Year: " << year << endl;
    }
};

int main() {

    // ----- Using struct -----
    Person person1;
    person1.name = "John";
    person1.age = 30;

    cout << "Person Name: " << person1.name
         << ", Age: " << person1.age << endl;

    // ----- Using union -----
    Data data;
    data.intValue = 10;
    cout << "Union Integer Value: " << data.intValue << endl;

    // Assigning float overwrites the integer value
    data.floatValue = 220.5;
    cout << "Union Float Value: " << data.floatValue << endl;

    // ----- Using class -----
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.displayInfo();

    /*
    Using (type alias):
    The using keyword creates an alias for an existing data type.
    It improves readability and simplifies complex type names.
    */
    using Integer = int;
    Integer num = 100;
    cout << "Using Integer type: " << num << endl;

    return 0;
}
