/*if a base class pointer calls derived class and then we delete object using
delete keyword then derived class destructor isn't called to call derived 
class's destructor we need to use virtual keyword in base class destructor
*/
#include<iostream>
using namespace std;

class base
{
 public:
    base(){
    cout<<"\nThis is base class constructor";
 }
    virtual ~base(){
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
    base *b1;
    // b1=new base;
    // delete b1;
    
    b1= new derived;
    delete b1;

 return 0;
}