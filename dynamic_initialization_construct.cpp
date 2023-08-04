#include<iostream>
using namespace std;

class Bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        Bankdeposit(){}
        Bankdeposit(int p, int y, float r);
        Bankdeposit(int p, int y, int r);
        void getData();
        
};

Bankdeposit::Bankdeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal; 

    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + r);
    }
}

Bankdeposit::Bankdeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal; 

    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + r);
    }
}

void Bankdeposit::getData(){
    cout<<"The return value is "<<returnValue<<endl;
}

int main(){
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the values of p, y and r"<<endl;
    cin>>p>>y>>r;

    bd1= Bankdeposit(p, y, r);
    bd1.getData();
    return 0;
}