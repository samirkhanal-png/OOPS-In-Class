#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

class IntegerSum
{
  int a, b;
  public:
  IntegerSum( int x, int y=0) // Parameterized Constructor
  {
    a= x;
    b = y;
  }
  int display ( )
  {
    return a + b;
  }
};

int main ( )
{
  IntegerSum Sum1(6); // Constructor called Implicitly
  IntegerSum Sum2 = IntegerSum( 35, 25 ); // Constructor called Explicitly
  cout<<"Sum = "<< Sum1.display( )<<endl;
  cout<<"Sum = "<< Sum2.display( )<<endl;
  return 0;
}
