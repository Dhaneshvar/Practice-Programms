#include<iostream>

using namespace std;
//Creating Class
class Myclass
{
	public:		// Access Specifier
	/* The public keyword is an access specifier, which specifies that members (attributes and methods) 
		of the class are accessible from outside the class.	*/
	//Attributes (i.e variables)
		int num;
		string name;
};
int main()
{
	// Creating Object. class name and then object Name.
	Myclass objname; 
	objname.num = 23;			// Accessing Class members by objectName.classattributes
	objname.name = "developer";
	cout<<"Number : "<<objname.num<<" "<<"String : "<<objname.name<<endl;
}
