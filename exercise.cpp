#include<iostream>
using namespace std;

int multiplication(int a, int b){
    int c = a*b;
    return c;
}

void g(){
    cout<<"Welcome"<<endl;
}

int main(){
   
    int num1, num2;

    g();

    cout<<"Enter the first number : ";
    cin>>num1;

    cout<<"Enter the second number : ";
    cin>>num2;

    cout<<"The answer is "<<multiplication(num1, num2);

    return 0;
}