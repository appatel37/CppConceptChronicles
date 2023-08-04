#include<iostream>
using namespace std;

class B{
    protected:
        int x;
    public:
        B(int k){
            x = k*2;
        }
        virtual void f1(){
            cout<<"1:"<<x<<endl;
        }
        void f2(int m){
            x +=m;
            cout<<"2:"<<x<<endl;
        }
};

class D: public B{
    int c;
    public:
        D(int j, int z) : B(j){
            c = z;
        }
        virtual void f1(){
            cout<<"3:"<<x<<"["<<c<<"]"<<endl;
        }
        void f2(int q){
            x = c+q;
            cout<<"4:"<<x<","<<c<<endl;
        }
};

void hello(B& b){
    b.f1();
    b.f2(3);
}

int main(){
    D two(10, -5);
    hello (two);
    return 0;
}
