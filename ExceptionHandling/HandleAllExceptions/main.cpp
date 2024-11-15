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
  catch(...)
  {
    cout<<"Caught an exception\n";
  }
  cout<<"End of try-catch block\n";
}

int main()
{
  Number(7);
  Number(0);
  Number(-2);
  return 0;
}

/*

It is possible to define a single catch block to handle all
possible types of exceptions. In such situation the syntax
of catch block is as under:

catch ( …. )
{
	// statements for handling all exceptions
}


Note:If it is used with other catch statements then it should be placed
at last since it runs for all the data types the catch statement made
for that particular data type may not run since it is in higher place.


*/
