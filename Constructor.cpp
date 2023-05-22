#include<iostream>
using namespace std;
class Account {
 public:
 Account (int length, int breadth){
     cout<<length*breadth;
}
Account(int x,int y,int z){
    cout<<"hello";
}

};
int main() {
 Account a1(10,20);
 Account a2(10,20,30);
  return 0;
}

