#include<iostream>
using namespace std;

void function(float x,float y){
    cout<<"\nInside function";
    try{
        if (y==0)
        {
            throw y;
        }
        else
            cout<<"\nDivision="<<x/y;
    }
    catch(float i){
        throw;
    }
    cout<<"\nEnd of function";
}

int main()
{
    cout<<"\nInside Main";
    try{
        function(20,5);
        function(8,0);
    }
    catch(float j){
        cout<<"\nException caught.";
        cout<<"\nCan't divide by zero";
    }
    cout<<"\n\tProgram terminating";
 return 0;
}