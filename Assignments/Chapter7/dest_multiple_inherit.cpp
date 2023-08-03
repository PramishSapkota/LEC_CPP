/*Destructor in derived class
Page 323
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class base_one
{
 public:
    base_one(){
        cout<<"base_one class constructor\n";
    }
    ~base_one(){
        cout<<"base_one class destructor\n";
    }

};
class base_two{
 public:    
    base_two(){
        cout<<"base_two class constructor\n";
    }
    ~base_two(){
        cout<<"base_two class destructor\n";
    }
};
class derived:public base_two,public base_one
{
 public:
    derived(){
        cout<<"Derived class constructor\n";
    }
    ~derived(){
        cout<<"Derived class destructor\n";
    }
};
int main()
{
    derived d;
 return 0;
}