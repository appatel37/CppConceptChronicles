#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int *b = &a;

    cout<<"The value at *b is "<<*(b)<<endl;

    int *c = new int(40); //dynamically allocating value     // NEW OPERATOR

    cout<<"The value at address *c is "<<(*c)<<endl;

    int* arr = new int[3];  //array allocating              // NEW OPERATOR

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete[] arr;

    cout<<"The value are : "<<endl;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    // DELETE OPERATOR

    return 0;
}