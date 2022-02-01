/*
Run->File is copied to RAM	->Text Segement -> For Quick Access
int b; // Global Varible
main()
{
	int a; //Local Variable
	static int b;	//Static Variable.
} -> Stack Segement

Global Variable, Static Variable -> Data Segment
Dynamic Memory is allocated in -> Heap/Free storage
*/
#include<iostream>
using namespace std;
class Room
{
	private:
		int length,breath;	
};

int main(){
	//If we want dynamic variable we use 'new' followed by datatype  it return an address that should be stored in Pointer.
	/***************Method I**********************/
	int *p1 = new int;
	/************ Method II - allocate memory for particular value 10 Passed in (10) normal parathesis**********************/
	int *p2 = new int(10);
	/*************** Method III ***********************************/
	int *p3;
	p3 = new int;
	/************** Method IV - Allocating memory for Arrays.*******/
	//After datatype use [] and write size of integer want to allocate memory. If want to store 20 integers then,
	int *p4 = new int[20];
	
	/************** Memory for Class and Objects ***********************/
	Room *p5 = new Room(); 		//For single Room class
	Room *p6 = new Room[10];	//For 10 Array
	
	/**************************************** Dereference **********************************************/
	cout<<*p2<<endl;
	 
	/****************** DeAllocating Memory - Delete ************************/
	
	/************** For Normal Pointer ***************************/
	delete p2;
	
	/**************** For Array Pointer ***************************/
	delete[] p4;		// IF we won't mension square Bracket it delete only for 1st integer are something and keep the rest without deleting
	
	
}
