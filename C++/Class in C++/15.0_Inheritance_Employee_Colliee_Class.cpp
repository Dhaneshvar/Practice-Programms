#include<iostream>

using namespace std;

/***************************************** Inheritance ***********************************************************/
/*  is a relationship
    BaseClass/SuperClass
    DerivedClass/SubClass
*/
class Employee
{
    private:
        int Id;
        string name;
        double salary;
    public:
        Employee(int i,string n, double s=0)
        {
            Id = i;
            name = n;
            salary = s;
        }
        void print()
        {
            cout<<"Id is "<<Id<<endl;
            cout<<"Name is "<<name<<endl;
            cout<<"salary is "<<salary<<endl;
        }
        void setname(int n)
        {
            name = n;
        }
        void setsalary(double s)
        {
            salary = s;
        }
        void getname()
        {
            cout<<"Name"<<name<<endl;
        }
        void getsalary()
        {
            cout<<"Salary"<<salary<<endl;
        }
        
};

class CollieWorkers : public Employee
{
    private:
        int workHours;
    public:
        CollieWorkers(int id, string name, double wrHr)
        :Employee(id,name)  //Initialize only id and name by invoking Employee Class Constructor
        {
            workHours = wrHr;   //This wrHr Goes to workHours
            setsalary();        //After setting to workHours, then setsalary function()  first check this in CollieWorkers class if not avaible then it check the Base class.
                                //Now setsalary is present in this class so it invokes below function
        }
        void setsalary()
        {
            Employee::setsalary(workHours*100); //Employee:: means setsalary of Employee class is called with parameter as workHours*100.
        }
        void print()
        {
            Employee::print();
            cout<<"workHours is "<<workHours;
        }
};
int main()
{
    Employee i(1,"Dh",500);
    i.print();
    
    CollieWorkers c(2,"Murugan",83); // 83 represent 83 minutes he worked
    c.print();
}
/*
Id is 1
Name is Dh
salary is 500
Id is 2
Name is Murugan
salary is 8300
workHours is 83
*/