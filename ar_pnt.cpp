#include<iostream>
using namespace std;

int main()
{
    //pointers and arrays
    int marks[] = {10, 20, 30, 40};
    int *p = marks;

    cout<<"The value of marks[] is "<<*(p++)<<endl;
    cout<<"The value of marks[] is "<<*(p++)<<endl;
    cout<<"The value of marks[] is "<<*(p++)<<endl;
    cout<<"The value of marks[] is "<<*(p++)<<endl;

    return 0;
}