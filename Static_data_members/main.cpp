#include <iostream>

using namespace std;
class Employee{
 int id;
 //int count; //this count is for every object and this count cannot be passed from one object to another object
 static int count; //by default it is initialized by zero
public:
    void setData(void){
      cin>>id;
      count++;
    }
    void getData(void){
    cout<<id;
    }

    //Static function is made to access all the static variables inside the class
    static void getCount(){
     cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count;  //we can also initialize it here
/*
Static variable is also known as class variable,


In C++, when you declare a static member variable inside a class,
 you are specifying that the variable is shared among all instances
  of the class.

   However, this declaration inside the class does not
   allocate storage for the variable; it merely declares its
   existence.

   Definition: The actual single storage for the static variable needs
   to be allocated somewhere in memory. This is done by defining
   the variable outside the class using int Employee::count;.
   This tells the compiler to allocate memory for count and,
   optionally, to initialize it (if you assign a value during
    the definition).

    Single Storage Location:

A static member variable is not tied to any specific object of the class. It exists independently of any class instances and has a single storage location in memory.
Defining it inside the class would imply creating a new instance of that variable for every object, which contradicts the purpose of being static.
Separate Compilation:

In C++, classes are often declared in header files, and the code is compiled separately. If the static member were fully defined in the class, it would lead to multiple definitions when the header is included in multiple source files.
By defining the static member outside the class, typically in a source file, it ensures that there is only one definition, complying with the "One Definition Rule" (ODR) in C++.

    One Instance for the Entire Class:

Since count is static, it is shared by all instances of the Employee class. Every object of Employee will refer to the same count variable. This is why count must be defined outside the class: to ensure there is a single memory location that all objects can access and modify.
Static Initialization:

By default, a static member variable is initialized to 0 if you do not explicitly initialize it. The line int Employee::count; is where this initialization happens. You could also initialize it with a specific value, like int Employee::count = 10;.

Characteristics of Static Functions
Class Scope:

A static function belongs to the class itself rather than to any specific object of the class. This means it can be called without creating an instance of the class.
Access to Static Members:

Static functions can only access other static members (variables and functions) of the class. They cannot access non-static members or instance variables directly.
No this Pointer:

Since static functions do not operate on an instance of the class, they do not have access to the this pointer. Consequently, they cannot modify instance-specific data.
Call Syntax:

You can call a static function using the class name or through an object of the class, but the latter is less common and not recommended for clarity.

*/

int main()
{
   Employee harry,rohan,lovish;

   harry.setData();
   harry.getData();

   rohan.setData();
   rohan.getData();

   lovish.setData();
   lovish.getData();

   //Static function is called this way
   Employee::getCount();

   return 0;
}
