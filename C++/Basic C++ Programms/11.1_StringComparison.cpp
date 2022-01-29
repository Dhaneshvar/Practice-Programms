#include<iostream>
#include<string>
using  namespace std;
int main()
{
	/*************************	String Comparison	***********************************/
	string s1 = "Hello";
	string s2("Hello  World");
	string s3 = "Hen";
	//Here we can compare string1 == string2,string1>string2 etc..
	//It compares Character by character with ASCII which ascii value is greater then that charcter is greater.
	if(s1<s3)
	{
		cout<<s1<<" is less than "<<s3;
	}	
	return 0;
}

