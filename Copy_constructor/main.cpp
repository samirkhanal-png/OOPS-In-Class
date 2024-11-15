#include <iostream>

using namespace std;
class Number{
int a;
public:
    /*Number(){

    } */ //without any default constructor it gives error

    Number():a(0){

    }


    Number(int num){ //when we have made parameterized constructor it overrides the dafault constructor
     a=num;          //so we do not have any default constructor now so we have to make it ourselves
    }

    //When no copy constructor is found compiler supplies its own copy constructor
    Number(Number &obj){
    cout<<"Copy constructor called"<<endl;
    a=obj.a;
    }

    void display(){
    cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{   Number x,y,z(45);
    z.display();
    x.display();
    //Number z1(z);
    Number z1=z;
    /*
    Number z1;
    z1=z //copy constructor does not run in such case
    */
    z1.display();
    return 0;
}
