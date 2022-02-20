#include <iostream>

using namespace std;

int sum(int a,int b) //same function name sum with integer parameter
{
	return a+b;
}
float sum(float c,float d) //same function name sum with float parameter
{
	return c+d;
}
double sum(double e, double f) ////same function name sum with double parameter
{
	return e+f;
}

int main(){
	//Function Overloading 
	//With function overloading, multiple functions can have the same name with different parameters:
	int  a=10,b=20;
	cout<<"We are calling sum function with 2 integer parameters : "<<sum(a,b)<<endl;
	float c=12.3,d=9.0;
	cout<<"We are calling sum function with 2 float parameters : "<<sum(c,d)<<endl;
	double e=12.443,f=22222.322;
	cout<<"We are calling sum function with 2 double parameters : "<<sum(e,f)<<endl;
}
