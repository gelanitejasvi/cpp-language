#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a,b and c:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"largest no.:"<<a;
    }
    else if(b>c)
    {
        cout<<"larger no.:"<<b;
    }
    else
    {
        cout<<"large no.:"<<c;
    }
}