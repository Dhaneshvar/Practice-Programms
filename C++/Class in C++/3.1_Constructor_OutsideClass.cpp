#include<iostream>

using namespace std;

class bike{
	public: // Access Specifiers
		int cost;
		string bikename;
		bike(int a,string b); //CONSTRUCTOR DECLARATION		
};
/*
First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, 
followed by the scope resolution :: operator,
followed by the name of the constructor (which is the same as the class): */
// Constructor definition outside the class
bike :: bike(int a,string b){
	cost = a;
	bikename = b;
}

int main()
{
	bike features(2000,"apache");
	bike features1(3000,"yamaha");
	cout<<"The cost of bike is "<<features.cost<<" The Name of bike is "<<features.bikename<<endl;	
	cout<<"The cost of bike is "<<features1.cost<<" The Name of bike is "<<features1.bikename<<endl;
}
