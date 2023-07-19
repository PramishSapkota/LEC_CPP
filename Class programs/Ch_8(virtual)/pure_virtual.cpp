#include<iostream>
#include<cstdlib>
using namespace std;

class base
{
 public:
    virtual void area()=0;//pure virtual function
    void display(){
        cout<<"This is base class";
    }

};
class derived:public base{

};


int main()
{
    derived d1;
    base *s1=&d1;
    *s1->display();
return 0;
}