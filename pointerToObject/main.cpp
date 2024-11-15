#include<iostream>

using namespace std;

class Employee
{
  int Emp_id;
  float salary;
  public:
  void getdata( int e, float s)
  {
    Emp_id = e;
    salary = s;
  }
  void showdata ( )
  {
    cout<<"Employee id : "<<Emp_id;
    cout<<"\n Salary : Rs."<<salary;
  }
};

int main()
{
  Employee E;
  Employee *Etr = &E;  //Pointer to object
  Etr->getdata(234, 20000);
  Etr->showdata();
  return 0;
}

