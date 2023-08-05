#include<iostream>
using namespace std;

class Design1
{
 private:
    int code, qty, price;
 public:
    Design1(){
        code=0;
        qty=0;
        price=0;
    }
    Design1(int a,int b,int c){
        code=a;
        qty=b;
        price=c;
    }
    int throwCode(){
        return code;
    }
    int throwValue(){
        return qty*price;
    }


};

class Design2
{
    private:
    int code , value;
    public:
    Design2()
    {
        code = 0;
        value = 0;
    }
    Design2(Design1 D1)
    {
        code = D1.throwCode();
        value = D1.throwValue();
    }
    void showData()
    {
        cout<<"\n Code ="<<code;
        cout<<"\n Value ="<<value;
    }
};
int main()
{
    Design1 D1(33,7,300);
    Design2 D2;
    D2 = D1;
    D2.showData();
 return 0;

}