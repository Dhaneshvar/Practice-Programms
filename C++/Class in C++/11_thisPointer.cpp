#include<iostream>
#include<string>

using namespace std;

class Message
{
	private:
		string from;
		string to;
	public:
		void setfrom(string from)	
/*	Here formal parameter 'from' and private variable is also 'from' both are same. It Take local formal parameter 'from' and give error.
		so we use  'this->' means m.from = from; current object->from of current private variable	*/
		{
			this->from = from;	
		}	
		string getfrom()
		{
			return from;	//or ->from
		}
};

int main()
{
	Message m;
	m.setfrom("XXX");
	cout<<m.getfrom();
}
