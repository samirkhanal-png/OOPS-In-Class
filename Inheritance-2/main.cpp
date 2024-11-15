#include <iostream>

using namespace std;

class Employee {
public:
    int id;
    int salary;

    // Parameterized constructor
    Employee(int inpId) {
        id = inpId;
        salary = 10000;
        cout << "Employee constructor called" << endl;
    }
};

class Programmer : public Employee {
public:
    int languageCode;

    // Constructor for Programmer class
    Programmer(int inpId, int code) : Employee(inpId) {  // Explicitly calling base class constructor
        languageCode = code;
        cout << "Programmer constructor called" << endl;
    }
};

int main() {
    Programmer skillF(1, 9);  // Creating a Programmer object
    cout << "ID: " << skillF.id << ", Salary: " << skillF.salary << ", Language Code: " << skillF.languageCode << endl;

    return 0;
}
/*
Constructor Dependency and Order of Initialization:

When you create an object of a derived class, the base
class part of that object must be properly initialized
first.
This ensures that the base class's members (variables,
resources, etc.) are set up before the derived class
starts its own initialization.

If the base class has a parameterized constructor, the
compiler does not know by default how to initialize
the base class unless you explicitly provide the
parameters to the base class ie. we are calling only
the derived class so how will the base class parameterized
constructors be run through derived class object.

Avoiding the Default Constructor:
If a base class does not have a default (parameterless) constructor,
the compiler will not know how to construct the base class unless
you explicitly tell it what constructor to call and pass the
appropriate parameters.

If you don't provide a base class constructor call in the initializer list,
the compiler will try to call a default constructor in the base call(if it exists).

If no default constructor is available, the compiler will raise an error.

*/
