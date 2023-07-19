#include<iostream>
using namespace std;
int main()
{
    int r;
    double const pi=3.14;
    const int a;
    cout<<"Enter radius of circle:";
    cin>>r;
    //pi=3; //generates error as its value cant be changed
    cout<<"Area="<<pi*r*r<<" unit^2";
    cout<<a;

 return 0;
}