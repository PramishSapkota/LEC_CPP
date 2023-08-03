#include<iostream>
using namespace std;

class Time
{
 private:
    int hrs,min;

 public:
    Time(int t){
        hrs=t/60;
        min=t%60;
    }
    void display(){
            cout<<hrs<<"hr"<<min<<"min";
    }

};

int main()
{
    int minute;
    cout<<"Enter minutes: ";
    cin>>minute;
    
    //Time t1(minute);//can also be called like this
   Time t1=minute;
    t1.display();
return 0;
}