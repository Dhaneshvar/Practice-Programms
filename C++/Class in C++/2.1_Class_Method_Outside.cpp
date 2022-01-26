#include<iostream>

using namespace std;

class bike{
	public: //Access Specifiers
		int speed(int maxspeed);
};

// Methods Outside class definition	
/* specifiying the name of the class, followed the 
	scope resolution :: operator, followed by the name of the function */
int bike::speed(int maxspeed)
{
	return maxspeed;
}

int main()
{
	bike features;
	cout<<"The Speed of Bike defined outside of Class is  "<<features.speed(100)<<endl;
}
	
