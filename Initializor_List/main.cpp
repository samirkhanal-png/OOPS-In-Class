#include <iostream>
#include <string>

using namespace std;

// 1. Basic Initialization
class BasicInit {
private:
    int x;
public:
    BasicInit(int value) : x(value) {  // Initializing member x using initializer list
        cout << "BasicInit: x = " << x << endl;
    }
};

// 2. Initialization of const members
/*
Const members should be initialized when declaring so that
it cannot be changed later on but we want it to be initialized
by the user(during run time) how we can do so.


Initialization must be done in the initializer list as it is
executed before the constructor's body where there is chances of
reassignment in the const.
(Direct initialization happens no empty variable is created)

Constructor Body: This is where assignments can happen.
If you tried to assign a value to a const member here,
it would be an  error because the member should already
have been initialized and cannot be modified.




*/

class ConstInit {
private:
    const int x;  // const member, must be initialized in initializer list
public:
    ConstInit(int value) : x(value) {  // Initializing const member
        cout << "ConstInit: const x = " << x << endl;
    }
};

// 3. Initialization of Reference Members
class RefInit {
private:
    int &ref;  // Reference member, must be initialized in initializer list
public:
    RefInit(int &value) : ref(value) {  // Initializing reference member
        cout << "RefInit: ref = " << ref << endl;
    }
};

// 4. Initializing Base Class
class Base {
public:
    Base(int val) {
        cout << "Base class constructor called with value: " << val << endl;
    }
};

class Derived : public Base {
public:
    // Base class is initialized using initializer list
    Derived(int val) : Base(val) {
        cout << "Derived class constructor called" << endl;
    }
};

// 5. Member Objects Initialization
class MemberClass {
public:
    MemberClass(int val) {
        cout << "MemberClass constructor called with value: " << val << endl;
    }
};

class MemberInit {
private:
    MemberClass m;  // Member object of another class
public:
    // Member object m is initialized using initializer list
    MemberInit(int val) : m(val) {
        cout << "MemberInit constructor called" << endl;
    }
};


// 6. Performance Benefits: Initializing non-primitive members
class StringInit {
private:
    string str;  // Non-primitive member (string)
public:
    // Initialize string directly in initializer list to avoid extra copying
    StringInit(const string &s) : str(s) {
        cout << "StringInit: str = " << str << endl;
    }
};

/*
Direct Initialization (in the initializer list) avoids the default construction step. Instead, str is constructed directly with the value of s.
Assignment in Constructor Body does two things:
First, constructs str as an empty string.
Then, assigns s to str by calling the assignment operator, which involves some extra overhead (like deallocating old data, if any).

 */

// 7. Multiple Member Initialization
class MultiMemberInit {
private:
    int x;
    float y;
    char z;
public:
    // Initialize multiple members at once
    MultiMemberInit(int a, float b, char c) : x(a), y(b), z(c) {
        cout << "MultiMemberInit: x = " << x << ", y = " << y << ", z = " << z << endl;
    }
};

// 8. Dynamic Memory Allocation
class DynamicInit {
private:
    int *p;
public:
    // Allocating memory dynamically using initializer list
    DynamicInit(int size) : p(new int[size]) {
        cout << "DynamicInit: Memory allocated" << endl;
    }
    ~DynamicInit() {
        delete[] p;
        cout << "DynamicInit: Memory deallocated" << endl;
    }
};

//Important feature
// 9. Delegating Constructors (C++11 feature)
class DelegateInit {
private:
    int x, y;
public:
    // Delegating constructor A(int) to A(int, int)
    DelegateInit(int a) : DelegateInit(a, 0) {
        cout << "DelegateInit: One argument constructor called" << endl;
    }

    // Main constructor that initializes both x and y
    DelegateInit(int a, int b) : x(a), y(b) {
        cout << "DelegateInit: x = " << x << ", y = " << y << endl;
    }
};


/**** Important feature ****/
// 10. Initialization of Arrays
class ArrayInit {
private:
    int arr[3];  // Array as member
public:
    // Initializing array elements using initializer list
    ArrayInit(int x, int y, int z) : arr{x, y, z} {
        cout << "ArrayInit: arr[0] = " << arr[0] << ", arr[1] = " << arr[1] << ", arr[2] = " << arr[2] << endl;
    }
};

int main() {
    // 1. Basic Initialization
    BasicInit basic(5);

    // 2. Initialization of const members
    ConstInit constObj(10);

    // 3. Initialization of Reference Members
    int refVal = 20;
    RefInit refInit(refVal);

    // 4. Initializing Base Class
    Derived derivedObj(30);

    // 5. Member Objects Initialization
    MemberInit memberInit(40);

    // 6. Performance Benefits
    StringInit stringObj("Hello C++");

    // 7. Multiple Member Initialization
    MultiMemberInit multiInit(1, 2.5f, 'A');

    // 8. Dynamic Memory Allocation
    DynamicInit dynamicObj(5);

    // 9. Delegating Constructors
    DelegateInit delegateObj(50);

    // 10. Initialization of Arrays
    ArrayInit arrayInit(1, 2, 3);

    return 0;
}
