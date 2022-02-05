#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter 2 Numbers :"<<endl;
    cin>>num1>>num2;
    try
    {
        if(num2 == 0)
            // throw "Zero Division Error";    //This is String Statement. To Catch this it must also contain const char pointer.
            throw num2;     //This is Integer. To Catch this, catch function should contain Integer variable.
            throw;          //this is default. it is catched by catch(...)
        cout<<"num1/num2 is "<<num1/num2<<endl;
    }
    catch(const char *ch)   //For catching string 
    {
        cout<<"Error Message is  "<<ch<<endl;
    }
    // catch(int c)            //For catching integers
    // {
    //     cout<<"Numerical Error Message is "<<c<<endl;
    // }
    catch(...)  //If above catch does not work then,this Default catch(...) will work 
    {
        cout<<"Default Error"<<endl;
    }
    cout<<"END OF PROGRAMMM";
    

    return 0;
}
