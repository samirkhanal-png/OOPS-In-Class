#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

/*
In C and C++, we are able to access the array elements out of its size.

int arr[7]={1,2,3};

arr[0],arr[1] and arr[2] are initialized with the same assigned value

but other indices upto 7 are assigned zero.


also arr[size]={0}  //if first one is initialized with zero then all indices are
initialized with zero.


Suppose array contains total 10 int elements.
Finding the size of an array when size is not mentioned.
sizeof(arrname)/sizeof(arr[0]) 40/4=>10

we do not know anything about the array

the array may also have only one element

so in minimum the array will have one element so we divide by arr_name[0]


2D array is an array of one d array
arr[r][c]

int arr[2][3]=>
arr[0][0] 1000
arr[0][1] 1004
arr[0][2] 1008

arr[1][0] 1012
arr[1][1] 1016
arr[1][2] 1020


How are these stored?

We can skip the dimension in one d array if it is initialized while declaring.

We can skip the row dimension in 2d array because we can stop when the row is filled
and start the new row.


*/
