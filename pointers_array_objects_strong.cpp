#include<iostream>
using namespace std;

class ShopItem{
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

    int p;
    float q;
    int size = 3;
    ShopItem *s = new ShopItem[size];
    ShopItem *e = s;
    for(int i = 0; i < size; i++){
        cout<<"Enter Id and Price of item : "<<endl;
        cin>>p>>q;
        s->setData(p, q);
        s++;
    }
    for (int j = 0; j < size; j++)
    {
        cout<<"Item number: "<<j+1<<endl;
        s->getData();
        s++;
    }

    return 0;
}