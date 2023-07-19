//pg 350
#include<iostream>
using namespace std;

class Point
{
 public:
    virtual void draw(){//if virtual isnt called o/p will be Point 
        cout<<"Point\n";
    }

};
class Line:public Point{
    public:
    void draw(){cout<<"Line\n";}
};
class Triangle:public Point{
    public:
    void draw(){cout<<"Triangle\n";}
};
class Polygon:public Point{
    public:
    void draw(){cout<<"Polygon\n";}
};
class Circle:public Point{
    public:
    void draw(){cout<<"Circle\n";}
};
int main()
{
    Point pt;
    Line ln;
    Triangle tr;
    Polygon py;
    Circle cr;
    Point *baseptr[]={&pt,&ln,&tr,&py,&cr};
    cout<<"Figure drawn by base pointer are:\n";
    for(int i=0;i<5;i++)
        baseptr[i]->draw();
 return 0;
}
/*key takeaway from this program is that virtual keyword le garda 
base class ko pointer le derived class ko function access garna sakxa*/