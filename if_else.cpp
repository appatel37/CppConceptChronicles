#include<iostream>
using namespace std;

int main(){

    string password;

    cout<<"Enter you password : ";
    cin>>password;
    

    if(password == "!Goforit01!"){
    cout<<"Login Successful!"<<endl;
    } 
    else{
        cout<<"Password Incorrect!"<<endl;
    }
    return 0;
}