#include <iostream>

using namespace std;

class Employee final        //Here we used final this means this is the "FINAL class" it cannot be inherited by derived/child class.
{
   public:
    int salary=100;
    void getsalary()
    {
        cout<<"salary is "<<salary<<endl;
    }
};
class workers : Employee
{
    public:
        int worksalary=50;
        void getworksalary()
        {
            cout<<"Work Salary is "<<worksalary<<endl;
        }
};
int main()
{
    Employee emp;
    emp.getsalary();
    
    workers wrk;
    wrk.getworksalary();
}
