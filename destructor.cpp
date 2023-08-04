#include<iostream>
using namespace std;

class Number{
    public:
        int count = 0;
        Number(){
            count++;
            cout<<"Constructor called!!! Object Number "<<endl;
        }
        ~Number(){
            count--;
            cout<<"Destructor called!!! Object Number "<<endl;
        }
};

int main(){

    cout<<"Entering the main function"<<endl;
    cout<<"Creating first object"<<endl;
    Number n1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating two more objects"<<endl;
        Number n2,n3;
        cout<<"Exiting the block."<<endl;
    }
    cout<<"Back to main function"<<endl;

    return 0;
}