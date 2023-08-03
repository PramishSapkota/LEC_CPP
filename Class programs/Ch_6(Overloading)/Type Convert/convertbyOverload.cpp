//Basic to class type conversion
#include<iostream>
using namespace std;

class Time
{
    int hrs, min;
 public:
    void operator=(int);
 /*operator agadi return type narakda auta error auxa tara 
 program chalxa but online compiler ma chaldena*/
    void display();
};

void Time::operator=(int t)
{
    
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