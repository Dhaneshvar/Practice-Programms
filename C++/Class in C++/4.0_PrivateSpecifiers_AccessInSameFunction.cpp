#include<iostream>
#include<string>

using namespace std;

class bankdetails{
	private:
		int balance=100;	//It is Not good way/Practice to Declare Variable to Private.
	public:
		bankdetails(int bamt){ // Assigning Initial value to private Variable throught Constructor 
			balance=bamt;		// CONSTRUCTOR MUST ALWAYS BE DECLARED IN PUBLIC ONLY.
		}
		int acc_Num;
		string acc_Holder;
		void print_balance(){
			cout<<"Your Current Balance is "<<balance<<endl;
		}
		void customerdetails(){
			cout<<"Account Holder is "<<acc_Holder<<". "<<"Acc Number is "<<acc_Num<<". "<<endl;
		}
		void credit(int creditamt){
			balance+=creditamt;
		}
		void debit(int debitamt){
			balance-=debitamt;
		}
		
};
int main(){
	//Initially 1000 in Balance
	bankdetails customer1(1000);
	//Initialization
	customer1.acc_Num=20098635;
	customer1.acc_Holder="StrangerXXX";
	
	customer1.print_balance();
	customer1.customerdetails();
	//Crediting amt 50000 + 1000 = 51000
	customer1.credit(50000);
	customer1.print_balance();
	customer1.customerdetails();
	//Debited amt 2000 form 51000 . Now 49000
	customer1.debit(2000);
	customer1.print_balance();
	customer1.customerdetails();
	
}
