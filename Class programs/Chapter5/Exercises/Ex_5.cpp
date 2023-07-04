#include<iostream>
using namespace std;
class student{
   private:
    int roll;
    char name[20];
    char phone[10];
  public:
    void getdata();
    void showdata();
};

inline void student::getdata()
{
    cout<<"Enter the name of the student: ";
    cin>>name;
    cout<<"\nEnter the roll NO: ";
    cin>>roll;
    cout<<"\nEnter the phone number: ";
    cin>>phone;
}

inline void student::showdata()
{
    cout<<"\nNAME: "<<name;
    cout<<"\nROLL: "<<roll;
    cout<<"\nPHONE: "<<phone;
}

int main()
{
    student s1,s2;
    cout<<"Enter information of 1st student\n";
    s1.getdata();
    cout<<"Enter information of 2nd student\n";
    s2.getdata();
    cout<<"INFO OF THE 1ST STUDENT:\n";
    s1.showdata();
    cout<<"\n\nINFO OF THE 2ND STUDENT:\n";
    s2.showdata();
    return 0;
}