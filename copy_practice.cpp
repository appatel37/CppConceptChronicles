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
            cout<<"Copy constructor called!!!"<<endl;
        }
        void getData(){
            cout<<"The number assigned is "<<a<<endl;
        }
};

int main(){
    Home h1(2), h2, h3;
    h1.getData();
    Home x(h1);
    x.getData();

    return 0;
}