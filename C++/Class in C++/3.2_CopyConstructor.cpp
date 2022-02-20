#include<iostream>

using namespace std;

class Rectangle{
	//By Default it is Private.
	int length;
	int width;
	
	public:
		Rectangle(int l,int w){
			length = l;
			width = w;
		}
		void print(){
			cout<<"Lenght is "<<length;
			cout<<" Width is "<<width;
		}
		Rectangle(const Rectangle &referenceVar){ // If no
			//We " Not use const " because referenceVar."lenght = 50;". Then length in previous object will also changed.
			//referenceVar.length = 50; // While Executing this line remove 'const' in Rectangle constructor.
			length = referenceVar.length;
			width = referenceVar.width;
		}
};

int main()
{
	Rectangle sides(20,30);
	cout<<"The Lenght1 and Width1 are "<<endl;
	sides.print();
	
	//Copy Constructor
	/* A copy constructor is a member function that initializes an object
		using another object of the same class */
	//Suppose we want to pass same (20,30) to another object then we use copy constructor.
	
	Rectangle sides_1(sides);  //Passing the Object of Previous instance/Before step as parameter for this Object.
	//We have to create the another constructor in the class with " REFERENCE VARIBLE TO GET THE OBJECT OF TYPE CLASS NAME ".
	cout<<"\nThe Lenght2 and Width2 are "<<endl;
	sides_1.print();
	
	
//	cout<<"\nThe Lenght1 and Width1 are "<<endl;
//	sides.print();
}
