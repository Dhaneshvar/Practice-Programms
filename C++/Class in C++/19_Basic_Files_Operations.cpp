/*********************************  Basic Files Operation in C++    **********************************************/
#include <iostream>

#include<fstream>                    //fileStream Library

using namespace std;

int main()
{
    fstream file;                   //fstream is Class. file is our own variable that is Object of Class.
    /****** Writing content *******************/
    file.open("file1",ios::out);    //opening  of file1 and mode "out" is write. 
    file<<"I opened the file1";     //cout<<"I opened the file1"
    file.close();
    /****** Reading content *******************/
    file.open("file1",ios::in);     //opening  of file1 and mode "in" is read a file.
    string s;
    while(file>>s)                  //Simillar to cin>>s
    {
        cout << s<<" ";
    }
    file.close();                   //Each and every File must be closed.
    return 0;
}
//https://github.com/scottfrazer/gre/blob/master/words.txt   - Try HangMan Game