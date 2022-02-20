#include <iostream>

using namespace std;
/*
if Base Class Pointer points to Object of Rectangle, Triangle but it Did not choose the correct function.
so use virtual in base class function.

Virtual Function is a member function of a base class that is expected to be redefined(overridden) in the derived class.
*/
class Shape
{
    public:
        int length,breath;
        Shape(int l=0, int b=0)
        {
            length = l;
            breath = b;
        }
        virtual void print()        // Here we given virtual
        {
            cout<<"Base Class Shape ..";
        }
};
class Rectangle : public Shape
{
    public:
        Rectangle(int l, int b) :Shape(l,b) {}
        void print()
        {
            cout<<"Derived Class Rectangle "<<length*breath<<endl;
        }
};

class Square : public Shape
{
    public:
    Square(int l):Shape(l){} // l is deleicated to Shape class constructor
    void print()
    {
        cout<<"Derived Class Square "<<length*length<<endl;
    }
};

int main()
{
    Shape *s;   // 's' is pointer
    
    Rectangle r(10,20);
    s=&r;       // 's' points to Rectangle Object 'r'. r.print() is static binding or early binding. It is Fast.
    s->print();   //dynamic binding or late binding. It Choose it At the  run time. It is Slow.
    
    Square sq(2);
    s = &sq;
    s->print();
    
    return 0;
}