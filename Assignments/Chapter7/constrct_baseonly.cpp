//Constructor in base class only
//Page 312
#include<iostream>
using namespace std;

class base
{
    public:
        base()
         {
            cout<<"default constructor from base class"<<endl;
         }

};

class derived:public base
{
    //body of derived class.
};

int main()
{
derived d;
return 0;
}