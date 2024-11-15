#include <iostream>

using namespace std;
class Complex{
int a,b;
public:
void setNumber(int n1,int n2){
a=n1;
b=n2;
}
void printNumber(){
cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//declaring friend function inside the class



}
//This is the permission given by the class owner
friend Complex sumComplex(Complex o1,Complex o2); //declaring as friend function

//friend function is allowed to do anything with the private parts of class.

};

Complex sumComplex(Complex o1,Complex o2){ //returning data of complex type
Complex o3;   //here below we are accessing private data type of class complex
o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
return o3;
}

int main()
{   Complex c1,c2;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    cout << "Hello world!" << endl;
    c1.printNumber();
    c2.printNumber();
    Complex sum=sumComplex(c1,c2);//no need to call any class
    sum.printNumber();
    return 0;
}
/*
Object created from classname is of that class type.

Compiler does not allow outside function to access the private members of
the class.

friend function is not a member function of a class remember this

Properties of friend functions
Not in the scope of a class.
Since it is not in the scope of the class, it cannot be called from the object
of this class. c1.sumComplex() is invalid
can be invoked without the help of any object.
Usually contains arguments as object.


*/
