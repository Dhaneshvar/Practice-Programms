#include<iostream>

using namespace std;

class KYC;
class Indian;

class SBI{
	private:
		int balance;
	public:
		SBI(int b){	// SBI Constructor
			balance=b;
		}
		friend void friendSeeing(SBI,KYC,Indian);	//Here we told that KYC, Indian is also a friend.
		//But KYC,Indian is not Created so we intialize/declare the class which we are going to be used later.
};

class KYC{
	private:
		int balance;
	public:
		KYC(int b){	// KYC Constructor
			balance=b;
		}
		friend void friendSeeing(SBI,KYC,Indian);	
};

class Indian{
	private:
		int balance;
	public:
		Indian(int b){	// Indian Constructor
			balance=b;
		}
		friend void friendSeeing(SBI,KYC,Indian);
};

//Friend Function Common for all 3 Bank
void friendSeeing(SBI s,KYC k,Indian i){ //Here s access sbi balance, k access Kyc balance, i access indian balance.
	if(s.balance>k.balance && s.balance>i.balance){
		cout<<"Balance in  SBI Bank is Greater and Amount is "<<s.balance<<endl;
	}
	else if(k.balance>s.balance && k.balance>i.balance){
		cout<<"Balance in  KYC Bank is Greater and Amount is "<<k.balance<<endl;
	}
	else{
		cout<<"Balance in Indian Bank is Greater and Amount is "<<i.balance<<endl;
	}
}

int main()
{
	//Creating Object For 3 Banks.
	//Object I
	cout<<"Object I : "<<endl;
	SBI s(50000);
	KYC k(30000);
	Indian i(45000);
	
	friendSeeing(s,k,i); //Passing Object s,k,i to friendSeeing Function. It print Which Bank Balance is Greater.
	
	//Object II
	cout<<"Object II : "<<endl;
	SBI sb(3000);
	KYC ky(6000);
	Indian in(5000);
	
	friendSeeing(sb,ky,in);
	
}
/*
Output:
Object I :
Balance in  SBI Bank is Greater and Amount is 50000
Object II
Balance in  KYC Bank is Greater and Amount is 6000
*/
