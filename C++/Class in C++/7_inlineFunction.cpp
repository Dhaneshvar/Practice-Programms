#include<iostream>

using namespace std;

//Normal Function
//int squareFunction(int x){
//	return x*x;
//}

//inline Function
inline int squareFunction(int x){
	return x*x;
}

int main()
{
	//Both Gives same result, there no Difference in result.
	
//	cout<<"Normal Function: square of X is "<<squareFunction(3)<<endl;

	cout<<"inline Function: square of X is "<<squareFunction(3)<<endl;
	/* In inline function, the whole function is placed in the calling statement, which reduce the traveling time
		execution time. It is an request to computer to place the function in calling statment. It works for simple
		programs */
}
