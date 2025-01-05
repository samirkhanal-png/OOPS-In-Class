#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

/*
Why constructors can't be made virtual?

Constructors can't be made virtual because constructors are supposed
to run from the base class to the derived class.(so no need to look for runtime)

Constructors are meant to run from the parent class to the derived class.

So, there is no any purpose of using virtual constructor.

Since the constructor is executing the initialization of the object,
the vtable for that object has not been set up yet when the constructor
is called.

Virtual functions are used for polymorphism, where the function called is determined by the type of the object at runtime.

Since a constructor is responsible for creating an object and there’s no object yet fully constructed at the time the constructor runs,
 polymorphism doesn’t make sense during construction.
*/
