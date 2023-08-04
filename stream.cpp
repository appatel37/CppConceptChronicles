#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st = "Aryan";
    fstream out("sample.txt");
    out<<st;
    return 0;
}