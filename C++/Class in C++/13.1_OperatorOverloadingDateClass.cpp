#include<iostream>
using namespace std;
/*
Rules of Operator Overloading
1. Precedence and Associativity of operator cannot be changed.
2. Only existing operator can be overloaded.
3. Meaning of how the works should not be changed.
4. Return types should be compatible with built in types.
*/
class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		/*
		we want actual dob variable to be in 'dmy' as we get throught &reference (i.e)&dmy
		cin is also object as want actual so we pass cin and get throught &input reference.
		*/
		friend istream &operator>>(istream &input, Date &dmy);
		friend ostream &operator<<(ostream &output, Date &dmy);
	
};
istream &operator>>(istream &input, Date &dmy) 
{
	cout<<"Enter the Date :"<<endl;
	input>>dmy.day>>dmy.month>>dmy.year;
	return input;
}
ostream &operator<<(ostream &output, Date &dmy) 
{
	output<<"Your DOB is "<<endl;
	output<<dmy.day<<"-"<<dmy.month<<"-"<<dmy.year;
	return output;
}

int main()
{
	Date dob;
	cin >> dob;	//Getting Input Throught Dob object . operator(cin,dob)   or cin->operator(dob)
	/*
	this means operator>>(cin,dob). cin is not this->pointer. cin.operator>>(dob) 
	if dob means we don't need friend function as dob is object of Date clas
	But cin is not object of this class. so somethere object is acting as 'this->' now.	 
	if Date should come first means   dob<<cin; like should come.
	*/
	cout<<dob;	//operator(cout,dob)  or cout->opertator(dob)
}
