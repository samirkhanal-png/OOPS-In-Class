#include <iostream>

using namespace std;
class Complex; //Forward declaration here we are guaranteeing that class complex is available later on

class Calculator{
public:
    int add(int a,int b){
     return a+b;
    }
    /*Complex sumRealComplex(Complex o1,Complex o2){ //Compiler reaches here but does not know about the complex class
        //so forward declaration
     return (o1.a+o2.b); //till now we do not have a and b inside the object
    }*/

    //just give the declaration and define after telling about complex class
    int sumRealComplex(Complex ,Complex );//at the end it results in integer  result
    //we cannot write o1.a o2.a because we have only forward declared the Complex type we do not have its data type.

};



class Complex{
int a,b;
//always data type class::member access outside the function in this way remember this

//individually declaring functions as friends
//friend int Calculator ::sumRealComplex(Complex o1,Complex o2);

//make the whole calculator class as friend
friend class Calculator;

//We can declare the entire calculator class as friend

public:
void setNumber(int n1,int n2){
a=n1;
b=n2;
}
void printNumber(){
cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}


};

//Just giving the definition of function inside class Calculator
int Calculator :: sumRealComplex(Complex o1,Complex o2){
 return (o1.a+o2.a);
}

int main(){
Complex o1,o2;
o1.setNumber(1,4);
o2.setNumber(5,7);

//Calculator class is able to access private members of the complex class
Calculator calc;
int res=calc.sumRealComplex(o1,o2);
cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
return 0;
}


/*
What if we want numerous functions to be friend function of complex class

shall we write friend datatype class::function_name(Class_name,Class_name) all the time //No


*/
