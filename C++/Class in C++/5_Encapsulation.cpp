#include<iostream>

using namespace std;
/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare 
class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide
public get and set methods.
*/

class bike{
	private:
		float profit; //	To access a private attribute, use public "get" and "set" methods:	
	public:
		//setter
		void setEarningProfit(float p){ //Using set Before EarningProfit function/method and modifying private attibutes/variables;
		
			profit = p;
		}	
		//getter
		int getEarningProfit(){	//Using get Before setEarningProfit function.
			return profit;		// return the Profit attributes/variable.
		}
};
int main()
{
	bike amt;
	float a = 92.3f;
	amt.setEarningProfit(a);
	cout<<"The Profit of Bike Company is "<<amt.getEarningProfit()<<endl;
}
