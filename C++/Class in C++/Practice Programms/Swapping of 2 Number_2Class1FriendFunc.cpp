//Swapping of 2 Number_2Class1FriendFunc
#include <iostream>
#include <conio.h>

using namespace std;

class B;
class A
{
    private:
        friend void swap(A &obj1,B &obj2);
        int num1;
    public:
        A(int a) : num1(a){}
        void display1()
        {
            cout<<"num1 is "<<num1<<"\n";
        }
};

class B
{
    private:
        friend void swap(A &obj1,B &obj2);
        int num2;
    public:
        B(int b) : num2(b){}
        void display2()
        {
            cout<<"num2 is "<<num2<<"\n";
        }
};

void swap(A &obj1, B &obj2)
{
    int temp = obj2.num2;
    // cout<<temp<<endl;
    obj2.num2 = obj1.num1;
    // cout<<obj2.num2<<endl;
    obj1.num1 = temp;
    // cout<<obj1.num1<<endl;
}

int main()
{
    // clrscr();
    A number1(4);
    B number2(8);
    cout<<"Before Swapping : "<<"\n";
    number1.display1();
    number2.display2();
    swap(number1,number2);
    cout<<"After Swapping : "<<"\n";
    number1.display1();
    number2.display2();
    getch();
    return 0;
}