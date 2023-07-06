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
    Time(int second)
    {
        hr = second / 3600;          
        min = (second % 3600) / 60;  
        sec = second % 60;
    }
    Time(Time &t)
    {
        hr=t.hr;
        min=t.min;
        sec=t.sec;
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