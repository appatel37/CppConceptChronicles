#include<iostream>
using namespace std;

class Home{
    int a;
    public:
        Home(){}
        Home(int num){
            a = num;
        }
        Home(Home& obj){
            a = obj.a;
        }
        void getData();
};

void Home :: getData(){
    cout<<"The number is = "<<a<<endl;
};

int main(){
    Home h1, h2, h3;
    h1();
    h1.getData();
    h4(h1);
    h4.getData();
    return 0;
}