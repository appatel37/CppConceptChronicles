#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float intrestRate;
    float returnValue;
    public:
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit::BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;
    for(int i = 0; i<y; i++){
        returnValue = returnValue*(1+r);
    }
};

BankDeposit::BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    intrestRate = float(r)/100;
    returnValue = principal;
    for(int i = 0; i<y; i++){
        returnValue = returnValue*(1+intrestRate);
    }
};

void BankDeposit :: show(){
    cout<<"When you invest "<<principal<<"Rs in the bank for "<<years<<" years at the interest rate of "<<intrestRate<<", you get this much amount "<<returnValue<<endl;
};

int main(){

    BankDeposit bd1, bd2;

    int p;
    int y;
    float r;
    int R;

    cout<<"Enter the principal : ";
    cin>>p;

    cout<<"Enter the years : ";
    cin>>y;

    cout<<"Enter thr intrest rate : ";
    cin>>R;

    bd1 = BankDeposit(p,y,r);
    bd1.show();

    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}