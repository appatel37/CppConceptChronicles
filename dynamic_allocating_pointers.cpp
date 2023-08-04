#include<iostream>
using namespace std;

int main(){

    int a = 15;
    int *b = &a;

    char *c = new char('c');

    cout<<*b<<endl;
    cout<<*c<<endl;
    
    return 0;
}