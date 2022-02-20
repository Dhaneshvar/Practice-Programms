#include <iostream>
#include <string>
using namespace std;

class Principal
{
    private:
        int sign;
        int fee;
    protected:
        string address;
    public:
        Principal(int s, int f, string a)
        {
            sign = s;
            fee = f;
            address = a;
        }
        void display()
        {
            cout<<"Sign "<<sign<<endl;
            cout<<"fee "<<fee<<endl;
            cout<<"address "<<address<<endl;
        }
};

class Teachers : public Principal
{
    public:
        void print()
        {
            cout<<address<<endl;    //Accessing protected memeber
        }
};

int main()
{
    Principal p(1,1000,"Muthialpet");
    p.display();
    Teachers t;
    t.print();
}