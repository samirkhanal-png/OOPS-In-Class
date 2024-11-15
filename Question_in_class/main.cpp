#include <iostream>
#include<string>
using namespace std;
class student{
int id,marks;
string name;
public:
    student(){} //Ok

    student(int id,int marks,string name){
    this->id=id;
    this->marks=marks;
    this->name=name;
    }

    student(student &obj){
     id=obj.id;
     marks=obj.marks;
     name=obj.name;
    }

    void display(){
    cout<<"ID:"<<id<<"Marks "<<marks<<"Name "<<name<<endl;
    }

};

int main()
{   student s1; //when there are parameterized and other type of constructor but not the default one then when the object which does not reference to parameterized constructor tries to call default constructor but parameterized constructor has overrided it and there is no default constructor by the compiler so there occurs error
    int id,marks;
    string name;
    cin>>id>>marks;
    cin.ignore(1,'\n');
    getline(cin,name);
    student s2(id,marks,name);
    student s3(s2);
    s2.display();
    s3.display();
    return 0;
}
