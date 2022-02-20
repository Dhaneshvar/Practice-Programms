#include <iostream>

using namespace std;

/* If global variable name and local variable name are Equal, then if want to access the global variable
    then use :: before GLOBAl variable  while printing it. */

int a=9; //GLOBAl variable because declared outside the Function

int main()
{
    int a = 23;
    cout<<a<<endl; //Print the 23.
    cout<<::a<<endl; // :: Scope Resolution Operator. Print the Global Variable 9.
}