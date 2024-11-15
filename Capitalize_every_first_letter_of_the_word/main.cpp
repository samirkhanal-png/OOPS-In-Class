// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
//Capitalize the first letter of each word of a string

int main() {
    string str;
    getline(cin,str);
    int len=str.size();
    for(int i=0;i<len;i++){
        if(i==0){
            str[0]=toupper(str[0]);
        }
        if(str[i]==' ' && i+1<len){
            str[i+1]=toupper(str[i+1]);
        }
    }
    cout<<"Capitalized every first letter of the word\n"<<str;
    return 0;
}

/*
#include<cctype> is required for using isLower isUpper toLower toUpper functions */
