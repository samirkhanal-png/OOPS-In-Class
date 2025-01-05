#include <iostream>

using namespace std;


class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }

    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Derived obj;  // Creating an object of the derived class
    return 0;
}

/*
1. Order of Constructor Execution:
When a derived class object is created, the base class
constructor is executed first, followed by the derived
class constructor.

 If there are multiple levels of inheritance, the constructors
 are executed in the order from the base class to the
 most derived class.

 Even though the object being created is of the Derived class,
 the base class constructor is executed first to ensure
 that the base class is fully initialized before the
 derived class constructor runs.

If the base class has a parameterized constructor, it
must be called explicitly in the initializer list of
the derived class constructor.

Destructors are executed in the reverse order of constructors.
The derived class destructor is executed first, followed by the
base class destructor.

In multiple inheritance, destructors are called in
reverse inheritance order, from the most derived class
to the base class.

When an object is destroyed, its derived class resources are typically more specialized and dependent on the base class resources. If the base class destructor were called first, the derived class members could potentially reference resources that no longer exist, leading to undefined behavior or crashes.
no longer exist and creates a dangling pointer.

Destroying the derived class first ensures that it has fully released any resources dependent on the base classes, so the base classes can be safely destroyed afterward.

If the base class destructor ran first, the base class resources would be released before the derived class could free its allocated memory, potentially leading to memory leaks or invalid memory access.

*/

