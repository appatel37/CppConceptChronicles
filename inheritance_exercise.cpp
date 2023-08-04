#include<iostream>
using namespace std;

class SimpleCalculator{
    int a, b;
    public:
        void getData(){
            cout<<"Enter the value of A : ";
            cin>>a;
            cout<<"Enter the value of B : ";
            cin>>b;
        }
        void operations(){
            cout<<" A + B = "<<a+b<<endl;
            cout<<" A - B = "<<a-b<<endl;
            cout<<" A * B = "<<a*b<<endl;
            cout<<" A / B = "<<a/b<<endl;
        }
};

int main(){
    SimpleCalculator question1;
    question1.getData();
    question1.operations();
    return 0;
}