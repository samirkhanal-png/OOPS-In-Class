#include<iostream>

using namespace std;

void Number(int value) //throw( int, char, double)
{
  if ( value == 0) throw 'x'; //char
  else
    if ( value > 0) throw value; // int
  else
    if ( value < 0) throw 1.0; // double
}

int main()
{
  try
  {
    Number(0);
  }
  catch(char ch)
  {
    cout<<"caught a null value\n";
  }
  catch(int m)
  {
    cout<<"caught a positive value\n";
  }
  catch(double d)
  {
    cout<<"caught a negative value\n";
  }
  return 0;
}
/*

Note:We can simply throw from the function definition without any throw type list also

Restricting exceptions


We can restrict a function to throw only certain specified exceptions outside of it.
This is accomplished by adding a throw list clause to the function definition. The general form of this as shown here:

return_type Function_Name ( arg-list) throw (type-list)
{
	………………….
	…………………
}
The type-list specifies the type of exceptions that may be thrown.
Throwing an exception that is not supported by the function causes
abnormal program termination. We can restrict a function from
throwing any exception by using empty type-list. That is throw( )
*/
