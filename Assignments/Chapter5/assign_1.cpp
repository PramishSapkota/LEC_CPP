#include<iostream>
using namespace std;
class student{//defining class
    public://if not written it will be private i.e.default=private
    string name;//attributes of class
    int roll;
    int age;
    student()//default constructor
    {
     cout<<"\nEnter your name ";
     cin>>name;
     cout<<"Enter your RollNo.";
     cin>>roll;
     cout<<"Enter your age ";
     cin>>age;
    }
    student (int x )//parameterized constructor
    {
        cout<<"\nThis is parameterized constructor";
    }
    void functions(string names)//this is member (function)
    {                           
       cout<<"Name of 2nd student "<<names;
    }
    void rolls(int a);//declaring member function so it can access attributes
};
void student::rolls(int b)//void rolls(int b) doesnt work as it has to defined linking it to class
{
    cout<<"\nRoll of 1st student "<<roll;
}
void print()//non member function
{           //it cant access attributes
    cout<<"\nHello World";
}
int main(){ 
    student s0,s1;//objects
    s1.functions(s1.name);//calling function
    s0.rolls(s0.roll);
    print();
    student s3(6);
 return 0;
 } 