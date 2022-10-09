#include <iostream>

using namespace std;

int main()
{
    long int N,Num,ptr = 0;  cin >> N;
    long int arr[N];
    for(int index = 0; index < N-1; index++)
    {
        cin >> Num;
        arr[Num-1] = 1;
    }
    while(arr[ptr] == 1)
    {
        ptr++;
    }
    cout << ptr+1;
}