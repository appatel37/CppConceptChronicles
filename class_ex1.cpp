#include<iostream>
using namespace std;

class Area{
    int a,b;
    public:
        Area(){} : a(x), b(y);
        int formula(){
            return a*b;
        };

};

int main(){

    Area a(2,3);

    a.formula();
    
    return 0;
}