#include <iostream>

using namespace std;

class A{
int a;
public:
    void f1(){

    }
    virtual ~A(){ //late binding
    cout<<"Destructor of A called"<<endl;
    }
};

class B:public A{
int b;
public:
void f2(){

}

~B(){
cout<<"Destructor of B called"<<endl;
}
};

int fun(){
 A* ptr=new B; //parent class pointer can point to the child class or any descendant class
 //since ptr is of base class memory is given to both a and b of both classes due to inheritance
 //ptr->a,b
 //so releasing memory from both class is necessary so destructor should run in both

 ptr->f1();  //calls f1 in the base class
 //ptr->f2(); //error due to early binding it can only access the functions and methods in class A

 //Due to early binding it searches in the parent class
 //similary when deleting ptr it sees the type of the ptr and only runs the destructor of parent


 delete ptr; //when func ends p is destroyed so need to release memory
}

int main()
{
    fun();

    return 0;
}
