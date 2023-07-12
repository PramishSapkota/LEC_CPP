// Friend Class
#include <iostream>
using namespace std;

class B;
class A
{
    char passA[20];

public:
    void getData()
    {
        cout << "\nEnter password of A : ";
        cin >> passA;
    }
    void showData(B);
    friend class B;
};
class B
{
    char passB[20];

public:
    void getData()
    {
        cout << "\nEnter password of B : ";
        cin >> passB;
    }
    void showData(A a)
    {
        cout << "\nA's password is : " << a.passA;
    }
    friend class A;
};
void A::showData(B b)
{
    cout << "\nB's password is : " << b.passB;
}
int main()
{
    A a;
    B b;
    a.getData();
    b.getData();
    a.showData(b);
    b.showData(a);
    return 0;
}