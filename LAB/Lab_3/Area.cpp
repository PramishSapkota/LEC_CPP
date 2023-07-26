#include<iostream>
using namespace std;
const double PI=3.14159;

int calculateArea(int length=10){
    return 6*length*length;
}

double  calculateArea(double length,double breadth){
    return length*breadth;
}

double  calculateArea(double radius){
    return PI*radius*radius;
}

int main()
{
    int choice;
    cout<<"Enter 1 for cube\n";
    cout<<"Enter 2 for circle\n";
    cout<<"Enter 3 for rectangle\n";
    cout<<"Enter your choice(1-3)";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter length of cube:";
        int cubeLength;
        cin>>cubeLength;
        cout<<"Area of cube:"<<calculateArea(cubeLength)<<endl;
        break;

    case 2:
        double circleRadius;
        cout<<"Enter radius of circle:";
        cin>>circleRadius;
        cout<<"Area of"<<calculateArea(circleRadius)<<endl;
        break;

    case 3:
        cout<<"Enter length and breadth of rectangle:";
        double rectLength,rectBreadth;
        cin>>rectLength>>rectBreadth;
        cout<<"Area of"<<calculateArea(rectLength,rectBreadth)<<endl;
        break;

    default:
        cout<<"Invalid Choice";
    }
 return 0;
}