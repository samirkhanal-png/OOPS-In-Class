#include <iostream>

using namespace std;
/*Const member functions
 This is used to restrict modification of data members inside function

 Const function is not able to access data members inside function
*/

class Base{
 int x;
 public:
     Base(){}
     Base(int a):x{a}{}
     void setX(int a){x=a;}
     int getX() const{
     //x=20; //function is only for reading object
     return x;} //we are just returning the value without changing
};

int main()
{ Base b;
  b.setX(10);
  cout<<b.getX()<<endl;
  return 0;
}
//mutable is allowed to change inside const function write this way:mutable int x;
