#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(int idp){
        id = idp;
        salary = 34.4;
    }
    Employee(){}
}; 

class Programmer : public Employee{
    public:
    Programmer(int idp){
        id = idp;
    }
    int languageCode =9;
    void getData();
};

void Programmer :: getData(){
    cout<<id<<endl;
}

int main(){

    Employee harry(1), rohan(2);

    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    
    Programmer skillF(1);

    cout<<skillF.languageCode<<endl;
    skillF.getData();

    return 0;
}