//constructor in derived class only
//Page 313
#include<iostream>
using namespace std;

class base
{
public:
    base()
    {
        //body of base class
    }

};
class derived:public base
{
    cout<<"default constrictor from derived class";
};

int main()
{
   derived d;
}