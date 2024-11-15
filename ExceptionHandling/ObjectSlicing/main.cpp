#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base object" << endl; } //late binding binding during runtime
};

class Derived : public Base {
public:
    void display() override { cout << "Derived object" << endl; }
};

int main() {
    Derived d;
    try {
        throw d;  // Throw Derived object
    }
    catch (Base b) {  // Object slicing happens here
        b.display();  // Calls Base::display(), slicing Derived part
    }
    return 0;
}
/*
Object slicing occurs when catching exceptions by value. If a Derived class object
is thrown and caught by a Base class handler by value, only the Base part of the
Derived object is retained, slicing off the Derived part.

The call to b.display() executes Base::display(), showing "Base object" instead
of "Derived object".

Solution: To avoid object slicing, catch exceptions by reference:

catch (Base& b) {  // Caught by reference, no slicing
    b.display();  // Calls Derived::display(), no slicing
}


*/
