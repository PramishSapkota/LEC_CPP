//constructor in multiple derived class
//Page 317

#include<iostream> 
using namespace std;
class base_one
{

public:
 base_one ()
 {

cout<<" base_one class constructor"<<endl;

 }
};

class base_two
{
public:

base_two ()
{
cout<<"base two class constructor"<<endl;
}
};

class derived: public base_two, public base_one
{

public:

derived()
{
cout<<"derived class constructor";
}
};
int main()
{
derived di;
}