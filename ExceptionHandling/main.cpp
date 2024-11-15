#include <iostream>]
#include<string>

using namespace std;

bool checkLC(string str){
 for(auto ch:str){
    if(isupper(ch)){
        return false;
    }
 }
 return true;
}

bool checkUC(string str){
for(auto ch:str){
    if(islower(ch)){
        return false;
    }
 }
 return true;
}

bool checkDigit(string str){
  for(auto ch:str){
    if(isdigit(ch)){
        return true;
    }
 }
 return false;
}

int main()
{   string password;
    try{
    getline(cin,password);
    if(password.length()<8)throw 's';
    else if(checkLC(password)) throw 'l';
    else if(checkUC(password)) throw 'u';
    else if(!checkDigit(password)) throw 'd';
    }
    catch(char c){
     if(c=='s') cout<<"Length must greater than or equal to 8"<<endl;
     if(c=='l')cout<<"Must contain at least one capital letter"<<endl;
     if(c=='u')cout<<"Must contain at least one uppercase letter"<<endl;
     if(c=='d')cout<<"Must contain at least one digit"<<endl;
    }
    return 0;
}
