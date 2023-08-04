#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; // IMP - whenever we write static variable we do not need to initialize it from 0 .... it's by default 0
    public: 
        void setData();
        void getData();
        void static getCount(void);
};

void Employee :: setData(void){
    cout<<"Enter the ID :"<<endl;
    cin>>id;
    count++;
}

void Employee :: getData(void){
    cout<<"The ID of this employee is "<<id<<" and this is employee number "<<count<<endl;
}

int Employee :: count; 

// the static data variable is defined outside the class 
// DAFAULT VALUE IS 0
// the count initiats 0;
// this variable consumes memory one time only and then increases later

void Employee :: getCount(void){
    cout<<"The value of count is "<<count<<endl;
}

int main(){

    Employee aryan, himalay, manasvi;

    // COUNT is the static data member.

    aryan.setData();
    aryan.getData();
    Employee::getCount();

    himalay.setData();
    himalay.getData();
    Employee::getCount();

    manasvi.setData();
    manasvi.getData();
    Employee::getCount();

    return 0;
}