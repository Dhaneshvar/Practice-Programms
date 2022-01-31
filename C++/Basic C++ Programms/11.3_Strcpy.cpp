/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[1001]="Hello";
    char str2[1001]="World";
    char str3[1001];
    strcat(str1,str2);
    std::cout << str1 << std::endl;
    strcpy(str2,str1);
    std::cout<<str2<<std::endl;

    return 0;
}