//file management

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string srg;
    ifstream read("a.txt");
    if(read.is_open())
    {
        while(getline(read,srg))
        {
            cout<< srg <<endl;
        }
        read.close();
    }    
    else
        cout<<"file opening is fail.";
}