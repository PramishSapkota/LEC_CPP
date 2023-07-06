#include<iostream>
using namespace std;
namespace BEI{
    void display(){
        cout<<"\nElectronics";
    }
    void show()
    {
        cout<<"\nThis is namespace BEi";
        cout<<"\nWalls are white";
    }
}
namespace BCT
{
     void display(){
        cout<<"\nComputer";
    }
    void print()
    {
        cout<<"\nThis is namespace bCT";
        cout<<"\nWalls are blue";
    }
}
int main()
{   using namespace BEI;
    using namespace BCT;
    show();//Uncommon Function
    print();

    BCT::display();//Common function so we 
    BEI::display();//have to use name of namespace
}