#include <iostream>
using namespace std;

class Base {};
class Derived : public Base {};

int main() {
    Derived d;
    try {
        throw d;  // Derived object thrown
    }
    catch (Base b) {  // Will this catch work?
        cout << "Caught Base" << endl;
    }
    catch (Derived d) {  // This catch is after Base!
        cout << "Caught Derived" << endl;
    }
    return 0;
}
/*
When dealing with inheritance, the order of catch blocks is important.
If a Derived class exception is thrown, it should be caught before the
Base class exception, because a Base catch block can also catch
Derived class objects due to polymorphism.
*/
