#include<iostream>
using namespace std;
class Account {
 public:
 Account (int length, int breadth){//making function name same as class name is constructor 
     cout<<length*breadth;     //constructor doesnt have return type
}
Account(int x,int y,int z){//multiple constructor can be made but each should take different no. of arguments
    cout<<"hello";
}
};
int main() {
 Account a1(10,20);//this calls the function receiving 2 arguments
 Account a2(10,20,30);//this calls the function receiving 3 arguments
  return 0;
}