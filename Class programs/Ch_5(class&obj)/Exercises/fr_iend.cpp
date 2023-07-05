#include<iostream>
using namespace std;
class friends{
    public:
    char name[32];
    char phone[10];
    char address[30];
    friends(){
        cout<<"\nEnter your name ";
        cin>>name;
        cout<<"Enter your phone ";
        cin>>phone;
        cout<<"Enter your address "; 
        cin>>address;
    }
    void display(){
        cout<<"\nName="<<name;
        cout<<"\nPhone="<<phone;
        cout<<"\nAddress="<<address;
    }

};
int main(){
    friends ram,hari,shyam;
    ram.display();
    hari.display();
    shyam.display();
    return 0;
}