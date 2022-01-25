#include <iostream>

using namespace std;

int main()
{
    //Largest amoung 3 Numbers using Terninary operator
    //It Reduce the line of Code.
    int a,b,c,large;
    cout<<"Enter the  3 Numbers"<<endl;
    cin>>a>>b>>c;
    large=a>b?(a>c?a:c):(b>c?b:c);
    cout<<"The Largest Number is "<<large;
}
/*
Enter the  3 Numbers
5 7 2
The Largest Number is 7
*/