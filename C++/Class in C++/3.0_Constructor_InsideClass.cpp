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
