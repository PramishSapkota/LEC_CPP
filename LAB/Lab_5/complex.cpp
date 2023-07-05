#include<iostream>
using namespace std;

class complex
{
 private:
    const int real=4;
    int imag;

  public:
 //  complex(){real=0;imag=0;}
   void get_img()
   {
      cout<<"Enter imaginary no. ";
      cin>>imag;
   }
   // void showData()
   // {
   //    cout<<real<<"+"<<imag<<"i\n";
   // }
   friend void showOutside(complex);
};
 void showOutside(complex c)
{  
   cout<<c.real<<"+"<<c.imag<<"i";
}
int main()
{
   complex c1;
   c1.get_img();
   // c1.real=8;
   //c1.showData();
   showOutside(c1);
 return 0;
}