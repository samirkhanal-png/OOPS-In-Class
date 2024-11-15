#include <iostream>

using namespace std;
class Shop{
int itemId[100];
int itemPrice[100];
int counter;
public:
    void initCounter(void){counter=0;}
    void displayPrice(void);
    void setPrice(void);

};

//Defining function outside the class
//function type className::method(){}
//counter is the variable inside the scope shop so accessible
void Shop::setPrice(void){
  cout<<"Enter Id of your item"<<counter+1<<endl;
  cin>>itemId[counter];
  cout<<"Enter Price of your item"<<endl;
  cin>>itemPrice[counter];
  counter++; //tracks how many items are added
}

void Shop::displayPrice(void){
 for(int i=0;i<counter;i++){
   cout<<"The price of item with ID"<<itemId[i]<<" is "<<itemPrice[i];
 }
}

int main()
{   Shop dukaan;
    dukaan.initCounter();

    //we can call it inside a loop
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();

    dukaan.displayPrice();
    return 0;
}

/*

*/
