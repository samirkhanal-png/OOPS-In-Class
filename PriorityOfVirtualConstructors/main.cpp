#include <iostream>
using namespace std;

class C {
public:
    C() { cout << "C constructor\n"; }
};

class B : public C {
public:
    B() { cout << "B constructor\n"; }
};

class A : public B, virtual public C {
public:
    A() { cout << "A constructor\n"; }
};

int main() {
    A obj;
    return 0;
}
/*
This ensures that only one instance of the virtual base class (C)
is created, regardless of how many intermediate classes (B) inherit from it.

*/
