#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(void);
    void getData();
}; 

void Complex:: getData(){
    cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
}

Complex::Complex(void){
    a = 10;
    b = 0;
}
int main(){

    Complex c;
    c.getData();
    return 0;
}