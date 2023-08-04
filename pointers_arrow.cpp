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
    Complex *d1 = &c1;   // pointer of objects is same as of variables
    Complex *ptr = new Complex; // new object allocation
    Complex *a = new Complex;
    (*d1).setData(1,2);
    (*d1).getData();
    (*ptr).setData(3,4);
    (*ptr).getData();
    a->setData(5,6);
    a->getData();
    return 0;
}