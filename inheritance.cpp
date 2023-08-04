#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34;
        }
        Employee(){}
};

class Programmer : Employee{
    public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode = 9;
    

};

int main(){

    Employee harry(1);
    cout<<harry.salary<<endl;

    Programmer aryan(2);
    cout<<aryan.languageCode<<endl;

    return 0;
}