#include<iostream>
using namespace std;

class Complex
{
 private:
    int real,imag;
    static int count;//static data member
 public:
    Complex()
    {
        cout<<"Enter real\t";
        cin>>real;
        cout<<"Enter imaginary\t";
        cin>>imag;
        count++;
    }
    static void displaycount()//static function
    {
        cout<<"Total no. of objects:"<<count;
    }
};
int Complex::count=0;//initializing static data member
//static data member has to be initialized outside class 
//and has to be initialized else code doesnt run
int main()
{
    Complex c1,c2,c3;
    //Complex::displaycount();
    c3.displaycount();
 return 0;
}