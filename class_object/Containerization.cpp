#include<iostream>
using namespace std;
class a{
 public:
    int data;
    void getdata(){
        cout<<"Enter a data";
        cin>>data;
    }
    void showdata(){
        cout<<"Data is "<<data;
    }
};
class b{
 public:
    a a1;
    int b;
    void getdata(){
        a1.getdata();
        cout<<"Enter the value of b";
        cin>>b;
    }
    void showdata(){
        a1.showdata();
        cout<<"\nB is "<<b;
   
}
};
int main(){
    b b1;
    b1.getdata();
    b1.showdata();
    return 0;
}