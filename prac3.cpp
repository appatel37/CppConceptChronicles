#include<iostream>
using namespace std;

class Carabob{
    int a, b;
    public:
    Carabob(int x, int y):
    void getData();
};

void Carabob :: getData(){
    cout<<"The value of x and y is : "<<a<<" & "<<b<<endl;
};

int main(){
    Carabob c1403(4,5);
    c1403.getData();
    return 0;
}