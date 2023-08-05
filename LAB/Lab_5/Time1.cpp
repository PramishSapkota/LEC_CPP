//same as time but use copy constructor to convert user
//given time in second into hr,min&sec
#include<iostream>
using namespace std;

class Time
{
 private:
    int hr,min,sec;

 public:
    Time()
    {
        hr=12;
        min=0;
        sec=0;
    }
    Time(int second):hr(0),min(0),sec(second){}
     
     
    Time(Time &t)//copy constructor which converts time in sec
    {              //into hr,min&sec
        hr = t.hr / 3600;          
        min = (t.min % 3600) / 60;  
        sec = t.sec % 60;
    }
    void showTime()
    {
        cout<<hr<<"hr"<<min<<"min"<<sec<<"sec";
    }
};

int main()
{
    Time t1;//default constructor
    Time t2(100);//parameterized constructor
    Time copiedTime=t2;
    cout<<"\nDefault Time";
    t1.showTime();
    cout<<"\nUser Time";
    t2.showTime();
    cout<<"\nCopied Time";
    copiedTime.showTime();
    
 return 0;
}