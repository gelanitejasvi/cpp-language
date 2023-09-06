#include<iostream>
using namespace std;
int main()
{
    char i,j,k=97;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2==0)
            cout<<" "<<(char)(k-32);
            else
            cout<<(char)k;
            k++;
        }
        cout<<"\n";
    }
}