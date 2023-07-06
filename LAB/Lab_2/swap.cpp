#include<iostream>
using namespace std;
void swap(int &s, int &u){
    int t;
    t=s;
    s=u;
    u=t;
}
int getnum(){
    int a;
    cout<<"Enter a number";
    cin>>a;
    return a;
}
int main(){
    int x=getnum();
    int y=getnum();
    cout<<"Initial values\nX="<<x<<" Y="<<y;
    swap(x,y);
    cout<<"\nSwapped Values\nX="<<x<<" Y="<<y;
    return 0;
}