#include<vector>

class Stack
{

	private:
		std::vector<int> vect;
		/*vector should be given in scope resolution operator, should not use using namespace here */
	public:
		void push(int a); //Here Only Declaration is mentioned. Implemention is given in stack_implemention.cpp file
		
		int top();
		
		int pop();		
};
