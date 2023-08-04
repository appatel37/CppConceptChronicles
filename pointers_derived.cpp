#include<iostream>
using namespace std;

class Base{
    public:
        int var_base;
        virtual void display(){
            cout<<"The base class variable is "<<var_base<<endl;
        }
};

class Derived: public Base{
    public:
        int var_derived;
        void display(){
            cout<<"The derived class variable is "<<var_base<<endl;
            cout<<"The derived class variable is "<<var_derived<<endl;
        }
};

int main(){
    Base *b;
    Base bse;
    Derived der;
    // b = & der;
    // b->var_base = 4;
    // b->var_derived  // will not work 
    Derived *d;
    d->var_base = 21;
    d->var_derived = 45;
    d->display();
    b-

    return 0;
}