#include<iostream>

using namespace std;

class family
{

	private:
		string bikename;	//Data Members/Attributes
	public:
		family(string b){
			bikename = b;
		}
		void familyAccessBike(){	//Member Function / Methods
			cout<<"The Family Members have right to Access the Private Bike Name : "<<bikename<<endl;
		}
		//Friend Function use "friend" before function name and pass the class name
		friend void friendAccessBike(family);
};

//Friend Function
void friendAccessBike(family str) 	//This is not Member of Class. So Not need scope resolution operator ::
{
	cout<<"Now my Friend have right to Access the Private Bike Name : "<<str.bikename<<endl;
}

int  main()
{
	family rights("Splender");
	//This is Normal Function calling
	rights.familyAccessBike();
	//For Friend Function
	friendAccessBike(rights); //Passing Class Object to Friend Function
}
