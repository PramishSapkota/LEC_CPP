#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int age;
    void functions(string names){
       cout<<"Your name is "<<names;
    }
};  
int main(){ 
    student student1;
     cout<<"Enter your name";
     cin>>student1.name;
     cout<<"Enter your RollNo.";
     cin>>student1.roll;
     cout<<"Enter your age";
     cin>>student1.age;
     student1.functions(student1.name);
 return 0;
 } 