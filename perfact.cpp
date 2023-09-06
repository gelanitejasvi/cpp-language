#include<iostream>
using namespace std;
int main()
{
    int i=1,sum=0,n;
    cout<<"enter n:";
    cin>>n;

    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }

    if(sum==n)
    cout<<"perfact no."<<n;
    else
    cout<<"not perfact no."<<n;
}