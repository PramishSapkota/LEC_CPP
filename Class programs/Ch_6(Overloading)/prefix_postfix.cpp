//prefix and postfix in same program
#include<iostream>
using namespace std;

class counter
{
 private:
    int count;
 public:
    counter(){
        cout<<"Enter a value:";
        cin>>count;
    }
    counter operator ++(){//for prefix
        cout<<"\n Prefix="<<++count;
        return *this;
    }
    counter operator ++(int){//for postfix
        cout<<"\n Postfix="<<count++;
        return *this;
    }
    int get(){
        return count;
    }
};

int main()
{
    counter c1,c2;
    
    //Postfix
    c1++;
    cout<<"\nAfter postfix in 1st="<<c1.get();
    
    //Prefix
    ++c2;
    cout<<"\n\n After prefix in 2nd="<<c2.get();
 return 0;
}