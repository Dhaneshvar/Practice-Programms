#include <iostream>

using namespace std;

int main()
{
    int euro,bear,choco,cost = 0,count = 0,small,large;
    cin >> euro >> bear >> choco;
    small = bear < choco ? bear : choco;
    while(cost+small <= euro )
    {
        if(cost+small <= euro)
        {
            count++;
            cost += small;
            
        }
    }
    cout << count;
}