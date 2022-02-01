#include<iostream>
#include<string>
using namespace std;

class Result
{
	private:
		int lang,eng,maths,science,social;
		string name;
	public:
		friend istream &operator>>(istream &in,Result &student)
		{
			cout<<"Enter the name of Student : ";
			in>>student.name;
			cout<<"\nEnter the marks For Language,English,Maths,Science,Social : ";
			in>>student.lang>>student.eng>>student.maths>>student.science>>student.social;
			return in;
		}
		friend ostream &operator<<(ostream &out, Result &student)
		{
			//out<<student.name<<student.lang<<student.eng<<student.maths<<student.science<<student.social;
			out<<student.name;
			return out;
		}
		bool operator>(Result s)  //Student2 is passed to s and student1 is this->pointer
		{
			if (this->lang+this->eng+this->maths+this->science+this->social > s.lang+s.eng+s.maths+s.science+s.social)
			{
				return true;
			}
			return false;
		}
			
};
int main()
{
	Result student1,student2;
	cin>>student1;
	cin>>student2;
	if(student1>student2)	//student1.operator>(student2)
	{
		cout<<student1;
		cout<<" marks is Greater"<<endl;
	}
	else
	{
		cout<<student2;
		cout<<" marks is Greater"<<endl;
	}
}
