#include<iostream>
using namespace std;
class employee{
    char name[25];
    int salary;
 public:
    void getdata(){
        cout<<"\nEnter Name: ";
        cin>>name;
        cout<<"Enter Salary: ";
        cin>>salary;
    }
    void showdata(){
        cout<<"\nName: "<<name;
        cout<<"\nSalary: "<<salary;
    }
};
int main(){
    employee *eptr;
    employee e;
    eptr=&e;
    eptr->getdata();
    cout<<"\nAccessing Data Through pointer variable: ";
    eptr->showdata();
    return 0;
}