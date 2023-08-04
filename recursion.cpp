#include<iostream>
using namespace std;

int fib(int n){
    return fib(n-2) + fib(n-1);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    //factorials
    int a;
    cout<<"Which number fibonacci you want? : ";
    cin>>a;
    cout<<"The answer is "<<fib(a);
    return 0;
}