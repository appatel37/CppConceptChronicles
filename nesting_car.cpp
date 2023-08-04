#include<iostream>
using namespace std;

class Showroom{
    string car_name;
    string model;
    public:
        void model_code(void);
        void chk_name_match(void);
        void features(void);
        void display(void);
};

void Showroom :: model_code(void){
    cout<<"Enter car model code (Audi'A')/(Mercedes'M') : ";
    cin>>car_name;
};

void Showroom :: chk_name_match(void){
    for(int i = 0; i<car_name.length(); i++){
        if((car_name.at(i)) != 'M' && (car_name.at(i)) != 'A'){
           cout<<"This car is not available"<<endl;
           exit(0);
        }
    }
};

void Showroom :: features(void){
    for(int i = 0; i<car_name.length(); i++){
         if((car_name.at(i)) == 'M' && (car_name.at(i)) == 'A'){
            cout<<"Which model you want?"<<endl;
            cin>>model;
        }
    }
};

void Showroom :: display(void){
    for(int i = 0; i<car_name.length(); i++){
    if(model.at(i) == 'M'){
        cout<<"Aukaat hai!!!"<<endl;
    }
    else{
        cout<<"Maudi laavi pn audi laavi"<<endl;
    }
    }
};

int main(){
    
    Showroom scarborough;
    scarborough.model_code();
    scarborough.chk_name_match();
    scarborough.features();
    scarborough.display();

    return 0;
}