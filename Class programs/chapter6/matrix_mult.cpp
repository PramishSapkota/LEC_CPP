#include<iostream>
using namespace std;
int i,j,k;
class matrix
{
 private:int a[3][3];
 public:
    matrix(){
        for ( i = 0; i <3; i++)
        {
            for (j = 0; j<3; j++)
            a[i][j]=0;
        }
    }
    void getdata()
    {   cout<<"\nEntering Data for matrix";
            for ( i = 0; i <3; i++)
        {
            for (j = 0; j<3; j++)
            { cout<<"\nEnter element"<<" "<<i<<j<<" ";
              cin>>a[i][j];
            }
        }
    }
    matrix operator *(matrix X)
    {
        matrix temp;
        for (i = 0; i<3 ; i++)
        {
            for (j= 0; j<3; i++)
            {
            
               for (k= 0;k<3;i++)
               {
                temp.a[i][j]=a[i][k]*X.a[k][j]+temp.a[i][j];
               }
               
            }
            
        }
      return temp;  
    }
    void showdata()
    {
        for ( i = 0; i <3; i++)
        {           cout<<"\n";
            for (j = 0; j<3; j++)
            {
            cout<<a[i][j]<<" ";
            
            }
        }
    }


};

int main()
{
    matrix A,B,C;
    A.getdata();
    B.getdata();
    //  C=A*B;
    C.showdata();
    return 0;
}