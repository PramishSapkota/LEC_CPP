#include<iostream>
using namespace std;

class animal
{
private:

public:
virtual void function(){};

};
class cow:public animal{};

int main()
{
 animal *anm;
 cow *c1,cw;
 cout<<"\nType of anm:"<<typeid(anm).name();
 cout<<"\nType of cw:"<<typeid(cw).name();
 cout<<"\nType of cw:"<<typeid(c1).name();
 cout<<"\n...";
 anm=&cw;
 cout<<"\nType of anm:"<<typeid(*anm).name();
 cout<<"\nType of cw:"<<typeid(cw).name(); 

return 0;
}