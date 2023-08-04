#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex(int x, int y){
            x = a;
            y = b;
        }
        void getData();
};

void Complex :: getData(){
    cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
}

int main(){
    return 0;
}