#include<iostream>
using namespace std;
int main()
{
    string subject[]={"OOP","TOC","ECT","EDC","DL","EM","MATH"};
    int marks[7];
    int i;
    for(i=0;i<7;i++)
    {
        cout<<"Enter the marks for "<<subject[i]<<"\n";
        cin>>marks[i];
    }
    int sum=0;
   
   for(i=0;i<7;i++)
   {
    sum=sum+marks[i];
   }
   cout<<"\nThe total marks is "<<sum<<" out of 700\n";
}      
