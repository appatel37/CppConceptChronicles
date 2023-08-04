#include<iostream>
using namespace std;

int main(){
    int abc = 560;
    int *bcd = &abc;
    cout<<"It should be : "<<&abc<<endl;
    cout<<"It should be : "<<*bcd<<endl;
    return 0;
}