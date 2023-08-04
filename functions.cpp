#include<iostream>
using namespace std;

void happyBirthday(string name);

int main(){
    string name = "Aryan";

    happyBirthday(name);
    happyBirthday(name);
    happyBirthday(name);

    return 0;
}
void happyBirthday(string name){
    cout<<"Happy Birthday to "<<name<<"!"<<endl;
}
