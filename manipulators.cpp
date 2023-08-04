#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 3, b = 78, c = 1233;

    cout << " The value of a without is : "<<a<<endl;
    cout << " The value of b without is : "<<b<<endl;
    cout << " The value of c without is : "<<c<<endl;

    cout << " The value of a with is : "<<setw(4)<<a<<endl;
    cout << " The value of b with is : "<<setw(4)<<b<<endl;
    cout << " The value of c with is : "<<setw(4)<<c<<endl;

    //precedence
    //local variable takes place first.

    return 0;
}