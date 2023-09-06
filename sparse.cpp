#include<iostream>
using namespace std;
int main()
{
    int a[5][5],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"enter a[%d][%d]:",i,j;
            cin>>a[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j]%2==1)
            cout<<" ";
            else
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}