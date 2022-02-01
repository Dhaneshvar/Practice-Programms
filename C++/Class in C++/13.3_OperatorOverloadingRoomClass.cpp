#include<iostream>

using namespace std;

class Room
{
	private:
		int length;
		int breath;
	public:
		friend istream &operator>>(istream &input, Room &i);
		friend ostream &operator<<(ostream &output, Room &o);
};
istream &operator>>(istream &input, Room &i)	//return is istream class reference.	
{
	cout<<"Enter Lenght and Breath : "<<endl;
	input>>i.length>>i.breath;
	return input;
}
ostream &operator<<(ostream &output, Room &o)	//ostream & it is used because in actual cin so we also use.
{
	output<<"Length and Breath is "<<o.length<<" "<<o.breath<<". Area is "<<o.length*o.breath<<endl;
	
	return output;
	
}
int main()
{
	Room r;
	cin>>r;
	cout<<r;
}
