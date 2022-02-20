#include <iostream>

using namespace std;

int main()
{
    try{
        int *arr = new int[100000000000000000]; //1000000000 - Allocated ; 100000000000000000 - Standard Exception std::bad_alloc
        cout<<"Allocated";
    }
    catch(exception &c)
    {
        cerr<<"Standard Exception "<<c.what()<<endl;
    }
    return 0;
    //ref : https://cplusplus.com/reference/new/bad_alloc/
}