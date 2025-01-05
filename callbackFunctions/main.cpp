#include<iostream>
using namespace std;
int sum(int num1,int num2){
 return num1+num2;
}

int main(){
int (*fp)(int,int);//Function pointer declaration
fp=sum;
int op1=fp(10,9); //Calling function using function pointer Can also be called by dereferencing (*fp)(parameter)
cout<<"Sum is "<<op1;
return 0;

}
/*Note When we call any function funcName(){} =>functionAddr(){}
int *fp(); denotes the function that returns pointer type

Function pointers are useful in code reuse

Function pointers can be passed as parameters in function calls and can be returned as function values. Use of function pointers as parameters makes for flexible functions and programs.

Key Point: f2p(10, 9) and (*f2p)(10, 9) are functionally equivalent. The dereferencing is implied if you directly call the function using the function pointer.

Array of function pointers are written this way (*funp[3])()

*/
