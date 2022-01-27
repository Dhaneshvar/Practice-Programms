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
		//Creating Destructor. It is Opposite of Constructor
		~Rectangle(){
			cout<<"\nDestructor : Object  Ended!!"<<endl;
		}
};
int main()
{

	/* Destructor - Special Member Function. It is used to Delete/Free up the space by 
		deleting the object when it reaches out of scope */
	/*Certain Rules in Destructor
	1.Destructor name should be same as class name prefixed with tilde(~) Operator.
	2.It should be public.
	3.It does not contains any arguments.
	4.It does not contains return type.
	5.It will be called automatically when the object goes out of the scope.
	*/
	if (true){
		Rectangle sides(20,30);
		cout<<"The Lenght1 and Width1 are "<<endl;
		sides.print();
	} //This is out of scope for 'sides' object. After this Destructor is Automatically called.
	
	cout<<"I am going to Bed"<<endl;
}
