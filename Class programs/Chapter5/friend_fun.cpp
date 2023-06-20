#include<iostream>
using namespace std;
class sample{
    friend float mean(sample obj1);///try->*friend*/ float mean(sample obj1);
    float num1,num2;        //it will show error as private variables cant be accessed like so 
    public:
    void getdata(){
        float a,b;
        cout<<"Input data "<<endl;
        cin>>a>>b;
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