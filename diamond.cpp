#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=5;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=sp; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<" * ";
        }
        sp--;
        cout<<"\n ";
    }
    sp=sp+2;
    for(i=4; i>=1; i--)
    {
        for(j=1; j<=sp; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<" * ";
        }
        sp++;
        cout<<"\n ";
    }
}