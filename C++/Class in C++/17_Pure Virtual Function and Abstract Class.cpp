#include <iostream>

using namespace std;
/***************************************    Pure Virtual Function and Abstract Class    *********************************************/
/*
1.Base classes that make the code resuable and Extendable.
2.Must have altleast one pure Virtual Function.
3.Cannot create object for Abstract classes.
4.Derived class must provide definition for the pure Virtual Function otherwise it also becomes an Abstract class.
*/
class Shape //Abstract class
{
  public:
        int length,breath;
        Shape(int l=0, int b=0)
        {
            length = l;
            breath = b;
        }
        /*
        virtual void print()        // Here we given virtual
        {
            cout<<"Base Class Shape ..";
        }       */
        //When body is not given and it is initialized with zero then it becomes pure virtual Function. And this class is know as ABSTRACT CLASS.
        virtual void print() = 0;   //PURE VIRTUAL FUNCTION
};
//The Child/Derived class inheriting the Shape Class should definitely should define "VOID PRINT() FUNCTION".
// Else if don't that class also becomes ABSTRACT Class and Object Cannot be created.

class Rectangle : public Shape
{
    public:
        Rectangle(int l, int b) :Shape(l,b) {}
        void print()
        {
            cout<<"Derived Class Rectangle "<<length*breath<<endl;
        }
        //if Void print() Function if not defined then,NOTE : error: cannot declare variable ‘r’ to be of abstract type ‘Rectangle’ Rectangle r(10,20);
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

/* Next Concept */
/*
What is polymorphism?
polymorphism means 'many forms'.

Types of polymorphism - compile time and run time polymorphism.

I) Compile time

(i)Operator Overloading
(ii)Function Overloading

II) Run time

(i)virtual function.
*/