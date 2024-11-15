#include <iostream>

using namespace std;
int add1(int x,int y){
 return x+y;
}

int sub1(int x,int y){
 return x-y;
}

int div1(int x,int y){
return x/y;
}

int mul(int x,int y){
 return x*y;
}

void print(int x,int y,int (*fp)(int,int)){
cout<<"The result is"<<fp(x,y)<<endl;
}

int main()
{   int a,b;
    cin>>a>>b;
    print(a,b,add1);
    print(a,b,sub1);
    print(a,b,div1);
    print(a,b,mul);

    return 0;
}
