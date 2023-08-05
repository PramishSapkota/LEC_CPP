#include<iostream>
using namespace std;
class sample{
    
    float num1,num2;         
 public:
    friend float mean(sample obj1);///try->float mean(sample obj1);
    void getdata(){                //it will show error as private variables cant be accessed like so
        float a,b;
        cout<<"Input 1st data: ";
        cin>>a;
        cout<<"Input 2nd data: ";
        cin>>b;
        num1=a;
        num2=b;
    }
};
float mean(sample s){
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}
int main()
{   
    sample s;
    s.getdata();
    cout<<"Mean="<<mean(s);
   return 0;
 }