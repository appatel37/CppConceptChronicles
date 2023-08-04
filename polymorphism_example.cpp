#include<iostream>
using namespace std;

void Sum(int a, int b){          
    cout<<"Answer : "<<a+b;
}            // this fake polymorphism as it doesnt take double and instead do int so its called Adoche.

void Sum(double a, double b){
    cout<<"Answer : "<<a+b;   // overloading
}

int main(){
    double a = 5.3;
    double b = 6.1;

    Sum(a, b);

    return 0;
}

