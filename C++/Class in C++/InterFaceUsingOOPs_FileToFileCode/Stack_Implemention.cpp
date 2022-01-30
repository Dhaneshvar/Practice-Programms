#include "stack.h"

void Stack::push(int a)	//this means that push came from stack header file which contain Stack Class. so used scope resolution operator.
{
	vect.push_back(a);	
}

int Stack::top()
{
	return vect[vect.size()-1];
}

int Stack::pop()
{
	int t = top();
	vect.pop_back();
	return t;
}
