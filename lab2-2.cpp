#include <iostream>
#include <conio.h>
using namespace std;

class Complex;
class Real
{
private:
    float value;
public:
    Real(float v=0)
    {
        value=v;
    }
    void display()
    {
        cout<<value;
    }
    friend Complex;
};

class Complex
{
private:
    float real, image;
public:
    Complex(float a=0, float b=0)
    {
        real=a;
        image=b;
    }
    void display()
    {
        cout<<real<<" + j*"<<image;
    }
    Complex prod(Real &A)
//Define the production function of a Real and a Complex
    {
        Complex C;
        Complex B(5,4);
        C.real=A.value*B.real;
        C.image=A.value*B.image;
        return C;
    }
};
    main()
    {
        Real A(6);
        A.display();
        cout<<"*(";
         Complex B(5, 4);
        B.display();
        cout<<")= ";
        Complex C= B.prod(A);
        C.display();
        getch();
    }
