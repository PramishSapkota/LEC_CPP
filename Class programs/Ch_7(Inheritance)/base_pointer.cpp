#include<iostream>
using namespace std;
class parent
{
 public:
    virtual void print()//if vitrual isnt used o/p will be This is parent
    {
     cout<<"This is parent";
    }

};
class child:public parent{
 public:
    void print(){
    cout<<"This is child";
    }
};
int main()
{
 parent *bptr,p1;
 child c1;
 bptr=&c1;
 bptr->print();
//  p1.print();
return 0;
}