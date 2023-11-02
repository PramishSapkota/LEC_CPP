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
    int throwCount(){return count;}
};
void operator ++ (Counter &c,int){
    int m=c.throwCount();
    cout<<"\n\nPostfixing value="<<m++;
    cout<<"\nValue after posfix in 1st:"<<m;
    
}
void operator++(Counter &c){
    int m=c.throwCount();
    cout<<"\n\nPrefixing Value="<<++m;
    cout<<"\nValue after prefix in 2nd:"<<m;
}

int main()
{
    Counter c1,c2;
    c1++;
    ++c2;
 return 0;
}