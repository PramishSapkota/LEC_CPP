#include<iostream>
#include<cmath>//for sqrt
using namespace std;

class Complex
{
 private:
    double real,imag;

 public:
    Complex()
    {
     cout<<"\nEnter real\t";
     cin>>real;
     cout<<"Enter imaginary\t";
     cin>>imag;
    }
    friend double magnitude(Complex);
};
double magnitude(Complex c)
{
    double mag;
    mag=sqrt((c.real)*(c.real)+(c.imag)*(c.imag));//(c.real)^2 doesnt work
    //and giving all these ^.5 doesnt work have to use sqrt
    return mag;
}
int main()
{   double m;
    Complex c1,c2;
    m=magnitude(c1);
    cout<<"\nMagnitude of 1st complex number="<<m;
    m=magnitude(c2);
    cout<<"\nMagnitude of 2nd complex number="<<m;
return 0;
}