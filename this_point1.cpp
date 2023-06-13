#include<iostream>
using namespace std;
class mobile{
    int m=10;
 public:
    void display(){
        cout<<"\n\nValue of m is"<<m;
        cout<<"\nValue of ?is"<<this->m;
        cout<<"\nAddress of current object"<<this;
    }
};
int main(){
    mobile m1,m2;
    m1.display();
    m2.display();
    return 0;
}