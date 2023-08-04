#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a, int b){
            data1 = a;
            data2 = b;
        }
        void getData();
};

void Simple :: getData(){
    cout<<"The value of data1 and data 2 is : ("<<data1<<", "<<data2<<")"<<endl;
};

int main(){
    Simple num1(3,4);
    num1.getData();
    return 0;
}