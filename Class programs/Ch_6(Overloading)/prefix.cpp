#include<iostream>//overloading ++prefix
using namespace std;

class counter
{
 private:
     int count;
 public:
    counter(){count=0;}
    int ret_cou(){return count;}
    void operator++(){
        count++;}
};

int main()
{
    counter c1,c2;
    cout<<"\nc1="<<c1.ret_cou();
    cout<<"\nc1="<<c2.ret_cou();
    ++c1;
    ++c2;
    ++c2;
    cout<<"\nc1="<<c1.ret_cou();
    cout<<"\nc1="<<c2.ret_cou();
return 0;
}