/*If We have DataMemebers/Attributes as an Object of Another Class then, We initilize the value for that using
Constructor of that object. This is done by Member Initializer List. 
(i.e) :objectname(parameter)		*/
#include<iostream>
#include<string>

using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int d=9,int m=6,int y=2005)
		{
			day = d;
			month = m;
			year = y;
		}
		string getDate()
		{
			return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
			/*std::to_string is a quite new addition to C++. Are you using an up to date compiler?
			 	You might have to explicitly enable C++11 mode in the compiler. 
					If you are using GCC you can do that by passing the flag -std=c++0x.	*/
		}
};

class Student
{
    private:
        string name;        //string is class and name is object it is calling its Constructor
        Date dob;           //Date is Our Defined Class and dob is object of class and It has Constructor
    public:
        Student(string n,int d,int m, int y)
        :name(n),dob(d,m,y)     //This is calling Its Constructor and initilizing the value.
        //This is knowns as Member Initializer List.
        {
            
        }
        string getdob()
        {
            return dob.getDate();
        }
};

int main()
{
// 	Date dob(29,12,2002);
// 	cout<<"Your DOB is "<<dob.getDate()<<endl;
	Student s1("StudentName",29,10,2002);
	cout<<s1.getdob()<<endl;
}
