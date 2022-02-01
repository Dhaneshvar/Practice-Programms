#include<iostream>

using namespace std;

class Complex
{
	public:
		int real,imaginary;
		explicit Complex(int r=0,int i=0)		//EXPLICIT
		{
			real = r;
			imaginary = i;
		}
		Complex(const Complex &ref)
		{
			real = ref.real;
			imaginary = ref.imaginary;
		}
		void display()
		{
			cout<<real<<"+"<<imaginary<<"i"<<endl;
		}
};
/* Complex c=10; c is object this call its constructor. 10 is assigned to c Implicitily and behaving like object.
	So we use "EXPLICIT" in Constructor to avoid Unexpected Behaviour.	*/
void outside(Complex c)	
{
	cout<<c.real<<"+"<<c.imaginary<<"i"<<endl;
}
int main()
{
	Complex c(10,20);	//10+20i
	Complex c1 = c; 	// or Complex c1(c);  10+20i
	Complex c2;			//0+0i
	
	c.display();		//10+20i
	c1.display();		// or Complex c1(c);  10+20i
	c2.display();		//0+0i
//	outside(10);		//Outside Function this give error. so we use see next line
	outside(Complex(20));	//20+0i . we are converting 20 To Complex object EXPLICITILY Here.
}
