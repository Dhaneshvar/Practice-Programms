#include<iostream>
#include<string>

#include "stack.h"
 //This is header file in which class Stack is present. This is given in ".h" because to search from current and Then search in Standard Library Folder

using namespace std;

int main()
{
	//Push Operation	. (i.e) Push/appending element into Vector/List. 
	Stack s;		//Stack is in "stack.h"
	s.push(1);
	s.push(2);
	s.push(3);	
	//Pop	Operation using pop object. (i.e) Pop/Removing Element From from Stack.
	cout<<"Pop 1 : "<<s.pop()<<endl;
	cout<<"Pop 2 : "<<s.pop()<<endl;
	//Top Operation means return Element is at the Last past position of an array/Stack.
	cout<<"Top 1 : "<<s.top()<<endl;
}
