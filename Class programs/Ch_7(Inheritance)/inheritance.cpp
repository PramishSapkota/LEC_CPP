#include<iostream>
using namespace std;

class Parent
{
 protected:
    int id_protected;

};
class child:public Parent
{
    public:
    void setId(int id)
    {
         
    id_protected = id;
         
    }
    void showdata(){
        cout<<id_protected;
    }
};
int main()
{
    Parent p1;
    //p1.id_protected=45; //doesnt work as protected attributes cant be 
    //accesed by its own obj but by obj of derived class only
    child c1;
    c1.setId(2);
    c1.showdata();
 return 0;
}