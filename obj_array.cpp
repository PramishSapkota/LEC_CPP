#include<iostream>
using namespace std;
class student{
    char name[20];
    int age;
 public:
    void info(){
        cout<<"\nEnter your name "<<endl;
        cin>>name;
        cout<<"\nEnter age ";
        cin>>age;
    }
    void show(){
        cout<<"\n\nName ="<<name;
        cout <<"\nAge="<<age;
    }
};
int main(){
    int i,n;
    cout<<"Enter no. of students";
    cin>>n;
    student s[n];
 for (i=0;i<n;i++)
    {s[i].info();}
    cout<<"------Displaying Information------";
 for (i=0;i<n;i++){
    s[i].show();
 }  
}