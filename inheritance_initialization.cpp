#include<iostream>
using namespace std;

class Home{
    int a, b;
    public:
        Home(int x, int y) : a(x), b(y){
            cout<<"The value of a : "<<a<<endl;
            cout<<"The value of b : "<<b<<endl;
        }
};

int main(){

    Home h1(4,6);

    return 0;
}