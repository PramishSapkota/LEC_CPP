/*Ambiguity in Multiple Inheritance
Page 330
*/
#include<iostream>
using namespace std;

class student
{
protected:
char name[25];
int rollno,age;

public:
void getdata();
void display();

};

void student::getdata()
{
    cout<<"Enter name:\n";
    cin>>name;
    cout<<"Enter roll no\n";
    cin>>rollno;
    cout<<"Enter age\n";
    cin>>age;

}

void student::display()
{
    cout<<"\nName:"<<name<<endl;
    cout<<"\nRoll No:"<<rollno<<endl;
    cout<<"\nAge:"<<age<<endl;
}

class employee
{
    protected:
    char name[25];
    float salary;
    int age;
    public:
    void getdata();
    void display();
};

void employee::getdata()
{
    cout<<"\nEnter name";
    cin>>name;
    cout<<"\nEnter salary:";
    cin>>salary;
    cout<<"\nEnter age:";
    cin>>age;
}


void employee::display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Salary"<<salary<<endl;
    cout<<"Age"<<age<<endl;
}

class manager:public student,employee
{
    private:

    char qualification[10];

    public:

    void getdata();
    void display();
};

void manager::getdata()
{
    student::getdata();
    cout<<"Salary";
    cin>>salary;
}

void manager::display()
{
    student::display();
    cout<<"Salary:"<<salary;
}


int main()
{
manager m;
cout<<"Enter data on employee: \n";
m.getdata();
cout<<"Entered data on employee are: ";
m.display();
return 0;
}