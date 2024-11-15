#include <iostream>

using namespace std;

int main()
{   int n;
    cout<<"Enter the marks ";
    cin>>n;
    if(n>90){
        cout<<"A ";
    }
    else if(n>80){
        cout<<" B ";
    }
    else if(n>70){
        cout<<"C";
    }
    else if(n>60){
        cout<<"D";
    }
    else if(n>50){
        cout<<"E";
    }
    else{cout<<"F";}

    return 0;
}

/*
Flow of statements
if
if else
nested if else
else if else
else if ladder
switch
ternary operator


If there are multiple statements then curly bracket is compulsory in if else
if(marks>=40)
cout<<"Pass";
cout<<"Marks is:",marks; //Independent statements
else
cout<<"fail";

there must be if before else

nested if else
if(a>b){
if(a>c){
    cout<<"a is greatest";
}
}
else{
cout<<"c is greatest";
}

if(a>b){
if(a>c){
    cout<<"a is greatest";
}
else{
    cout<<"c is greatest";
}
}
else{
    if(b>c){

    }
}

*************else if ladder***********

**********switch case*****************
prints the matching case as well as the below matching cases.



*/
