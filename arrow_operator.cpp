#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;        
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){

    Complex c1;
    Complex *c2 = &c1;
    Complex *c3 = new Complex;

    c2->setData(2,3);
    c2->getData();

    c3->setData(1,4);
    c3->getData();
    return 0;
}