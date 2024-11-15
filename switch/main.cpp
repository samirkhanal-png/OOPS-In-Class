#include <iostream>

using namespace std;

int main()
{   char ch;
    cin>>ch;
    switch(ch){
/*case 'A':
    cout<<"vowel";
    break;
case 'E':
    cout<<"vowel";
    break;
case 'I':
    cout<<"vowel";
    break;
case 'O':
    cout<<"vowel";
        break;

case 'U':    cout<<"vowel";
        break;
default:
    cout<<"Consonant";
    break;*/

//Reduce the repition
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    cout<<"Vowel";
    break;
default:
    cout<<"consonant";
    break;


    }

int n;
cin>>n;
if(n<12){
switch(n){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    cout<<"31";
    break;
case 2:
    cout<<"28";
    break;

default:
    cout<<"30";
    break;

}
}
else{
    cout<<"Invalid month";
}

    return 0;
}

/*
ch->vowel or not
when writing integer we can directly write outside of ' '
print month days



*/
