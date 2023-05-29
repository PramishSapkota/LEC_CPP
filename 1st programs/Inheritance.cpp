//main thing to grasp is derived class can access property of base class but vice versa isn't possible 
//more in cmt of line 18
#include <iostream>
using namespace std;
class Account{//base class
    public:
    float salary=60000;
};
class programmer: public Account{//derived class
    public:
    float bonus=5000;
};
int main(){
    programmer p1;
    Account a1;
    cout<<"Salary="<<p1.salary<<endl;
    cout<<"Salary="<<a1.salary<<"\n";//"\n"&endl does same job
    cout<<"Bonus="<<p1.bonus<<endl; //cout<<"Bonus="<<a1.bonus; doesnt work as account(base class) cant 
                             //access bonus property[which is property of programmer(derived class)]
    return 0;
}