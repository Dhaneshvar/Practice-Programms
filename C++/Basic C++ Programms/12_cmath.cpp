#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int x=10,y=20;
	
	//Work without include<cmath>
	cout<<"The max of x and y is "<<max(x,y)<<"\n";
	cout<<"The min of x and y is "<<min(x,y)<<"\n";
	
	//Word with include <cmath>
	cout<<"The Square Root is "<<sqrt(25)<<"\n";
	cout<<"The Cube Root is "<<cbrt(27)<<"\n";
	cout<<"The log is "<<log(2)<<"\n"; 	
	cout<<"The Round of Value is "<<round(2.9)<<"\n";
	
	cout<<"The ceil returns the value of x rounded up to its nearest integer "<<ceil(2.1)<<"\n";
	cout<<"The Floor Returns the value of x rounded down to its nearest integer "<<floor(2.7)<<"\n";
	
	cout<<"The Modulus of x and y "<<fmod(x,y)<<"\n";
	cout<<"The Power of x and y "<<pow(x,y)<<"\n";
	
	
/*
Function	Description

abs(x)	Returns the absolute value of x
acos(x)	Returns the arccosine of x
asin(x)	Returns the arcsine of x
atan(x)	Returns the arctangent of x
cbrt(x)	Returns the cube root of x
ceil(x)	Returns the value of x rounded up to its nearest integer
cos(x)	Returns the cosine of x
cosh(x)	Returns the hyperbolic cosine of x
exp(x)	Returns the value of Ex
expm1(x)	Returns ex -1
fabs(x)	Returns the absolute value of a floating x
fdim(x, y)	Returns the positive difference between x and y
floor(x)	Returns the value of x rounded down to its nearest integer
hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow
fma(x, y, z)	Returns x*y+z without losing precision
fmax(x, y)	Returns the highest value of a floating x and y
fmin(x, y)	Returns the lowest value of a floating x and y
fmod(x, y)	Returns the floating point remainder of x/y
pow(x, y)	Returns the value of x to the power of y
sin(x)	Returns the sine of x (x is in radians)
sinh(x)	Returns the hyperbolic sine of a double value
tan(x)	Returns the tangent of an angle
tanh(x) Returns the hyperbolic tangent of a double value
*/
}
