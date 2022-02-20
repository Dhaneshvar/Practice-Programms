#include<iostream>
using namespace std;
int main()
{
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	//Access element of Array
	cout<<cars[0]<<endl;
	//Change the element of Array
	cars[2]= "Benz";
	//Loop Through an Array
	string car[4];
	for(int i=0;i<4;i++)
	{
		cin>>car[i];
	}
	for(int i=0;i<4;i++)
	{
		cout<<car[i]<<endl;
	}
}
