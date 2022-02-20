#include<iostream>

using namespace std;
/********************* Operator Overloading | Overloading Increment Operator ***********************/
/*		Operatot that cannot be overloaded	are :: , .* , . ,	?: .	*/
class Time
{
	private:
		int hours;
		int minutes;
	public:
		Time(int h,int m)	//Member Initializer List :hours(h),minutes(m);
		{
			hours = h;
			minutes = m;
		}	
		void displayTime()
		{
			cout<<hours<<":"<<minutes<<endl;
		}
		void addminutes()
		{
			minutes++;
			if(minutes >= 60)
			{
				hours++;
				minutes-=60;
			}
		}
		void operator++()	//use "operator" key word followed by '++ symbol'
		{
			minutes++;
			if(minutes >= 60)
			{
				hours++;
				minutes-=60;
			}
		}
		/*use "operator" key word followed by '++ symbol' now in Parameter we pass 'int' this is dummy for differentiate the 
			above function so than t1++ object can make use of this function. 	
				For PostIncreatement '++t1'		*/
		void operator++(int)	
		{
			minutes++;
			if(minutes >= 60)
			{
				hours++;
				minutes-=60;
			}
		}
		
};

int main()
{
	Time t1(6,30);
	//t1.addminutes();//Suppose we want use this as '++t1' then We want to use Operator overloading.
	++t1;
	t1.displayTime();
	
	//t1.addminutes(0); 0 is dummy argument.
	t1++;
	t1.displayTime();

}
