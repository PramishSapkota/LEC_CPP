#include<iostream>
using namespace std;

int add(int i,int j){
  cout<<"Sum of 1st two numbers=";
  cout<<i+j<<endl;
  return 0;
}
int add(double i,double j){
    cout<<"Sum of second";
    cout<<i+j;
    return 0;
}
int main()
{
   int a,b;
   double m,n;
   cout<<"Enter two numbers ";
   cin>>a>>b;
   cout<<"Enter two numbers ";
   cin>>m>>n;
   add(a,b);
   add(m,n);
   return 0;
}
