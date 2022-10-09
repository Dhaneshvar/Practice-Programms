#include <iostream>

using namespace std;

int main()
{
    long int N;  cin >> N;
    while(N > 1)
    {
        cout << N << " ";
        if(N&1)
        {
            N = (N * 3) + 1;
        }
        else
        {
            N = N/2;
        }
    }
    cout << "1";
}