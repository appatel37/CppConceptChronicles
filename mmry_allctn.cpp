#include<iostream>
using namespace std;

//whenevwr you make class memory, strings, functions, etc. they are common for all the members as it does'nt require any assistanc3e ahead.
// common - f1, f2, f3

class Shop{

    int itemID[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(void) {
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
};
 
void Shop :: setPrice(void){
    cout<<"Enter ID of your item no : "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter Price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter++;
};

void Shop :: displayPrice(void){
    for(int i = 0; i<counter; i++){
        cout<<"The Price of item with Id"<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
};

int main(){

    Shop d_mart;
    d_mart.initCounter();
    d_mart.setPrice();
    d_mart.setPrice();
    d_mart.setPrice();
    d_mart.displayPrice();

    return 0;
}