#include<iostream>
using namespace std;

int main(){

    int marks[]={10, 20, 30, 40};
    int i=0;
    do{
        cout<<"The marks of "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<4);
    return 0;
}
