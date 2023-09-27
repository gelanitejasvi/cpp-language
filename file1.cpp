//file management
//ofstream : stream class to write on files
//ifstream : stream class to read from files
//ffstream : stream class to both read and write from/to files
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream abc("a.txt");
    if(abc.is_open())
    {
        abc<<"wel-come to skillqode";
        abc<<"\nwe started new lab";
        abc<<"\nwe started new branch";
        abc<<"\nwe complete cpp";
        abc.close();
    }
    else
        cout<<"file opening is fail.";
}