#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a:";
    cin>>a;
    if(a%4==0)
    {
        cout<<"leap year:"<<a;
    }
    else{
        cout<<"no leap year:"<<a;
    }
}