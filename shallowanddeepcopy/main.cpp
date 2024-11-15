#include <iostream>
/**Deep Copy **/
using namespace std;
class obj{
int id,age;
int *bYear;
public:
    obj(){
     id=1;
     age=1;
     bYear=new int(1); //dynamically allocate memory and assign value as 1
    } //this is just for initialization

    obj(int id,int age,int *bYear){
     this->id=id;
     this->age=age;
     this->bYear=bYear;
    }


    void setData(int id,int age,int bYear){
     this->id=id;
     this->age=age;
     *(this->bYear)=bYear; //look at this line
    }

    obj(const obj &obj2){
     id=obj2.id;
     age=obj2.age;
     bYear=new int;    //gives new free memory pointer points to new memory address
     *bYear=*(obj2.bYear);  //obj.bYear returns address and dereferencing it we get its value
    }

    void display(){
             cout<<"Deep copy"<<endl;

    cout<<id<<" "<<age<<" "<<*bYear<<endl;
    }

};

class shallowCopy{
int id,age;
int *bYear;
public:
    shallowCopy(){
     id=1;
     age=1;
     bYear=new int(1); //dynamically allocate memory and assign value as 1
    } //this is just for initialization of value for this object

    shallowCopy(int id,int age,int *bYear){
     this->id=id;
     this->age=age;
     this->bYear=bYear;
    }

    void setData(int id,int age,int bYear){
     this->id=id;
     this->age=age;
     *(this->bYear)=bYear; //look at this line
    }

    shallowCopy(const shallowCopy &obj2){ //Copy constructor
     id=obj2.id;
     age=obj2.age;
     bYear=obj2.bYear;  //obj.Year returns the address and storing the address stores the address of the original pointer of the object from where copied so any changes made in it will be reflected in the original object pointer
    }

    void display(){
     cout<<"Shallow copy"<<endl;
    cout<<id<<" "<<age<<" "<<*bYear<<endl;
    }

};

int main()
{
    /**Deep Copy **/
    obj a;
    int year=2010;
    obj c(3,12,&year);
    obj b=c;
    b.display();
    c.display();
    int newYear=2024;
    b.setData(3,12,2024); //after changing on b c is not changed
    b.display();
    c.display();

    /** Shallow copy **/
    shallowCopy aa;
    int year1=2010;
    shallowCopy cc(3,12,&year1);
    shallowCopy bb=cc;
    bb.display();
    cc.display();
    bb.setData(3,12,2024); //changing value in one object changed in both //reassignment of pointer does not cause any error
    bb.display();
    cc.display();


    return 0;
}
