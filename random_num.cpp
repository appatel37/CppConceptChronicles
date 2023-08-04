#include<iostream>
#include<ctime>
using namespace std;

int main(){

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout<<num1<<endl<<num2<<endl<<num3;

    return 0;
}
