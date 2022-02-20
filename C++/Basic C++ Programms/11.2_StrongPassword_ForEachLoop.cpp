#include<iostream>
#include<string>
#include<cctype> //For ispunct(),isdigit(),isalpha() similiar to C lang but there we use <ctype.h>

using namespace std;

bool isStrongPassword(string);

int main()
{
	string password;
	cout<<"Enter Strong Password including UpperCase,LowerCase,SpecialCharacter,Digit/Number,Lenght is Greater than 9 : ";
	getline(cin,password);
	
	if(isStrongPassword(password))
		cout<<"Your Password is Very Strong!!!";
	else
		cout<<"Your password is not Strong...";	
	return 0;
}
bool isStrongPassword(string str)
{
	bool containUpper=false,containSpecialChar=false,containDigit=false;
	/*********  For each Loop/range for loop. Iterate through every character in String one by one.   ********/
	for(auto c : str)	
	/*Here auto is Keyword, this is used whenever we don't the type of value we are getting. It Automatically
		 Consider type based on value it receive */
	{
		if(isupper(c))
			containUpper = true;
		if(ispunct(c))
			containSpecialChar = true;
		if(isdigit(c))
			containDigit = true;				
	}
	if(containUpper && containSpecialChar && containDigit && str.length()>9)
		return true;
	return false;	
}
