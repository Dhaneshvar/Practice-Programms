#include<iostream>
#include<iomanip> // For setprecision()

using namespace std;

int main(){
	bool a=true;   //Boolean
	 //Integers
	int b=12;
	short int c=1324;
	long d = 12342;
	long long e = 57237289;
	//Float 
	cout<<setprecision(12);  // Set the Precision for Float values defined in <iomanip>
	float f = 329784.123f;
	double g = 1342.1342;
	long double h = 111.222233333444444454;
	//Character
	char i = 'a';
	wchar_t j = L'b';
	wcout<<j<<endl;  // wildcharacterout
	
//	char16_t ka = 'j';
//	char32_t la = 'k';

	cout<<a<<endl<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl<<f<<" "<<g<<" "<<h<<" "<<endl<<i<<" "<<j<<endl;
	cout<<sizeof(a)<<endl<<sizeof(b)<<" "<<sizeof(c)<<" "<<sizeof(d)<<" "<<sizeof(e)<<" "<<endl<<sizeof(f)<<" "<<sizeof(g)<<" "<<sizeof(h)<<" "<<endl<<sizeof(i)<<" "<<sizeof(j);
	
}
