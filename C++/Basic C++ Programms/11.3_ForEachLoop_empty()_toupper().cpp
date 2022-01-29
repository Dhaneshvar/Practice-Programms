#include<iostream>
using namespace std;
int main()
{
	/*********		ACCESSING EVERY CHARATER IN STRING		************/
	string str = "Hello";
	for(auto c : str)
	{
		cout<<c<<" ";
	}
	
	/************* toupper() *******************/
	str[0] = toupper(str[0]); // or str[0] = 'H'
	cout<<"\nThe First Character str[0] using toupper() is  "<<str<<endl;

	/**************** stringVariable.empty() ************/
	string s = "";
	if(s.empty())
		cout<<"String str is empty "<<endl;
	else
		cout<<"String str is not empty  "<<endl;	
}	

