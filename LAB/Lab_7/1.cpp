#include<iostream>
using namespace std;

class Course
{
 public:
    void display(){
        cout<<"\nThis is base class";
    }
};
class Math:public Course{
    public:
    void display()
    {
        cout<<"\nThis is Math";
       // Course::display();//calling overidden function method 1
    }
};
class Science:public Course{
    public:
    void display(){
        cout<<"\nThis is Science";
    }
};
class Engineering:public Course{
 public:
    void display(){
        cout<<"\nThis is Engineering";
    }
};
class Physics:public Science{
 public:
    void display(){
        cout<<"\nThis is Physics inside Science";
    }
};
class Chemistry:public Science{
 public:
    void display(){
        cout<<"\nThis is Chemistry inside Science";
    }
};


int main()
{
    Engineering e;
    Physics p;
    Chemistry c;
    Math m;
    m.display();
    m.Course::display();//calling overidden function method 2
    //engineering
    cout<<"\n";
    e.display();
    e.Course::display();
    //physics
    cout<<"\n";
    p.display();
    p.Course::display();
    p.Science::display();
    //chemistry
    cout<<"\n";
    c.display();
    c.Course::display();
    c.Science::display();

return 0;
}