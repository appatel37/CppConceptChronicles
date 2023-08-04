#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int, int);
    void getData();
}; 

void Complex:: getData(){
    cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
}

Complex::Complex(int x, int y){
    a = x;
    b = y;
}
int main(){

    Complex c(2,3);
    c.getData();
    return 0;
}