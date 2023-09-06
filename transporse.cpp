#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"enter vala[%d][%d]:"<<i,j;
            cin>>a[i][j];
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"enter val b[%d][%d]:"<<i,j;
            cin>>b[i][j];
        }
    }
    cout<<"\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\t";
        for(j=0; j<3; j++)
        {
            cout<<b[i][j];
        }
        cout<<"\n";
    }
}