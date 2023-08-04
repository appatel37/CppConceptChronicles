#include<iostream>
using namespace std;

int main(){

    // int *arr = new int [3];

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // delete[] arr; 

    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;

    int a = 100;
    int *b = &a;

    *b = 200;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;

    return 0;
}