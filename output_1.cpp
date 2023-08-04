#include<iostream>
using namespace std;

class B{
    protected:
        int x;
    public:
        B(int k){
            x = k*2;
            cout<<"1.";
        }
        void f1(){
            cout<<"2.";
        }
        void f2(int m){
            x +=m;
            cout<<"3."<<x<<endl;
        }
};

class D: public B{
    int c;
    public:
        D(int j, int z) : B(j){
            c = z;
            cout<<"4.";
        }
        void f2(int q){
            B::f2(q);
            x *= 2;
            cout<<"5.";
        }
        ~D(){
            cout<<"D?"<<x<<","<<c<<endl;
        }
};

int main(){
    
    D two(10, 20);
    B one (7);
    two.f1();
    two.f2(4);
    one.f2(3);

    return 0;
}