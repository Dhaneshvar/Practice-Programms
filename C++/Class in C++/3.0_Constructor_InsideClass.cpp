#include<iostream>

using namespace std;

class bike{
	public: // Access Specifiers
		int cost;
		string bikename;
	/* A constructor in C++ is a special method that is automatically called when an object of a class is created.
	To create a constructor, use the same name as the class, followed by parentheses ():	
	When we call the constructor (by creating an object of the class), we pass parameters to the constructor, 
	which will set the value of the corresponding attributes to the same:*/
	/* Certain Rules for Constructor :
	1.It Should be Public.
	2.It does not contain any return type
	3.It will be called only once while creating an object.
	4.It may contain parameter which is called parameterized constructor. If not Parameter then Default Paramater.
	5.Constructor name should be same as class Name.
	6.Constructor Connot  be Inherited. cannot be used in child class.
	*/
	
		bike(int a,string b){ //class name with () is constructor
			cost = a;
			bikename = b;
		}
};

int main()
{
	bike features(10000,"Apache"); // Passing parameter to constructor
	cout<<"The cost of bike is "<<features.cost<<" The Name of bike is "<<features.bikename<<endl;
	
}
