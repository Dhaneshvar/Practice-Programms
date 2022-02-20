#include<iostream>

using namespace std;

class bike{
	//Access Specifiers
	/*
	public - members are accessible from outside the class
	private - members cannot be accessed (or viewed) from outside the class. But can be accessed by member Function of same class
			 	or Friend Function
	protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
	*/
	//  By default, all members of a class are private if you don't specify an access specifier:
	int x;	//PRIVATE
	int y;	//PRIVATE
	public:
		int a;	//PUBLIC
	private:
		int b;	//PRIVATE
};

int main()
{
	bike obj;
	obj.a=23;
//	obj.x=12;obj.y=13;//Private
//	obj.b = 89;//Private
//	cout<<"Default Object x,y is "<<obj.x<<obj.y<<endl; // If you try to access a private member, an error occurs:error: x,y is private
	cout<<"Public Object a is "<<obj.a<<endl;
//	cout<<"Private Object b is "<<obj.b<<endl;	//Error private 
}
