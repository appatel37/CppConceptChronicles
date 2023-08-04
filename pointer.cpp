#include<iostream>
using namespace std;

int main(){

    //pointers are data type which hold the address of other data types
    // & - - - > (address of) operator
    // * - - - > dereference operator

    int a = 3; 
    int* b = &a;

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;

    return 0;

}