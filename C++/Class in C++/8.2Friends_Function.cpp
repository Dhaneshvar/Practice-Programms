#include<iostream>

using namespace std;

class mirror
{
	friend void setx(mirror &ref,int a);
	private:
		int x;
	public:
		mirror(){	//:x(0)
			x=0;
		}
};
void setx(mirror &ref,int a)
{
	ref.x = a;
	cout<<"Mirror class x is "<<ref.x<<endl;
}
int main()
{
	mirror obj;
	setx(obj,4);
}
