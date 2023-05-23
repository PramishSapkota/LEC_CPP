//program that adds,subs,..
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    char c;
   cout<<"Enter two numbers ";
   cin>>m,n;
   cout<<"Press + for Add,- for subtract,* for multiply,\for divide";
   cin>>c;
   switch (c){
   case '+':
        cout <<m<< " + " << n << " = " << m+n;
            break;
        case '-':
            cout <<m << " - " <<n << " = " << m- n;
            break;
        case '*':
            cout << m << " * " << n << " = " <<m* n;
            break;
        case '/':
            cout <<m << " / " << n << " = " << m/ n;
            break;
        default:
       
            cout << "Error!Use the correct symbol";
            break;
    }

    return 0;
}

