/*Program that contains base class which ask the user to enter a complex no. and
a derived class that adds complex no. of its own with base.Finally make a friend class
of derived and calculate difference of base complex no. and its own complex no.*/
#include<iostream>
using namespace std;

class difference;
class base
{
 //public:
    int real,img;

    public:
    //base() : real(0), img(0) {}//initialize like this or like below
    base(){
        real=0;
        img=0;
    };
    base(int x,int y){
        real=x;
        img=y;
    }
};
class derived:public base{
  public:
    derived(int p,int q):base(p,q){}

    void add(base b,derived d){
        base temp;
        temp.real=b.real+d.real;
        temp.img=b.img+d.img;
        cout<<"\nAddition of two Complex No.";
        cout<<temp.real<<"+"<<temp.img<<"i";

    }
    friend class difference;
};
class difference{
 public:
    void calculateDifference(base b,derived d){
        base temp;
        temp.real=b.real-d.real;
        temp.img=b.img-d.img;
        cout<<"\nDifference of two Complex No.";
        cout<<temp.real<<"+"<<temp.img<<"i";     
    }
};
int main()
{   
    int a,b; 
    cout<<"\n1st complex no. in base class";
    cout<<"\nEnter real part:";
    cin>>a;
    cout<<"Enter imaginary part:";
    cin>>b;
    base b1(a,b);
    
    cout<<"\n2nd complex no. in derived class";
    cout<<"\nEnter real part:";
    cin>>a;
    cout<<"Enter imaginary part:";
    cin>>b;
    derived d1(a,b);
    d1.add(b1,d1);
    
    difference obj;
    obj.calculateDifference(b1,d1);
return 0;
}