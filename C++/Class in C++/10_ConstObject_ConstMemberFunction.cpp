#include<iostream>

using namespace std;

class teacher
{
	private:
		int marks;
		int salary;
	public:
		teacher(int m,int s)
		{
			marks = m;
			salary = s;
		}
		void getdata() const		//Now Member Function is Constant. We can get data . But cannot set data.
		{
			//marks = 23;	// [Error] assignment of member 'teacher::marks' in read-only object
			cout<<"The marks is "<<marks<<endl;
			cout<<"The Salary is "<<salary<<endl;
		}
		
};
int main()
{
	const teacher t(98,35000);
/* 	Now Object 't' is constant and same should be in the calling function. If not wite const in function 
	it gives error. As object and Method should be Have const. if That const method calls another function
	then that function must also be const.		*/
	t.getdata();
}
