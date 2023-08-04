#include<iostream>
using namespace std;

void updateVariable(int& number);

int main(){
    int number = 5;
    cout<<"Before update: "<<number<<endl;
    updateVariable(number);
    cout<<"After update: "<<number<<endl;
    return 0;
}

void updateVariable(int& number){
    number +=2;
}
