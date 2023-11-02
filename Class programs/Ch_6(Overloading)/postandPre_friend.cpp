/*overloading ++ operator postfix operation
without using friend function*/
#include<iostream>
using namespace std;

class Counter
{
 private:
    int count;

 public:
    Counter(){
        cout<<"Enter a number:";
        cin>>count;
    }
    //int throwCount(){return count;}
    friend Counter operator ++(Counter &c);//prefix
    friend Counter operator ++(Counter &c,int n);//postfix
};
Counter operator ++ (Counter &c,int){
    //int m=c.throwCount();
    cout<<"\n\nPostfixing value="<<c.count++;
    cout<<"\nValue after posfix in 1st:"<<c.count;
    return c;
    
}
Counter operator++(Counter &c){
    //int m=c.throwCount();
    cout<<"\n\nPrefixing Value="<<++c.count;
    cout<<"\nValue after prefix in 2nd:"<<c.count;
    return c;
}

int main()
{
    Counter c1,c2;
    c1++;
    ++c2;
 return 0;
}