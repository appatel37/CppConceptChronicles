#include<iostream>
using namespace std;

class binary{
    string s;
    public :
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binay number :"<<endl;
    cin>>s;
};

void binary :: chk_bin(void){
    for(int i = 0; i<s.length(); i++){// In "s.length()" the length is a function of c++ which denotes length of the string s
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0); // this means EXIT THE FUNCTION WITH 0 ERRORS 
        }
    }
};

void binary :: ones(void){
    for(int i; i<s.length(); i++){
    if(s.at(i)=='1'){
        s.at(i)='0';
    }else{
        s.at(i)='0';
    }
    }
};

void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for(int i = 0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
};

int main(){

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}