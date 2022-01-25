#include<iostream>
using namespace std;
int main()
{
	string state="puducherry";
	
	string &anotherState = state; //Reference
	cout<<state<<endl; // puducherry
	cout<<anotherState<<endl;  // puducherry
	
	//Memory Address
	cout<<&state<<endl;  // Both pointing to same memory address
	cout<<&anotherState<<endl;
	
	//Pointer
	string *ptr = &state; 	
	cout<<state<<endl;  //puducherry
	cout<<&state<<endl; // address of puducherry
	cout<<ptr<<endl;    // address of pointing variable state
	cout<<*ptr<<endl; 	//dereference Operator . Pointing to state Puducherry
	
	//Modify the Pointer Value
	*ptr = "Kerala";  //Changing the value using Pointer.
	cout<<*ptr<<endl;
	cout<<state<<endl;   // Actual value at state is also changed.
}
