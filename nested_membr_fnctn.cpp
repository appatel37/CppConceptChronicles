#include<iostream>
#include<string>
using namespace std;

    // OOPS CLASSES AND OBJECTS :

    // c++ - initially called c with classes by bijaan strousstroup
    // class - extension of structures
    // structures had limitations - > members are public
    //                            - > no methods
    // classes = structures + more
    // classes can have methods and properties
    // classes can make few members as private and few as public
    // structure in c++ are typedefed
    // you can declare objects right after class declaration 
    // example is given below :
    // class Employee{
    // } harry, lovish, rohan;
    // harry.salary = 8 makes no sense if salary is private

    // NESTING OF MEMBER FUNCTIONS
class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
};

void binary :: chk_bin(void){
    for(int i = 0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1')
        // "at" means the position on the string i 
        //if the value is not equal to 0 and 1 and if both are true then print the below statement.
        cout<<"Incorrect binary format"<<endl;
        exit(0);
    }
};

void binary :: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
    
};

void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
};

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();

    return 0;
}