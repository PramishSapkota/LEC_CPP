/*Program to compare the magnitude of a complex 
number by overloading <, > and ==*/
#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
private:
  double real,img;  
public:
    Complex(){
        cout<<"\nEnter Real part:";
        cin>>real;
        cout<<"Enter Imaginary part:";
        cin>>img;
    }
    //You can omit const in this program
    //Kept it because it is a good practice
    double magnitude()const{
        double m=sqrt(real*real+img*img);
        return m;
    }

    // Overload < operator
    bool operator<(const Complex& other) const {
        return magnitude() < other.magnitude();
    }

    // Overload > operator
    bool operator>(const Complex& other) const {
        return magnitude() > other.magnitude();
    }

    // Overload == operator
    bool operator==(const Complex& other) const{
        return magnitude() == other.magnitude();
    }

};

int main()
{
    Complex c1,c2;
    if (c1>c2)
        cout<<"\n1st Number is greater";
    else if(c1<c2)
        cout<<"\n2nd Number is greater";
    else if(c1==c2)
        cout<<"\nGiven numbers are equal";
return 0;
}