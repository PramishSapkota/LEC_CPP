#include<iostream>
using namespace std;

class student
{
 protected:
    char name[30];
    char roll[10];

 public:
    void getData(){
        cout<<"Enter Student's name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll;
    }
    void showData(){
        cout<<"\n\nName "<<name;
        cout<<"\nRoll "<<roll;
    }
    

};
class test:public student//
{
    protected: float p,c,m;
 public:
    void getdata(){
        student ::getData();
        cout<<"\nEnter marks in physics ";
        cin>>p;
        cout<<"Enter marks in chemistry ";
        cin>>c;
        cout<<"Enter marks in maths ";
        cin>>m;
    }
    void showdata()
    {
        student::showData();
        cout<<"\nMarks in Physics:"<<p;
        cout <<"\nMarks in chemistry:"<<c;
        cout <<"\nMarks in Maths:"<<m;
    }

};
class result:public test
{
    float total,x,y,z;
 public:
    result(){
        test::getdata();
        x=p;
        y=c;
        z=m;
        total=x+y+z;
    }
   void show(){
        
        test::showdata();
        cout<<"\n\nTotal="<<total;
   } 
};
int main()
{
    result r1;
    // r1.marks();
    r1.show();
return 0;
}