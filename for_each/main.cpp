#include <iostream>

using namespace std;

int main()
{
     int arr[5]={1,2,3,4,5};
     for(int num:arr){
        cout<<num<<endl;
     }
    return 0;
}

/*
for each loop
for(int num:arr){
cout<<num<<endl;
}

Here every element of the array is copied and updated to the num variable
one by one and then we print it.

first 1 is copied to the num variable and then we print it

again 2 is updated in the num variable and then we print it.

Advantage:We do not need to tell the range of the array all the elements
will be printed one by one.
*/
