//Square,Cube of A Number
#include <iostream>
#include <conio.h>

using namespace std;

class Important
{
    public:
    int cube,square;
    void squareset()
        {
            cout<<"Enter the Value for Squrare : ";
            cin>>square;
        }
        void cubeset()
        {
            cout<<"Enter value for Cube : ";
            cin>>cube;
            
        }
        
};

class Square : public Important
{
    public:
        void squarePrint()
        {
            cout<<"Square of Number "<<square<<" is "<<(square*square)<<"\n";
        }
};
class Cube : public Important
{
    public:
        void cubePrint()
        {
            cout<<"Cube of Number "<<cube<<" is "<<(cube*cube*cube)<<"\n";
        }
};
int main()
{
    Square sq;
    sq.squareset();
    sq.squarePrint();
    
    Cube cb;
    cb.cubeset();
    cb.cubePrint();

    return 0;
}