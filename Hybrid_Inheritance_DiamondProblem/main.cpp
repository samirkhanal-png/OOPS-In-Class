#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class A{
public:
    int a;
    void f1(){cout<<"Function F1"<<endl;}
};

class B1:virtual public A{
public:
    int b1;
    void f2(){cout<<"Function F2"<<endl;}

};

class B2:virtual public A{
public:
    int b2;
    void f3(){cout<<"Function F3"<<endl;}

};

class C:public B1,public B2{
public:
    int c;
    void f4(){cout<<"Function F4"<<endl;}

};

int main()
{   C obj;
    //before virtual inheritance was 16 but now it becomes 24
    //after virtual inheritance compiler makes a extra pointer variable in both classes B1 and B2 to implement the concept of virtual inheritance
    //so the sizeof object becomes 24
     cout<<sizeof(obj)<<endl;
    //obj.a=5; //there are two a's so which one should be referred that is the problem and ambiguous
    //cout<<obj.a<<endl;
    obj.f1();  //found from both path through B1 and B2
    obj.f2(); //present in nearest B1 parent class so bind to this and does not go below that
    //also goes to the B2 but not found here not found in A also so f2 is found in B1 only so run this
    //even if there are multiple classes it goes to all the parent class
    //there is no ambuigity

    obj.f3(); //present in B2 parent class so bind to this
    obj.f4(); //present in C class obj
    return 0;
}

/*
This problem is also called:
Diamond of Death
Diamond Problem

Solutions are:
Disinheritance
Virtual base class
Virtual Inheritance

Scenario in hybrid inheritance
     A
   /   \     Hierarchial
 B1     B2
   \   /     Multiple
     C

Combination of hierarchial and multiple inheritance
Hybrid inheritance is a combination of multiple and multi level inheritance.

Obj should have four int a,b1,b2 and c so it should have size 16 bytes
but it has the size 20 bytes.

Obj actually has two variables of a  then b1,b2,and c.


This causes two copies of A's member variable a to be present in class C because
C inherits from both B1 and B2, each of which has its own copy of A.
This is why the size of C is larger than expected: you have two
instances of a, one from B1 and one from B2.

This ambiguity can be solved with the help of virtual class.

Early binding=>Compiler binds the function with its right definition
during compilation time.

The compiler walks through every possible parent class to find the
particular function. So if the same function is found through multiple path
then it is considered as ambiguity.

So compiler becomes confused.

This can be solved by virtual base class.

Solution

Disinheritance
Only 1 copy of f1() from base class A reaches in object of class C.

Through this solution,it looks like class A is virtual base class of class C.

Class A directly behaves as the parent of the class C.

We need to make the problematic class as virtual inheritance.


Memory Layout in Virtual Inheritance

Without Virtual Inheritance
If we didn't use virtual inheritance,
both A and B would get their own copies of the Base class.
This results in two copies of Base, leading to ambiguity.
The memory layout would look like this:

less
Copy code
C
├── A
│   └── Base  // Copy 1 of Base
└── B
    └── Base  // Copy 2 of Base
With Virtual Inheritance
When virtual inheritance is used, only one copy of Base is shared among A, B, and C. Internally, pointers and offsets are used to adjust access to this shared base class. The memory layout looks like this:

css
Copy code
C
├── A (shared Base)   //points to the function using address in the vtable of each class. address is same
└── B (shared Base)

C:
a
b1
a
b2
c

which a to access from the object of class C creates ambiguity problem
This creates ambiguity problem.

 When we inherit a class virtually, compiler creates share able
 object of base class. Each class which inherits base class
 virtually, contains the address of share able class. In this case
 compiler will create a share able object of class A. 4 bytes extra
 memory is due to this only.

Pointer contains 8 bytes in 64 bit operating system.


*/
