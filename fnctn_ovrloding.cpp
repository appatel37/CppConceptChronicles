#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"\nUsing function with 3 arguments"<<endl;
    return a+b+c;
}

double volume(int r, int h){
    return 3.14*r*r*h;
}

int main(){
    // cout<<"The sum of 3 and 6 is"<<add(3,6);
    // cout<<"The sum of 3 and 6 is"<<add(3,6,6);
    int r;
    int h;
    cout<<"Enter the radius : "<<endl;
    cin>>r;
    cout<<"Enter the height : "<<endl;
    cin>>h;
    cout<<"The volume of cylinder is = "<<volume(r,h);
    
    return 0;
}

