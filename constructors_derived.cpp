#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int id1){
            data1 = id1;
            cout<<"Base1 constructor called!!"<<endl;
        }
        void print_base1(void){
            cout<<"The vale of data1 is = "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int id2){
            data2 = id2;
            cout<<"Base2 constructor called!!"<<endl;
        }
        void print_base2(void){
            cout<<"The vale of data2 is = "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1;
    int derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
        }
};

int main(){

    Derived aryan(1,2,3,4);
    aryan.print_base1();
    aryan.print_base2();

    return 0;
}