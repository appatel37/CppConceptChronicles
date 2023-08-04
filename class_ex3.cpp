#include<iostream>
using namespace std;

class student{
    string name;
    int marks1, marks2;
    public:
        int calc_media(){
            return marks1+marks2;
        }
        void display(){
            cout<<"Total marks obtained : "<<calc_media<<endl;
        }
        void display_name(){
            cout<<"Enter the name of student : "<<endl;
            cin>>name;
            cout<<"Enter the marks1 : "<<endl;
            cin>>marks1;
            cout<<"Enter the marks2 : "<<endl;
            cin>>marks2;
        }
};

int main(){

    student grade_8_a;
    grade_8_a.display_name();
    grade_8_a.calc_media();
    grade_8_a.display();

    return 0;
}