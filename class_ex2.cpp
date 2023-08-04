#include<iostream>
using namespace std;

class Add{
    int a, b, c;
    public:
        Add(int x, int y){
            a = x;
            b = y;
        }
        int process(){
            c = a + b;
        }
        void getData(){
            cout<<"Answer : "<<c<<endl;
        }
};

int main(){

    Add a(2,4);
    a.process();
    a.getData();
    
    return 0;
}