#include<iostream>//program to define function outside class
using namespace std;
class student
{
    private:
        int roll;
        char name[20];
        char phone[10];
    public:
        void getdata();//declaring function
        void showdata();
        
};
void student::getdata()//function defn
{
    cout<<"\nEnter Roll No: ";
    cin>>roll;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter phone number: ";
    cin>>phone;
}
void student::showdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Phone Number: "<<phone<<endl;
}

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"First student"<<endl;
    s1.showdata();
    cout<<"Second Student"<<endl;
    s2.showdata();
    return 0;

}