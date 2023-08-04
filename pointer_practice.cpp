#include<iostream>
using namespace std;

int main(){

    long arr[] = {1,2,3,4};
    long *ptr = arr;
    ptr ++;
    long *ptr2 = arr + 3;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    
    return 0;
}