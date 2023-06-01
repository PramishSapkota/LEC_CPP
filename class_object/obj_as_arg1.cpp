#include<iostream>//avg of 2 students marks
using namespace std;
class student{
    public:
    float marks;
    float avg;
    void input(){
        cout<<"Enter marks";
        cin>>marks;
    }
   
};
 void average(student s1,student s2){
        float avg=(s1.marks+s2.marks)/2;
        cout<<"Average="<<avg;
    }
int main(){
    student s1,s2,s3;
    s1.input();
    s2.input();
    average(s1,s2);
}