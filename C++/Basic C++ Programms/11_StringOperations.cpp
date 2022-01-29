#include<iostream>

#include<string>

using namespace std;

int main(){
	/***************String Initialization****************/
	
	//Method I
	string salpha1 = "c++";
	cout<<"The string salpha1 is "<<salpha1<<endl;
	//Method II
	string salpha2("Python");
	cout<<"The string salpha2 is "<<salpha2<<endl;
	//Method III
	string salpha3(salpha2);		// Direct Initialization
	cout<<"This Direct Initialization. The string salpha3 is "<<salpha3<<endl;
	//Method IV
	string salpha4 = salpha2; 	//Copy Initialization
	cout<<"This is Copy Initialization. The string salpha4 is "<<salpha4<<endl;
	//Method V
	string salpha5(6,'k');	// Here 'K' print 6 times
	cout<<"The string salpha5 is printed 6 times :  "<<salpha5<<endl;
	
	/*************************Printing Strings*************************/
	string str1="Hello";
	string str2="Guys";
	cout<<"Printing Two String : "<<str1<<str2<<endl;
	
	/************************String Concatenation********************/
	cout<<"Adding/Concatenation of str1+str2 : "<<str1+str2<<endl;
	/* suppose "happy"+" "+"birthday" gives error because both "happy" is string literals with " "is not Possible.
	It can be done like "happy " happy with space after it. */
	//To concatenate with spaces, then
	cout<<"Strings with space is "<<str1+" "+str2<<endl;
	
	/**************************String Append************************/
	string str3 = str1.append(str2);//Appending str2 to str1.
	cout<<"Appending Str2 to Str1 : "<<str3<<endl;
	
	/*******************************Adding two Number in String***************************/
	string str4="12",str5="08";
	cout<<"Adding Two Number : "<<str4+str5<<endl;
	
	/***************************   Finding String Lenght using str.length() *************/
	string str_1 = "Basket ball is very nice";
	cout<<"Lenght of str_1 is :"<<str_1.length()<<endl;
	
	/*****************************  Finding string length using str.size()  ************/
	string str_2 = "Basket ball is very Nice";
	cout<<"Lenght of str_2 is : "<<str_2.size()<<endl;
	
	/********************************* Accessing String ***********************************/
	cout<<"The first Char in str_1 is : "<<str_1[0]<<endl;	
	
	/********************************  Changing String Character   ***************************/
	/*To change the value of a specific character in a string, refer to the index number, 
		and use single quotes */
	str_2[0]='P';
	cout<<"Changing The first charcter in str_2 : "<<str_2<<endl;
	
	str_2[1]='abck';//Only character 'k' is taken 
	cout<<"Changing the second character in str_2 : "<<str_2<<endl;	// 'a' is replace by the last character 'k'

	/*******************************  User Input in String **************************************/
	string stateName;
	cout<<"Enter any state Name : ";
	cin>>stateName; 	
	/*'cin' considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display
		 a single word (even if you type many words): */
	cout<<"The Stdate is "<<stateName<<endl;	
	
	/****************************     getline() function to read a line of text.    **************/
	/*It takes cin as the first parameter, and the string variable as second.
		getline(cin,stringvariable); */
	string sentences;
	cout<<"Enter any sentences with space inbetween Them : ";
	cin>>sentences;
	getline(cin,sentences);
	cout<<"The Entered Sentences is "<<sentences<<endl;
	
}
