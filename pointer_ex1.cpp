#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<"Enter the integers : "<<endl;
    cin>>a>>b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout<<*ptrA<<endl;
    cout<<*ptrB<<endl;

    return 0;
}