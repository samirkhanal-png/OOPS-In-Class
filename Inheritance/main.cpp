#include <iostream>

using namespace std;

class Employee{
 public:
     int id;
     int salary;
      Employee(){};

     Employee(int inpId){
     id=inpId;
     salary=34;
     }


};

//Private inheritance
class Programmer:Employee{
public:
int languageCode=9;
Programmer(int inpId){
id=inpId; //id becomes private and cannot be accessed outside the derived class
}
};

int main()
{
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(1);
    }
/*
Programmer is inherited from Employee so it tries to
call the default constructor of the Employee class which
is not present in there so we need to make the default
constructor in the base class if it overrided by the
parameterized constructor ok.
/*
    return 0;
}

/*
Default visibility mode is private

Inheritance operator :

1.In public inheritance, all public members of the base class remain public in the derived class, and all protected members of the base class remain protected in the derived class. Private members of
the base class are not accessible directly in the derived class as it
cannot be accessed outside the base class.

If we make the protected member public in derived class then it could
be directly accessed and violates the rule of protected members in
base class.

Public inheritance is the most widely used form of inheritance.

2. Protected Inheritance:
In protected inheritance, all public and protected members of the base
class become protected in the derived class. Private members of the
base class remain inaccessible as it cannot be accessed outside the
class.

3. Private Inheritance:
In private inheritance, all public and protected members of the base
class become private in the derived class. This means they cannot be
accessed directly from outside the derived class, but are still
available within the derived class itself. Private members of the
base class remain inaccessible in the derived class.s

Base Class Members	Public Inheritance	Protected Inheritance	Private Inheritance
public	public	protected	private
protected	protected	protected	private
private	Inaccessible	Inaccessible	Inaccessible

*/
