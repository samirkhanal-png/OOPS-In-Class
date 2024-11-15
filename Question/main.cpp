#include <iostream>
#include<algorithm>

using namespace std;

class University{
 protected:
     int id;
     string name;
 public:
     University(int id,string name){
      this->id=id;
      this->name=name;
     }
};

class Student:protected University{
 protected:
     int marks[5];
 public:
     Student(int id,string name):University(id,name){
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
     }
     void showDetails(){
     cout<<"Name"<<name<<"ID"<<id<<"TotalMarks"<<endl;
     }
};

class Faculty:protected University{
  protected:
    string dept;
  public:
    Faculty(int id,string name):University(id,name){
     cin>>dept;
    }

    void showDetails(){
     cout<<"Name"<<name<<"ID"<<id<<"Department"<<dept<<endl;
    }
} ;

int main()
{
    int id;
    string name;
    cin>>id;
    cin.ignore(1,'\n');
    getline(cin,name);
    Student s1(id,name);
    s1.showDetails();
    return 0;
}
