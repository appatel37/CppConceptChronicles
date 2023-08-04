#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int num1, int num2)
    {
       a = num1;
       b = num2;
    }
    void getData()
    {
        cout <<"The point is ("<<a<<", " << b << ")";
    }
};

int main()
{
    Complex c1(4, 6);
    c1.getData();
    return 0;
}