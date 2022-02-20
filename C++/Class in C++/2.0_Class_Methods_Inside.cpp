#include<iostream>

using namespace std;

/*
There are two ways to define functions that belongs to a class:

	*	Inside class definition
	*	Outside class definition
*/
class bike{
	public: //Access Specifiers
		// Class Methods = Functions
		// Function Inside class definition 
		int speed(int maxspeed){ //Here maxspeed is the Parameter for function speed.
			return maxspeed;
		}
};
int main()
{
	bike features; // Here bike is class and features is Object;
	cout<<"The Speed of Bike defined Inside the Class bike is "<<features.speed(100)<<endl;
}
