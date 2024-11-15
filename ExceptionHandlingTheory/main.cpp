#include <iostream>

using namespace std;

int main()
{
  int a=10,b=0;
  int c;
  try{
  if(b==0) throw " Divide by zero error";
  c=a/b;
  cout<<c<<endl;
  }
  catch(const char* c){
      cout<<"Exception Occured"<<c<<endl;
  }
  return 0;
}

/*
Exception handling in C++ is a mechanism used to handle runtime
errors or unexpected events that occur during the execution of a
program.

remember that the data types used by the throw and catch statements
 must be same. If they do not match the program is aborted with the
 help of function abort ( ) which is invoked by the compiler by
  default. When no error has occurred and no exception is thrown,
  then the catch block is ignored and the statement after the catch
  block is executed.
*/
