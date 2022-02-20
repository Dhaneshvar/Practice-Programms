#include<iostream>
using namespace std;
class Room
{
	private:
		//Static Data
		static int roomCount;	//For This memory is allocated seperately. so that declare before main function.
		int length;
		int breath;
	public:
		Room(int l,int b)
		{
			length = l;
			breath = b;
			roomCount++;		//This is not belongs to particular object.
		}
		int  getsize()
		{
			return length * breath;
		}
		//Static Function
		static int getroomCount()
		{
			return roomCount;
		}
};
int Room::roomCount = 0;	//Static declaration. Not a Part of Object.
int main()
{
	Room r1(30,20);
	Room r2(18,15);
	Room r3(15,10);
	
	cout<<"The size of r3 is "<<r3.getsize()<<endl;
	cout<<"Count of Room is "<<Room::getroomCount()<<endl;
}
