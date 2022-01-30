#include<iostream>

using namespace std;
/**************************************** Function Template *********************************************/
/*
In function Overloading, we will call same name of function with different argument and different return 
type by Defining function for int,float,char return type. As we are writing more function for each one.
So To Avoid this we use 'FUNCTION TEMPLATE'.

In this we use commmon Template variabe in this datatype is stored, use that variable as datatype as we need
Function Template must be used outside the main function only.

*/
//template <class T>	or template <typename T> Anthing can be used
template <typename T>   //Where T is datatype of calling function parameter
T commonFuncAllDatatype(T a, T b, T c)
{
	// Maximum of 3 Variables
	T maxi = a;
	if(b>maxi)
		maxi=b;
	if(c>maxi)
		maxi=c;
	return maxi;
}
/************************** mixedDataType as Parameter *************************************/
template<class p1, class p2,class p3>  
void funcmixed(p1 a, p2 b, p3 c )
{
	cout<<"Integer a is "<<a<<endl;
	cout<<"Float b is "<<b<<endl;
	cout<<"Charcter c is "<<c<<endl;
}

int main()
{
	cout<<"One time written function is called with different parameter :"<<endl;
	cout<<"Integer as parameter and return type : "<<commonFuncAllDatatype(12,34,45)<<endl;
	cout<<"float as parameter and return type : "<<commonFuncAllDatatype(12.0,3.4,4.5)<<endl;
	cout<<"character as parameter and return type : "<<commonFuncAllDatatype('a','z','p')<<endl;
	
	//MixedDataType is passed as an Argument
	cout<<"\nMixed DataType is Passed an Parameter in the function :"<<endl;
	funcmixed(12,190.0,'z');
	
}
/*
auto FuncAllDatatype(auto a, auto b, auto c)
{
	// Maximum of 3 Variables
	auto maxi = a;
	if(b>maxi)
		maxi=b;
	if(c>maxi)
		maxi=c;
	return maxi;
}

//auto
	cout<<"Integer as parameter and return type : "<<FuncAllDatatype(12,34,45)<<endl;
	cout<<"float as parameter and return type : "<<FuncAllDatatype(12.0,3.4,4.5)<<endl;
	cout<<"character as parameter and return type : "<<FuncAllDatatype('a','z','p')<<endl;
*/
