#include<iostream>
using namespace std;

class complex
{
 private:
    const int real=4;
    int imag;

  public:
 
   void get_img()
   {
      cout<<"Enter imaginary no. ";
      cin>>imag;
   }
  
    void showData();
};
 void complex::showData()
{  
   cout<<real<<"+"<<imag<<"i";
}
int main()
{
   complex c1;
   c1.get_img();
   // c1.real=8; doesnt work as our real variable has constant value
   //constant has to be given at start of program else error occurs
   c1.showData();
  
 return 0;
}