#include <iostream>
using namespace std;

class Complex; // forward declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumComplex(Complex , Complex);
    int trignometry(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator ::sumComplex(Complex o1, Complex o2);
    friend int Calculator ::trignometry(Complex o1, Complex o2);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getData()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
};

int Calculator ::trignometry(Complex o1, Complex o2)
{
    return o1.b + o2.b;
};

int main()
{

    Complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    Calculator calc;
    int res = calc.sumComplex(o1, o2);
    cout << "The answer is " << calc.sumComplex(o1, o2) << endl;
    int resc = calc.trignometry(o1, o2);
    cout << "The answer is " << calc.trignometry(o1, o2) << endl;

    return 0;
}