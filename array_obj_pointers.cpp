#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){

    Shop s;
    Shop *q = new Shop;
    s.setData(2,3.65);
    s.getData();

    q->setData(4,6);
    q->getData();

    return 0;
}