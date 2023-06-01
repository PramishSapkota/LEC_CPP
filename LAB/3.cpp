#include <iostream>
using namespace std;
namespace BEI
{
    char subject[20] = "Electronics";
    int room = 401;
    int students = 30;
    char college[10]="LEC";
    void printNoOfStudents()
    {
        cout << "No of students of BEI: " << students << endl;
    }
    void printSubject()
    {
        cout << "BEI subject : " << subject << endl;
    }
    void printRoom()
    {
        cout << "BEI room : " << room << endl;
    }
    void printCollege()
    {
        cout<<"BEI College : "<<college<<endl;
    }
}

namespace BCT
{
    char subject[30] = "OOP";
    int labRoom = 401;
    int students = 35;
    int room = 400;
    char college[10]="LEC";
    void printNoOfStudents()
    {
        cout << "No of students of BCT: " << students << endl;
    }
    void printSubject()
    {
        cout << "BCT subject : " << subject << endl;
    }
    void printRoom()
    {
        cout << "BCT room : " << room << endl;
    }
     void printLabRoom()
    {
        cout << "BCT labroom : " << labRoom << endl;
    }
    void printCollege()
    {
        cout<<"BCT College : "<<college<<endl;
    }
}

int main()
{
    using namespace BEI;
    using namespace BCT;
    printLabRoom();
    BEI::printRoom();
    BCT::printRoom();
    BEI::printSubject();
    BCT::printSubject();
    BEI::printNoOfStudents();
    BCT::printNoOfStudents();
    return 0;
}