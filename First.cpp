#include<iostream>
using namespace std;
class room{
    public:
    int length;
    int breadth;
    int height;
    void calculateArea(int a,int b){
        cout<<"Area="<<a*b<<"\n";
    }
    void calculateVolume(int a,int b, int c){
        cout<<"Volume="<<a*b*c;
    }
};
int main(){
    room lec;
    cout<<"Enter length ";
    cin>>lec.length;
    cout<<"Enter breadth ";
    cin>>lec.breadth;
    cout<<"Enter height ";
    cin>>lec.height;
    lec.calculateArea(lec.length,lec.breadth);
    lec.calculateVolume(lec.length,lec.breadth,lec.height);
    return 0;
}