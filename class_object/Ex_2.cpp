#include <iostream>//practical example of ex_1
using namespace std;
class iteminfo{
    private:
    int itemid;
    float cost;
    public:
    void setdata(int it,float cst){
        itemid=it;
        cost=cst;
    }
    void showdata(){
        cout<<"\nITEM ID="<<itemid;
        cout<<"\nCOST="<<cost<<endl;

    }
};
int main(){
    iteminfo s1,s2;
    s1.setdata(50,35.5);
    s2.setdata(555,135.25);
    cout<<"Information on 1st item";
    s1.showdata();
    cout<<"\nInformation on 2nd item";
    s2.showdata();
    return 0;
}
