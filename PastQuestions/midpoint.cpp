/*Wap name a class called midpoint to find mid-point between two points
by returning object from member function using this pointer.*/
#include<iostream>
using namespace std;

class Midpoint
{
private:
    float x,y;
public:
    void getData(){
        cout<<"\nEnter value of x:";
        cin>>x;
        cout<<"Enter value of y:";
        cin>>y;
    }
    void showData(){
        cout<<"\nX="<<x<<"\tY="<<y;
    
    }
    Midpoint mid(Midpoint m){
        Midpoint temp;
        temp.x=(x+m.x)/2;
        temp.y=(y+m.y)/2;
        *this=temp;
        return *this;
    }

};

int main()
{
    Midpoint m1,m2,m3;
    m1.getData();
    m2.getData();
    m3=m1.mid(m2);
    m3.showData();
return 0;
}