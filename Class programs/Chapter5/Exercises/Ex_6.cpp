#include<iostream>
#include<cstring>// FOR USING STRING FEATURES
using namespace std;

class product{
 private:
    int productid;
    char name[15];
    float cost;
 public:
    void setdata(int x,char y[],float z)
    { 
        productid=x;
        strcpy(name,y);
        cost=z;
    }
    void showdata()
    {
        cout<<"\nPRODUCT NAME: "<<name;
        cout<<"\nPRODUCT ID: "<<productid;
        cout<<"\nPRODUCT COST: "<<cost;
    }
};

int main()
{
    product p1,p2;
    p1.setdata(7787,"APPLE",999);
    p2.setdata(7665,"SAMSUNG",599);
    cout<<"\nINFO OF 1ST PRODUCT\n";
    p1.showdata();
    cout<<"\n\nINFOS OF 2ND PRODUCT\n";
    p2.showdata();
    return 0;
}