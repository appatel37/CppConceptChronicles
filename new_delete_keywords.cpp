#include<iostream>
using namespace std;

int main(){

    int a = 10;
    int* b = &a;
    int *courses = new int[3];
    
    courses[0] = 10;
    courses[1] = 20;
    courses[2] = 30;
    courses[3] = 40;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<*b<<endl;
    // cout<<&a<<endl;
    // cout<<*Courses;

    cout<<courses[0]<<endl;
    cout<<courses[1]<<endl;
    cout<<courses[2]<<endl;
    cout<<courses[3]<<endl;

    return 0;
}