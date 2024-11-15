// Online C++ compiler to run C++ program online
#include <iostream>
//First occurence of palindrome words in a string
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,T;
    getline(cin,s);
    stringstream X(s);
    int count=0;
    while(getline(X,T,' ')){
        int left=0;
        int right=T.size()-1;
        int flag=1;
        while(left<=right){
            if(T[left]!=T[right]){
                flag=0;
                break;
            }
            left++;
            right--;
        }
        if(flag){
         count++;
        }
    }
    cout<<"There are "<<count<<" palindrome words in the sentence";
    return 0;
}

/*
string S, T;: Two string variables, S and T, are declared. S will store the entire input line, and T will be used to store each word as it is extracted.

getline(cin, S);: This reads a line of input from the standard input (usually the keyboard) and stores it in the string S.

stringstream X(S);: This creates a stringstream object X initialized with the string S. A stringstream is used to break the string into words.

while (getline(X, T, ' ')) { ... }: This loop extracts words from the stringstream X. The getline function reads from X into T, using a space ' ' as the delimiter. The loop continues as long as getline successfully reads a word.
*/
