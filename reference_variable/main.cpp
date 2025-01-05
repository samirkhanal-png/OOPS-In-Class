#include <iostream>

using namespace std;

int main()
{   int a=5;
    int b=a;

    cout<<"address of a "<<&a;
    cout<<"address of b "<<&b; //points to different location

    int c=4;
    int &d=c;
    d=3;

    cout<<"address of c "<<&c<<endl;
    cout<<"address of d "<<&d<<endl;

    cout<<"Value of c"<<c<<endl;
    cout<<"Value of d"<<d<<endl;


    return 0;
}


/*
A reference variable is a variable that refers to the address of another
variable.

For eg : int a=5 (address of a=>1000)
             int b=a (stored in new address)

             int &b=a (points to the same address of a)

             If we do any change in this new variable it will implement the change
             in the address of the a.

if we give different reference to the same reference variable after it is already assigned a reference still it points to the same
reference.

Reference variable always refers to the single variable.

Dynamically allocate array and initialize it at the same time
new int[size]{1,2,3}

Dynamically allocate memory and assign it a variable at the same time
new int(value)

*/

