#include<iostream>//return object
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
 };
void display(friends a){
        cout<<"\nName="<<a.name;
        cout<<"\nPhone="<<a.phone;
        cout<<"\nAddress="<<a.address;
    }
int main(){
    friends ram,hari,shyam;
    display(ram);
    display(hari);
    display(shyam);
    return 0;
}