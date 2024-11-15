/*#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() const {  // Virtual function
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() {  // Intending to override, but missed 'const'
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();  // Calls Base::show() because Derived::show() did not override correctly
    return 0;
}

*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() const {  // Virtual function
        cout << "Base class show() called" << endl;
    }
};

class Derived : public Base {
public:
    void show() const override {  // Correctly overrides
        cout << "Derived class show() called" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();  // Calls Derived::show() because it correctly overrides Base::show()
    return 0;
}

/*
This keyword helps prevent mistakes where a derived class function
might not correctly override a base class function due to issues
like mismatched function signatures.

If you mark a function with override but it doesn't match any
function in the base class (in terms of signature or name),
the compiler will generate an error, alerting you to the mismatch.

Note:Here, since the virtual keyword is applied on const show() but it
does not match with the show() in derived since it misses const in it
so early binding occurs and points to the base class function show()

*/
