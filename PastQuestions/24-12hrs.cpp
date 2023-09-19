/*Program that converts time in 24 hr format 
to 12 hr format and vice versa */
#include<iostream>
#include<cstring>
using namespace std;

class Time24
{
 private:
    int hour,min,sec; 

 public:    
    Time24(){
        hour=0;
        min=0;
        sec=0;
    }
    Time24(int hr,int mn,int sc){
        hour=hr;
        min=mn;
        sec=sc;
    }
    int return_min(){return min;}
    int return_hour(){return hour;}
    int return_sec(){return sec;}
    void display(){
        cout<<hour<<":"<<min<<":"<<sec;
    }

};
class Time12{
 private:
    int hour,min,sec;
    bool pm;
 public:
    Time12(){
        hour=0;
        min=0;
        sec=0;
    }
    Time12(int hr,int mn,int sc,char*p){
        hour=hr;
        min=mn;
        sec=sc;
        if (strcmp(strupr(p),"PM")==0)
            pm=1;
        else
            pm=0;
        
    }
    Time12(Time24 t){
        hour=t.return_hour()%12;
        min=t.return_min();
        sec=t.return_sec();
        pm=static_cast<bool>(t.return_hour()/12);
    }
    operator Time24(){
        int hr=pm?hour+12:hour;
        int mn=min;
        int sc=sec;
        return Time24(hr,mn,sc);
    }
    void display(){
        cout<<hour<<":"<<min<<":"<<sec;
        cout<<" "<<(pm?"PM":"AM");
    }
};

int main()
{
    Time24 t24(22,27,35);
    Time12 t12;
    t12=t24;
    cout<<"\nGiven 24 hours Time:";
    t24.display();
    cout<<"\nEquivalent 12 hours time:";
    t12.display();
    
    Time12 tt12(9,57,36,"PM");
    Time24 tt24;
    cout<<"\n\nGiven 12 hours Time:";
    tt12.display();
    tt24=tt12;
    cout<<"\nEquivalent 24 hours Time:";
    tt24.display();
    
 return 0;
}