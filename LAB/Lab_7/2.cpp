#include<iostream>
using namespace std;

class base//
{
 public:
    base(){
    cout<<"\nThis is base class constructor";
 }
    ~base(){
        cout<<"\nThis is base destructor";
    }
};
class derived:public base 
{ public:
        derived(){
    cout<<"\nThis is derived class constructor";
 }
    ~derived(){
        cout<<"\nThis is derived destructor";
    }
};

int main()
{
    base b1;
    derived d1,d2;
 return 0;
}