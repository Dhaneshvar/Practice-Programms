#include <iostream>

#include <vector>

using namespace std;

template <class T>      //Creation of class template

class stack
{
    private:
        vector<T> ve;
    public:
        void push(T a)
        {
            ve.push_back(a);
        }
        T top()
        {
            return ve[ve.size()-1];
        }
        T pop()
        {  
            T temp = top();
            ve.pop_back();
            return temp;
        }
};
int main()
{
    //Using int
    cout<<"integer stack<int> s "<<endl;
    stack<int> s;       //Here after Class name stack we have to mension the datatype in <int> for template to be replaced.
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout <<s.pop()<<endl;
    cout <<s.pop()<<endl;
    cout <<s.pop()<<endl;
    cout <<s.pop()<<endl;
    
    //Using String
    cout<<"String stack<string> sr "<<endl;
    stack<string> sr;       //Here after Class name stack we have to mension the datatype in <string> for template to be replaced.
    sr.push("aa");
    sr.push("bb");
    sr.push("cc");
    
    cout <<sr.pop()<<endl;
    cout <<sr.pop()<<endl;
    cout <<sr.pop()<<endl;
    cout <<sr.pop()<<endl;

    return 0;
}
