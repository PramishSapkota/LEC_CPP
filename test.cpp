#include<iostream>
using namespace std;

class Shape
{

public:
virtual void area()=0;

};
class triangle:public Shape{
    public:
    void area();
    void show()
    {
        cout<<"Hello";}
};
int main()
{//Shape *s;
 triangle t;
 t.show();
return 0;
}