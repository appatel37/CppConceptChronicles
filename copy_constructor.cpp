#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }

        Number(int num){
            a = num;
        }
        
        Number(Number &obj){
            cout<<"Copy Constructor called - "<<endl;
            a = obj.a;
        }

        void getData(){
            cout<<"The number for this object is "<<a<<endl;
        }

};

int main(){
    Number x, y, z;
    x.getData();
    y.getData();
    z.getData();

    Number z1(x);
    z1.getData();

    return 0;
}