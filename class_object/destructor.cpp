#include<iostream>
using namespace std;
class test
{
 public:
    test(){
        cout<<"Constructor";
    }
    ~test(){
        cout<<"\nDestructor";
    }
};
int main(){
    test t;
    cout<<"\nMain function terminated";
    return 0;
}
