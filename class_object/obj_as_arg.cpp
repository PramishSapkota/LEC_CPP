#include<iostream>//avg of 2 students marks
using namespace std;
class student{
    public:
    double marks;
    student(){
        cout<<"Enter marks";
        cin>>marks;
    }
    
};
void average(student s1,student s2){
        double avg=(s1.marks+s2.marks)/2;
        cout<<"Average="<<avg;
}
int main(){
    student s1,s2;
    average(s1,s2);
    return 0;
}