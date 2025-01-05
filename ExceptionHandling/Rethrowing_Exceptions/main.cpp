#include<iostream>
using namespace std;

void Division(int x, int y) {
    cout <<"inside function\n";
    try {
        if (y == 0)
            throw y;
        else
            cout<<"division = "<< x/y <<endl;
    }
    catch (int y) {
        cout<<"divide by zero inside function\n";
        throw;  // Rethrow the caught exception to be handled elsewhere
    }
    cout<<"End of function\n";  // Will not be printed if exception is thrown
}

int main() {
    cout<<"inside main \n";
    try {
        Division(20, 0);
    }
    catch(int e) {  // This catch block catches the rethrown exception
        cout<<"caught divide by zero inside main\n";
    }
    cout<<"End of main() function\n";
    return 0;
}

/*
The throw; statement is used without an argument, which rethrows the same exception
(i.e., the integer exception 0) without any modification.

The exception is first caught inside Division(), handled partially
(e.g., printed), and then rethrown.

The main() function then fully
handles the exception (prints the error message), and the program
continues execution.

This can be useful when an exception needs to be processed or logged
at multiple levels before being fully handled.

When you use throw; without an argument inside a catch block, it rethrows the current
exception that was just caught, passing it up the call stack until it is caught
again or till not found.

*/
