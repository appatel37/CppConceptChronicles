#include<iostream>
using namespace std;

class Bee{
    protected:
        int q;
    public:
        Bee(int k){
            q = k;
        }
        ~Bee(){
            cout<<"<A>:"<<q<<endl;
        }
        virtual void f3(){
            cout<<"<B>"<<endl;
        }
        void f5(){
            cout<<"<C>"<<endl;
        }
};

class HoneyBee : public Bee{
    char c;
    public:
        HoneyBee(int m, char z) : Bee(m){
            c = z;
        }
        ~HoneyBee(){
            cout<<"(x):"<<q<<","<<c<<endl;
        }
        void f3(){
            cout<<"(y)";
        }
        void f5(){
            cout<<"(z)";
        }
};

int main(){
    Bee* wow[2];
    wow[0] = new Bee(7);
    wow[1] = new HoneyBee(100, '?');

    for(int k = 1; k>=0; k--){
        wow[k]->f5();
        wow[k]->f3();
    }

    for (int j = 1; j>= 0; j--)
    {
        delete wow[j];
    }
    
    return 0;
}