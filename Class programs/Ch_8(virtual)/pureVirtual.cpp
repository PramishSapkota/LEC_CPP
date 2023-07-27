#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class triangle : public Shape {
public:
    void area() {
        cout << "\nPure virtual function" << endl;
    }
    void show() {
        cout<<"\nThis is show";
    }
};

int main() {
    Shape* s;  // Create a pointer to the base class
    triangle t;

    s = &t;   // Point the base class pointer to the derived class object

    s->area(); // Call the area() function using the base class pointer (polymorphism)
    t.area();
    /*s->show(); doesnt work as show isnt defined on base class and the pointer mechanism 
  doent let us access derived class function although it has address of derived class obj*/
    return 0;
}
