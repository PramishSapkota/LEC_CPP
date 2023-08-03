#include<iostream>
using namespace std;

class Time
{
    int hrs, min;
    public:
        operator=(int);
        void display();
};

Time::operator=(int t)
{
    cout<<"\nBasic to class type conversion\n";
    hrs= t/60;
    min= t%60;
};
void Time::display()
{
    cout<<hrs<<"hr"<<min<<"min";
    
};
int main()
{
    int duration;
    cout<<"\nEnter time duration in minutes: ";
    cin>>duration;

    Time t1;
    t1= duration;
    t1.display();
    return 0;
}