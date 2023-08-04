#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // creating a constructor
    // Constructor is a special member function with same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created.

    Complex(void); // constructor declaration // -- > this is a default constructor as it don't consume any data
    void getData(){
        cout<<"The equation is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex :: Complex(void){ // constructor defined
    a = 10;
    b = 0;
};

int main(){
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.getData();
    return 0;
}

// CHARACTERISTICS OF CONSTRUCTOR :

// 1. it should be declared in the public section of the class.
// 2. they are automatically invoked whenever the object is created.
// 3. they cannot return value sand do not have return types
// 4. it can have default arguments
// 5. we cannot refer to their address.