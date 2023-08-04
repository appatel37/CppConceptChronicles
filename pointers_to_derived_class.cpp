#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        Complex{}: a(x), b(y);
        void getData(){
            cout<<"These are the values of a and b : "<<a<<" : "<<b<<endl;
        }    
};

int main(){
    Complex c1(1,2);
    c1.getData();
    return 0;
}