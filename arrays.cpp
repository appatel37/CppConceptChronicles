#include<iostream>
using namespace std;

int main(){

    int marks[] = {10, 20, 30, 40};
    
    int mathMarks[4]; 

    cout<<"\n";
    cout<<"*********************"<<endl;
    cout<<"\n";

    mathMarks[0] = 100;
    mathMarks[1] = 200;
    mathMarks[2] = 300;
    mathMarks[3] = 400;

    for(int i = 0; i<4; i++){
        cout<<marks[i]<<endl;
    }
    
    cout<<"\n";

    cout<<"*********************"<<endl;

    return 0;
}