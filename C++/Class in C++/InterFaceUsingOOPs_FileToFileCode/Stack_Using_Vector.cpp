#include<iostream>
#include<string>

#include<vector> 	//Used to Vector.push_back(),Vector.pop_back()..

using namespace std;

class Stack{
	private:
		vector<int> vect;
	public:
		void push(int val)
		{
			//Now using 'val' we want to push element to Vector using push_back()
			vect.push_back(val);
		}
		int top()
		{
			return vect[vect.size() - 1];
		}
		int pop()	//Pop only removes the element from arr/Vector. But it does not return anything. So we use top() to Show Value which is removed.
		{
			int lastval = top();
			vect.pop_back();
			return lastval;
		}
};

int main()
{
	//Push Operation	. (i.e) Push/appending element into Vector/List. 
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);	
	//Pop	Operation using pop object. (i.e) Pop/Removing Element From from Stack.
	cout<<"Pop 1 : "<<s.pop()<<endl;
	cout<<"Pop 2 : "<<s.pop()<<endl;
	//Top Operation means return Element is at the Last past position of an array/Stack.
	cout<<"Top 1 : "<<s.top()<<endl;
}




