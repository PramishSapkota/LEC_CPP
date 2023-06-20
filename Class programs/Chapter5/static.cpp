#include<iostream>
using namespace std;
void display(){
	int static i=1;//static narakhda output 6 hunxa both times
	i=i+5;
	cout<<"\nValue of i is"<<i;
}
int main(){
	display();
	display();
    return 0;
}