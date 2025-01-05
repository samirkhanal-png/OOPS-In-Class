#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

/*
ostream& operator<<(ostream& out,complex &c1){
 out<<c1.real<<c1.image;
 return out;
}

cout<<B1<<B2<<B3;
       cout
Since ostream is not the member function of the userDefined class so
we need to pass it as a parameter

we are returning out
cout<<c1.real<<c1.image<<B2<<B3

now overloads for B2 and then overloads for B3

helps in chaining

since we are using an object outside of class we have to use friend keyword

contains two different parameter from two different objects so it cannot belong to the user class

so using friend

Note:Operator overloading inside the class must only take only one argument so here we need to pass two arguments with different class
cout.operator<<(class userType)

Here cout is not of class userType

So we need to write the overloading function outside of the class

and to access the members of the class Usertype we need to make it user defined type in the class ok

*/
