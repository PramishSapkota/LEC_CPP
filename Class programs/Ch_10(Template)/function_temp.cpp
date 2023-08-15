#include<iostream>
using namespace std;

template<class T1,class T2>
void testfn(T1 a,T2 b){
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int inum=5;
    float fnum=7.6;
    testfn(inum,fnum);
 //t1-> int type and a->inum similarly for t2
 //* equivalent to*/testfunc<int, float>(inum, fnum);
    testfn(20,"Hello World!!");
   //* equivalent to*/ testfn<int, string>(inum,"Hello World!!");
 return 0;
}