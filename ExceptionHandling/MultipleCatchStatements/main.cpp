#include<iostream>

using namespace std;

void Number(int value)
{
  try
  {
    if (value == 0) throw 'x'; //char
    else
      if(value > 0) throw value; // int
    else
      if(value < 0) throw 1.0; // double
    cout<<"End of try block\n";
  }
  catch (char ch)
  {
    cout<<"Caught a null value\n";
  }
  catch ( int m)
  {
    cout<<"Caught a positive value\n";
  }
  catch ( double d)
  {
    cout<<"Caught a negative value\n";
  }
  cout<<"End of try-catch block\n";
}
/*
When an exception is thrown, the catch blocks are searched in order.
 The very first catch block that yields a match is executed. After
 executing the catch block, the control goes to the first statement
  after the last catch block.
*/
int main()
{
  Number(7);
  Number(0);
  Number(-2);
  return 0;
}
