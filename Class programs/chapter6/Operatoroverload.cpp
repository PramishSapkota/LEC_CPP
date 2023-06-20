#include<iostream>
using namespace std;
class num{
    int a,b,c;
  public:
    num(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void operator-(){
        a=-a;
        b=-b;
        c=-c;
    
    }
    void show(){
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
        cout<<"\nc="<<c;
    }
};
int main(){
    num obj(1,-2,3);
    -obj;
    obj.show();
    return 0;
}